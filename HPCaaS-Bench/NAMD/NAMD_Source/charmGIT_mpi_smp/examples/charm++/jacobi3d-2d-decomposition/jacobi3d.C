#define MAX_ITER	100	
#define LEFT			1
#define RIGHT			2
#define TOP			3
#define BOTTOM			4
#define FRONT			5
#define BACK			6
#define DIVIDEBY7       	0.14285714285714285714
#define DELTA       	        0.01

const double THRESHOLD   =  0.004;
#include "jacobi3d.decl.h"

#include <vector>

/*readonly*/ CProxy_Main mainProxy;
/*readonly*/ int arrayDimX;
/*readonly*/ int arrayDimY;
/*readonly*/ int arrayDimZ;
/*readonly*/ int blockDimX;
/*readonly*/ int blockDimY;
/*readonly*/ int blockDimZ;

// specify the number of worker chares in each dimension
/*readonly*/ int numChareX;
/*readonly*/ int numChareY;
/*readonly*/ int numChareZ;
/*readonly*/ int maxiterations;

class Main : public CBase_Main {
  double startTime;
  double endTime;
public:
  CProxy_Jacobi array;
  int iterations;

  Main(CkArgMsg* m) {
    if ( (m->argc<3) || (m->argc>8) ) {
      CkPrintf("%s [array_size] [block_size]\n", m->argv[0]);
      CkPrintf("OR %s [array_size] [block_size] maxiterations\n", m->argv[0]);
      CkPrintf("OR %s [array_size_X] [array_size_Y] [array_size_Z] [block_size_X] [block_size_Y] [block_size_Z]\n", m->argv[0]);
      CkPrintf("OR %s [array_size_X] [array_size_Y] [array_size_Z] [block_size_X] [block_size_Y] [block_size_Z] maxiterations\n", m->argv[0]);
      CkAbort("Abort");
    }

    iterations = 0;
    // store the main proxy
    mainProxy = thisProxy;

    if(m->argc <=4 ) {
      arrayDimX = arrayDimY = arrayDimZ = atoi(m->argv[1]);
      blockDimX = blockDimY = blockDimZ = atoi(m->argv[2]); 
    }
    else if (m->argc <=8) {
      arrayDimX = atoi(m->argv[1]);
      arrayDimY = atoi(m->argv[2]);
      arrayDimZ = atoi(m->argv[3]);
      blockDimX = atoi(m->argv[4]); 
      blockDimY = atoi(m->argv[5]); 
      blockDimZ = atoi(m->argv[6]);
    }

    maxiterations = MAX_ITER;
    if(m->argc==4)
      maxiterations = atoi(m->argv[3]); 
    if(m->argc==8)
      maxiterations = atoi(m->argv[7]); 

    if (arrayDimX < blockDimX || arrayDimX % blockDimX != 0)
      CkAbort("array_size_X %% block_size_X != 0!");
    if (arrayDimY < blockDimY || arrayDimY % blockDimY != 0)
      CkAbort("array_size_Y %% block_size_Y != 0!");
    if (arrayDimZ < blockDimZ || arrayDimZ % blockDimZ != 0)
      CkAbort("array_size_Z %% block_size_Z != 0!");

    numChareX = arrayDimX / blockDimX;
    numChareY = arrayDimY / blockDimY;
    numChareZ = arrayDimZ / blockDimZ;

    // print info
    CkPrintf("\nSTENCIL COMPUTATION WITH NO BARRIERS\n");
    CkPrintf("Running Jacobi on %d processors with (%d, %d, %d) chares\n", CkNumPes(), numChareX, numChareY, numChareZ);
    CkPrintf("Array Dimensions: %d %d %d\n", arrayDimX, arrayDimY, arrayDimZ);
    CkPrintf("Block Dimensions: %d %d %d\n", blockDimX, blockDimY, blockDimZ);

    // Create new array of worker chares
    array = CProxy_Jacobi::ckNew(numChareX, numChareY, numChareZ);

    //Start the computation
    array.run();
    startTime = CkWallTimer();
  }

  void done(int totalIter)
  {
    if(totalIter >= maxiterations)
      CkPrintf("Finish due to max iterations %d, total time %.3f seconds. \n", totalIter, CkWallTimer()-startTime); 
    else
      CkPrintf("Finish due to convergence, iterations %d, total time %.3f seconds. \n", totalIter, CkWallTimer()-startTime); 
    CkExit();
  }
};


class Jacobi: public CBase_Jacobi {
  Jacobi_SDAG_CODE

