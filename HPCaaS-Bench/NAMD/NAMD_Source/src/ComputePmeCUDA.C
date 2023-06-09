#include <numeric>
#include <algorithm>
#ifdef NAMD_CUDA
#include <cuda_runtime.h>
#endif
#ifdef NAMD_HIP
#include <hip/hip_runtime.h>
#endif
#include "Node.h"
#include "SimParameters.h"
#include "Priorities.h"
#include "ComputeNonbondedUtil.h"
#include "ComputePmeCUDA.h"
#include "ComputePmeCUDAMgr.h"
#include "PmeSolver.h"
#include "HomePatch.h"

#include "NamdEventsProfiling.h"

#if defined(NAMD_CUDA) || defined(NAMD_HIP)
//
// Class creator, multiple patches
//
ComputePmeCUDA::ComputePmeCUDA(ComputeID c, PatchIDList& pids) : Compute(c) {
  setNumPatches(pids.size());
  patches.resize(getNumPatches());
  for (int i=0;i < getNumPatches();i++) {
    patches[i].patchID = pids[i];
  }
}

//
// Class creator, single patch
//
ComputePmeCUDA::ComputePmeCUDA(ComputeID c, PatchID pid) : Compute(c) {
	setNumPatches(1);
  patches.resize(getNumPatches());
  patches[0].patchID = pid;
}

//
// Class destructor
//
ComputePmeCUDA::~ComputePmeCUDA() {
  for (int i=0;i < getNumPatches();i++) {
  	if (patches[i].positionBox != NULL) {
  		PatchMap::Object()->patch(patches[i].patchID)->unregisterPositionPickup(this, &patches[i].positionBox);
    }
    if (patches[i].avgPositionBox != NULL) {
    	PatchMap::Object()->patch(patches[i].patchID)->unregisterAvgPositionPickup(this, &patches[i].avgPositionBox);
    }
    if (patches[i].forceBox != NULL) {
    	PatchMap::Object()->patch(patches[i].patchID)->unregisterForceDeposit(this, &patches[i].forceBox);
    }
  }
  delete reduction;
  CmiDestroyLock(lock);
}

//
// Initialize
//
void ComputePmeCUDA::initialize() {
  lock = CmiCreateLock();

  // Sanity Check
  SimParameters *simParams = Node::Object()->simParameters;
  if (simParams->alchFepOn) NAMD_bug("ComputePmeCUDA::ComputePmeCUDA, alchFepOn not yet implemented");
  if (simParams->alchThermIntOn) NAMD_bug("ComputePmeCUDA::ComputePmeCUDA, alchThermIntOn not yet implemented");
  if (simParams->lesOn) NAMD_bug("ComputePmeCUDA::ComputePmeCUDA, lesOn not yet implemented");
  if (simParams->pairInteractionOn) NAMD_bug("ComputePmeCUDA::ComputePmeCUDA, pairInteractionOn not yet implemented");

  sendAtomsDone = false;
  reduction = ReductionMgr::Object()->willSubmit(REDUCTIONS_BASIC);
  // basePriority = PME_PRIORITY;
  patchCounter = getNumPatches();

  // Get proxy to ComputePmeCUDAMgr
  computePmeCUDAMgrProxy = CkpvAccess(BOCclass_group).computePmeCUDAMgr;
  mgr = computePmeCUDAMgrProxy.ckLocalBranch();
  if (mgr == NULL)
    NAMD_bug("ComputePmeCUDA::ComputePmeCUDA, unable to locate local branch of BOC entry computePmeCUDAMgr");
  pmeGrid = mgr->getPmeGrid();

  for (int i=0;i < getNumPatches();i++) {
    if (patches[i].positionBox != NULL || patches[i].avgPositionBox != NULL
      || patches[i].forceBox != NULL || patches[i].patch != NULL)
      NAMD_bug("ComputePmeCUDA::initialize() called twice or boxes not set to NULL");
    if (!(patches[i].patch = PatchMap::Object()->patch(patches[i].patchID))) {
      NAMD_bug("ComputePmeCUDA::initialize() patch not found");
    }
    patches[i].positionBox = patches[i].patch->registerPositionPickup(this);
    patches[i].forceBox = patches[i].patch->registerForceDeposit(this);
  	patches[i].avgPositionBox = patches[i].patch->registerAvgPositionPickup(this);
  }

  setupActivePencils();
}

void ComputePmeCUDA::atomUpdate() {
  atomsChanged = true;
}

//
// Setup, see which pencils overlap with the patches held by this compute
//
void ComputePmeCUDA::setupActivePencils() {
  PatchMap *patchMap = PatchMap::Object();

  for (int i=0;i < getNumPatches();i++) {
    int homey = -1;
    int homez = -1;
    mgr->getHomePencil(patches[i].patchID, homey, homez);

    patches[i].homePencilY = homey;
    patches[i].homePencilZ = homez;
    patches[i].homePencilNode = mgr->getNode(homey,homez);
    RegisterPatchMsg *msg = new RegisterPatchMsg();
    msg->i = homey;
    msg->j = homez;
    computePmeCUDAMgrProxy[patches[i].homePencilNode].registerPatch(msg);
  }

  atomsChanged = true;

}

