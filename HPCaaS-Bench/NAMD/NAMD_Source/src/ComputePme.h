/**
***  Copyright (c) 1995, 1996, 1997, 1998, 1999, 2000 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef COMPUTEPME_H
#define COMPUTEPME_H

#include "Compute.h"
#include "PmeBase.h"
#include "NamdTypes.h"
#include "PatchTypes.h"
#include "Box.h"
#include "OwnerBox.h"

class PmeRealSpace;
class ComputeMgr;
class SubmitReduction;
class PmeGridMsg;
class ComputePmeMgr;
class Patch;

class ComputePmeUtil {

public:

  ComputePmeUtil() {};
  ~ComputePmeUtil() {}
  static void select(void);

  static int numGrids;
  static Bool alchOn;
  static Bool alchFepOn;
  static Bool alchThermIntOn;
  static Bool alchDecouple;
  static BigReal alchElecLambdaStart;
  static Bool lesOn;
  static int lesFactor;
  static Bool pairOn; // alias for pairInteractionOn
  static Bool selfOn; // alias for pairInteractionSelf

};


class ComputePme : public Compute, public ComputePmeUtil {
public:
  ComputePme(ComputeID c, PatchID pid);
  virtual ~ComputePme();
  void initialize();
  void atomUpdate();
  int noWork();
  void doWork();
  void doQMWork() ;
  void ungridForces();
  void setMgr(ComputePmeMgr *mgr) { myMgr = mgr; }

  friend class ComputePmeMgr;
 private:
#if defined(NAMD_CUDA) || defined(NAMD_HIP)
  int cuda_atoms_offset;
  float *f_data_host;  // force buffers for CUDA
  float *f_data_dev;
#endif

  PatchID patchID;
  Patch *patch;
  Box<Patch,CompAtom> *positionBox;
  Box<Patch,CompAtom> *avgPositionBox;
  Box<Patch,Results> *forceBox;

  PmeGrid myGrid;
  int numGridsMax; // Only used for deallocating arrays
  int offload;
  
  Bool qmForcesOn;
  
  PmeRealSpace *myRealSpace[PME_MAX_EVALS];
  int numLocalAtoms;
  PmeParticle *localData;
  ResizeArray<PmeParticle> localData_alloc;
  unsigned char *localPartition;
  ResizeArray<unsigned char> localPartition_alloc;
  ResizeArray<Vector> localResults_alloc;
  int numGridAtoms[PME_MAX_EVALS];
  PmeParticle *localGridData[PME_MAX_EVALS];
  ComputePmeMgr *myMgr;

  int atomsChanged;

  // Local array constructed at each time step with QM charges for 
  Real *qmLocalCharges ;
  // Local array with indices of QM atoms
  int *qmLoclIndx ;
  int numLocalQMAtoms;
  
};

ResizeArray<ComputePme*>& getComputes(ComputePmeMgr *mgr) ;

#endif