  using array3d = std::vector<std::vector<std::vector<double>>>;
  using array2d = std::vector<std::vector<double>>;
  using array1d = std::vector<double>;

public:
    int iterations;
    int neighbors;
    int remoteCount;
    array3d temperature;
    array3d new_temperature;
    int converged;
    bool leftBound, rightBound, topBound, bottomBound, frontBound, backBound;
    int istart, jstart, kstart, ifinish, jfinish, kfinish;
    double max_error;

    // Constructor, initialize values
    Jacobi()
    : iterations(0)
    , neighbors(0)
    , remoteCount(0)
    , temperature(blockDimX + 2, array2d(blockDimY + 2, array1d(blockDimZ + 2, 0.0)))
    , new_temperature(blockDimX + 2, array2d(blockDimY + 2, array1d(blockDimZ + 2, 0.0)))
    , converged(0)
    , istart(1)
    , jstart(1)
    , kstart(1)
    , ifinish(blockDimX+1)
    , jfinish(blockDimY+1)
    , kfinish(blockDimZ+1)
    , max_error(0.0)
    {
      leftBound = rightBound = topBound = bottomBound = frontBound = backBound = false;
      if(thisIndex.x == 0) {
        leftBound = true;
        istart++;
      }
      else
        neighbors++;
      if(thisIndex.x == numChareX-1) {
        rightBound = true;
        ifinish--;
      }
      else
        neighbors++;

      if(thisIndex.y == 0) {
        bottomBound = true;
        jstart++;
      }
      else
        neighbors++;

      if(thisIndex.y == numChareY-1) {
        topBound = true;
        jfinish--;
      }
      else
        neighbors++;

      if(thisIndex.z == 0) {
        backBound = true;
        kstart++;
      }
      else
        neighbors++;

      if(thisIndex.z == numChareZ-1) {
        frontBound = true;
        kfinish--;
      }
      else
        neighbors++;

      constrainBC();
    }

    void pup(PUP::er &p)
    {
      p|iterations;
      p|neighbors;
      p|temperature;
      p|new_temperature;
      // Question: I don't think it's supposed to be here
      // Also: Where are other PUP variables?
      iterations = 0;
    }

    Jacobi(CkMigrateMessage* m) { }

    // Send ghost faces to the six neighbors
    void begin_iteration(void) {
      iterations++;
      // Copy different faces into messages
      array1d leftGhost(blockDimY*blockDimZ);
      array1d rightGhost(blockDimY*blockDimZ);
      array1d topGhost(blockDimX*blockDimZ);
      array1d bottomGhost(blockDimX*blockDimZ);
      array1d frontGhost(blockDimX*blockDimY);
      array1d backGhost(blockDimX*blockDimY);
      for(int k=0; k<blockDimZ; ++k)
        for(int j=0; j<blockDimY; ++j) {
          leftGhost[k*blockDimY+j] = temperature[1][j+1][k+1];
          rightGhost[k*blockDimY+j] = temperature[blockDimX][j+1][k+1];
        }

      for(int k=0; k<blockDimZ; ++k)
        for(int i=0; i<blockDimX; ++i) {
          bottomGhost[k*blockDimX+i] = temperature[i+1][1][k+1];
          topGhost[k*blockDimX+i] = temperature[i+1][blockDimY][k+1];
        }

      for(int j=0; j<blockDimY; ++j)
        for(int i=0; i<blockDimX; ++i) {
          backGhost[j*blockDimX+i] = temperature[i+1][j+1][1];
          frontGhost[j*blockDimX+i] = temperature[i+1][j+1][blockDimZ];
        }

      int x = thisIndex.x, y = thisIndex.y, z = thisIndex.z;
      if(!leftBound)
        thisProxy(x-1,y,z).receiveGhosts(iterations, RIGHT,  blockDimY, blockDimZ, leftGhost.data());
      if(!rightBound)
        thisProxy(x+1,y,z).receiveGhosts(iterations, LEFT,   blockDimY, blockDimZ, rightGhost.data());
      if(!topBound)
        thisProxy(x,y+1,z).receiveGhosts(iterations, BOTTOM,    blockDimX, blockDimZ, topGhost.data());
      if(!bottomBound)
        thisProxy(x,y-1,z).receiveGhosts(iterations, TOP, blockDimX, blockDimZ, bottomGhost.data());
      if(!frontBound)
        thisProxy(x,y,z+1).receiveGhosts(iterations, BACK,   blockDimX, blockDimY, frontGhost.data());
      if(!backBound)
        thisProxy(x,y,z-1).receiveGhosts(iterations, FRONT,  blockDimX, blockDimY, backGhost.data());
    }