int ComputePmeCUDA::noWork() {

  if (patches[0].patch->flags.doFullElectrostatics) return 0;

  reduction->submit();

  for (int i=0;i < getNumPatches();i++) {
    patches[i].positionBox->skip();
    patches[i].forceBox->skip();
    // We only need to call skip() once
    if (patches[i].patchID == 0) computePmeCUDAMgrProxy[patches[i].homePencilNode].skip();
  }

  return 1;
}

void ComputePmeCUDA::doWork() {
  if (sendAtomsDone) {
    // Second part of computation: receive forces from ComputePmeCUDAMgr
    // basePriority = PME_OFFLOAD_PRIORITY;
    sendAtomsDone = false;
    recvForces();
  } else {
    // First part of computation: send atoms to ComputePmeCUDAMgr
    sendAtomsDone = true;
    // basePriority = COMPUTE_HOME_PRIORITY + PATCH_PRIORITY(patchID);
    sendAtoms();
  }
}

void ComputePmeCUDA::sendAtoms() {

  Lattice& lattice = patches[0].patch->lattice;
  Vector origin = lattice.origin();
  Vector recip1 = lattice.a_r();
  Vector recip2 = lattice.b_r();
  Vector recip3 = lattice.c_r();
  double ox = origin.x;
  double oy = origin.y;
  double oz = origin.z;
  double r1x = recip1.x;
  double r1y = recip1.y;
  double r1z = recip1.z;
  double r2x = recip2.x;
  double r2y = recip2.y;
  double r2z = recip2.z;
  double r3x = recip3.x;
  double r3y = recip3.y;
  double r3z = recip3.z;

  double selfEnergy = 0.;

  for (int i=0;i < getNumPatches();i++) {
    if (patches[i].pmeForceMsg != NULL)
      NAMD_bug("ComputePmeCUDA::sendAtoms, pmeForceMsg is not empty");

  	const BigReal coulomb_sqrt = sqrt( COULOMB * ComputeNonbondedUtil::scaling
  				     * ComputeNonbondedUtil::dielectric_1 );

  	bool doMolly = patches[i].patch->flags.doMolly;
    bool doEnergy = patches[i].patch->flags.doEnergy;
    bool doVirial = patches[i].patch->flags.doVirial;
    PatchMap *patchMap = PatchMap::Object();

    // Send atom patch to pencil(s)
  // #ifdef NETWORK_PROGRESS
  //   CmiNetworkProgress();
  // #endif

    CompAtom *x = patches[i].positionBox->open();
    if ( doMolly ) {
      patches[i].positionBox->close(&x);
      x = patches[i].avgPositionBox->open();
    }

    int numAtoms = patches[i].patch->getNumAtoms();

    if ( doEnergy ) selfEnergy += calcSelfEnergy(numAtoms, x);

    // const Vector ucenter = patches[i].patch->lattice.unscale(patchMap->center(patches[i].patchID));
    // const BigReal recip11 = patches[i].patch->lattice.a_r().x;
    // const BigReal recip22 = patches[i].patch->lattice.b_r().y;
    // const BigReal recip33 = patches[i].patch->lattice.c_r().z;

    PmeAtomMsg *msg = new (numAtoms, PRIORITY_SIZE) PmeAtomMsg;
    SET_PRIORITY(msg, sequence(), PME_PRIORITY)
    // NOTE:
    // patch already contains the centered coordinates and scaled charges
  	//    memcpy(msg->atoms, patch->getCudaAtomList(), sizeof(CudaAtom)*numAtoms);

    msg->numAtoms = numAtoms;
    // msg->patchIndex = i;
    msg->i = patches[i].homePencilY;
    msg->j = patches[i].homePencilZ;
    msg->compute = this;
    msg->pe = CkMyPe();
    msg->doEnergy = doEnergy;
    msg->doVirial = doVirial;
    msg->lattice = lattice;
    CudaAtom *atoms = msg->atoms;
    // BigReal miny = 1.0e20;
    // BigReal minz = 1.0e20;
    for (int j=0;j < numAtoms;j++) {
    	CudaAtom atom;
      BigReal q = x[j].charge;
      // Convert atom positions to range [0,1)
      double px = x[j].position.x - ox;
      double py = x[j].position.y - oy;
      double pz = x[j].position.z - oz;
      double wx = px*r1x + py*r1y + pz*r1z;
      double wy = px*r2x + py*r2y + pz*r2z;
      double wz = px*r3x + py*r3y + pz*r3z;
      // double wx = x[j].position.x*recip11;
      // double wy = x[j].position.y*recip22;
      // double wz = x[j].position.z*recip33;
      wx = (wx - (floor(wx + 0.5) - 0.5));
      wy = (wy - (floor(wy + 0.5) - 0.5));
      wz = (wz - (floor(wz + 0.5) - 0.5));
      // wx = (wx - floor(wx));
      // wy = (wy - floor(wy));
      // wz = (wz - floor(wz));
      // if (wx >= 1.0) wx -= 1.0;
      // if (wy >= 1.0) wy -= 1.0;
      // if (wz >= 1.0) wz -= 1.0;
      atom.x = (float)wx;
      atom.y = (float)wy;
      atom.z = (float)wz;
      if (atom.x >= 1.0f) atom.x -= 1.0f;
      if (atom.y >= 1.0f) atom.y -= 1.0f;
      if (atom.z >= 1.0f) atom.z -= 1.0f;
    	atom.q = (float)(q*coulomb_sqrt);
  		atoms[j] = atom;
      // miny = std::min(x[j].position.y, miny);
      // minz = std::min(x[j].position.z, minz);
    }
    // Calculate corner with minimum y and z for this patch
    // double wy = miny*recip22;
    // double wz = minz*recip33;
    // msg->miny = (int)((double)pmeGrid.K2*(wy - (floor(wy + 0.5) - 0.5)));
    // msg->minz = (int)((double)pmeGrid.K3*(wz - (floor(wz + 0.5) - 0.5)));

    // For local (within shared memory node), get pointer to memory location and do direct memcpy
    // For global (on different shread memory nodes), 
    if (patches[i].homePencilNode == CkMyNode()) {
      mgr->recvAtoms(msg);
    } else {
      computePmeCUDAMgrProxy[patches[i].homePencilNode].recvAtoms(msg);
    }
    
    if ( doMolly )
      patches[i].avgPositionBox->close(&x);
    else 
      patches[i].positionBox->close(&x);
  }

  reduction->item(REDUCTION_ELECT_ENERGY_SLOW) += selfEnergy;
  reduction->submit();

}