    void processGhosts(int dir, int height, int width, const double* gh) {
      switch(dir) {
      case LEFT:
        for(int k=0; k<width; ++k)
          for(int j=0; j<height; ++j) {
            temperature[0][j+1][k+1] = gh[k*height+j];
          }
        break;
      case RIGHT:
        for(int k=0; k<width; ++k)
          for(int j=0; j<height; ++j) {
            temperature[blockDimX+1][j+1][k+1] = gh[k*height+j];
          }
        break;
      case BOTTOM:
        for(int k=0; k<width; ++k)
          for(int i=0; i<height; ++i) {
            temperature[i+1][0][k+1] = gh[k*height+i];
          }
        break;
      case TOP:
        for(int k=0; k<width; ++k)
          for(int i=0; i<height; ++i) {
            temperature[i+1][blockDimY+1][k+1] = gh[k*height+i];
          }
        break;
      case FRONT:
        for(int j=0; j<width; ++j)
          for(int i=0; i<height; ++i) {
            temperature[i+1][j+1][blockDimZ+1] = gh[j*height+i];
          }
        break;
      case BACK:
        for(int j=0; j<width; ++j)
          for(int i=0; i<height; ++i) {
            temperature[i+1][j+1][0] = gh[j*height+i];
          }
        break;
      default:
        CkAbort("ERROR\n");
      }
    }

    // Check to see if we have received all neighbor values yet
    void check_and_compute() {
      double error = 0.0;
      max_error = 0.0;
      for(int i=istart; i<ifinish; ++i) 
        for(int j=jstart; j<jfinish; ++j)
          for(int k=kstart; k<kfinish; ++k){
            // update my value based on the surrounding values
            new_temperature[i][j][k] = (temperature[i-1][j][k] 
              +  temperature[i+1][j][k]
              +  temperature[i][j-1][k]
              +  temperature[i][j+1][k]
              +  temperature[i][j][k-1]
              +  temperature[i][j][k+1]
              +  temperature[i][j][k] ) * DIVIDEBY7;
            error = fabs(new_temperature[i][j][k] - temperature[i][j][k]);
            if (error > max_error) {
              max_error = error;
            }
          } // end for

      temperature.swap(new_temperature);
      //dumpMatrix();
    }

    void dumpMatrix()
    {

      if(thisIndex.x + thisIndex.y + thisIndex.z == 0)
      {
        CkPrintf("\n\n[%d:%d:%d]\n", thisIndex.x, thisIndex.y, thisIndex.z);
        for(int i=0; i<blockDimX+2; ++i){
          for(int j=0; j<blockDimY+2; ++j){
            for(int k=0; k<blockDimZ+2; ++k){
              CkPrintf(" [%d:%d:%d %.3f] ", i,j,k, temperature[i][j][k]);
            }
            CkPrintf("\n");
          }
          CkPrintf("\n");
        }
        CkPrintf("\n\n");
      }
    }
    // Enforce some boundary conditions
    void constrainBC() {
      if(leftBound)
        for(int j=0; j<blockDimY+2; ++j)
          for(int k=0; k<blockDimZ+2; ++k)
          {   
            new_temperature[1][j][k] = temperature[1][j][k] = 1.0;
          }
      if(rightBound)
        for(int j=0; j<blockDimY+2; ++j)
          for(int k=0; k<blockDimZ+2; ++k)
          {   
            new_temperature[blockDimX][j][k] = temperature[blockDimX][j][k] = 1.0;
          }

      if(topBound)
        for(int i=0; i<blockDimX+2; ++i)
          for(int k=0; k<blockDimZ+2; ++k)
          {   
            new_temperature[i][blockDimY][k]  = temperature[i][blockDimY][k] = 1.0;
          }
      if(bottomBound)
        for(int i=0; i<blockDimX+2; ++i)
          for(int k=0; k<blockDimZ+2; ++k)
          {   
            new_temperature[i][1][k]  = temperature[i][1][k] = 1.0;
          }

      if(frontBound)
        for(int i=0; i<blockDimX+2; ++i)
          for(int j=0; j<blockDimY+2; ++j)
          {   
            new_temperature[i][j][blockDimZ] = temperature[i][j][blockDimZ] = 1.0;
          }

      if(backBound)
        for(int i=0; i<blockDimX+2; ++i)
          for(int j=0; j<blockDimY+2; ++j)
          {   
            new_temperature[i][j][1] = temperature[i][j][1] = 1.0;
          }
    }
};

#include "jacobi3d.def.h"