//
// Calculate self-energy and send to PmeSolver
//
double ComputePmeCUDA::calcSelfEnergy(int numAtoms, CompAtom *x) {
  double selfEnergy = 0.0;
  for (int i=0;i < numAtoms;i++) {
    selfEnergy += x[i].charge*x[i].charge;
  }
  //const double SQRT_PI = 1.7724538509055160273; /* mathematica 15 digits*/
  selfEnergy *= -ComputeNonbondedUtil::ewaldcof*COULOMB * ComputeNonbondedUtil::scaling 
            * ComputeNonbondedUtil::dielectric_1 / SQRT_PI;
  return selfEnergy;
}

void ComputePmeCUDA::recvForces() {

  Lattice& lattice = patches[0].patch->lattice;
  Vector origin = lattice.origin();
  Vector recip1 = lattice.a_r();
  Vector recip2 = lattice.b_r();
  Vector recip3 = lattice.c_r();
  double r1x = recip1.x;
  double r1y = recip1.y;
  double r1z = recip1.z;
  double r2x = recip2.x;
  double r2y = recip2.y;
  double r2z = recip2.z;
  double r3x = recip3.x;
  double r3y = recip3.y;
  double r3z = recip3.z;

  SimParameters *simParams = Node::Object()->simParameters;

  for (int i=0;i < getNumPatches();i++) {
    if (patches[i].pmeForceMsg == NULL)
      NAMD_bug("ComputePmeCUDA::recvForces, no message in pmeForceMsg");

    CudaForce* force = patches[i].pmeForceMsg->force;
    Results *r = patches[i].forceBox->open();
    int numAtoms =  patches[i].pmeForceMsg->numAtoms;

    Force *f = r->f[Results::slow];
    if (!patches[i].pmeForceMsg->numStrayAtoms && !simParams->commOnly) {
      for(int j=0;j < numAtoms;j++) {
        double f1 = force[j].x;
        double f2 = force[j].y;
        double f3 = force[j].z;
        f[j].x += f1*r1x + f2*r2x + f3*r3x;
        f[j].y += f1*r1y + f2*r2y + f3*r3y;
        f[j].z += f1*r1z + f2*r2z + f3*r3z;
      }
    }

    patches[i].forceBox->close(&r);
    delete patches[i].pmeForceMsg;
    patches[i].pmeForceMsg = NULL;
  }

}

bool ComputePmeCUDA::storePmeForceMsg(PmeForceMsg *msg) {
  bool done = false;
  int i;
  CmiLock(lock);
  patchCounter--;
  i = patchCounter;
  if (patchCounter == 0) {
    patchCounter = getNumPatches();
    done = true;
  }
  CmiUnlock(lock);
  if (patches[i].pmeForceMsg != NULL)
    NAMD_bug("ComputePmeCUDA::storePmeForceMsg, already contains message");
  patches[i].pmeForceMsg = msg;
  return done;
}
#endif // NAMD_CUDA
