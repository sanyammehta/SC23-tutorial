#!/bin/bash

echo "running example: `date`"
currentdir=`pwd`

# sets up directory structure in current example directory
echo
echo "   setting up example..."
echo

rm -f -r OUTPUT_FILES

mkdir -p bin
mkdir -p OUTPUT_FILES
mkdir -p OUTPUT_FILES/DATABASES_MPI

cp DATA/Par_file OUTPUT_FILES/
cp DATA/CMTSOLUTION OUTPUT_FILES/
cp DATA/STATIONS OUTPUT_FILES/

# get the number of processors, ignoring comments in the Par_file
#NPROC=`grep ^NPROC DATA/Par_file | grep -v -E '^[[:space:]]*#' | cut -d = -f 2 | cut -d \# -f 1`
#echo "The simulation will run on NPROC = " $NPROC " MPI tasks"

#NPROC = number of processes 
#should be the same as the value of NPROC in DATA/Par_file

# decomposes mesh using the pre-saved mesh files in MESH-default
echo
echo "  decomposing mesh..."
echo
./bin/xdecompose_mesh $NPROC ./MESH-default ./OUTPUT_FILES/DATABASES_MPI/

# runs database generation
echo
echo "  running database generation on $NPROC processors..."
echo
srun -n $NPROC -N 1 --exclusive -m block:block --cpu-bind=verbose ./bin/xgenerate_databases
# assuming we run on a single node above

# runs simulation
echo
echo "  running solver on $NPROC processors..."
echo
srun -n $NPROC -N 1 --exclusive -m block:block --cpu-bind=verbose ./bin/xspecfem3D
# assuming we run on a single node above
# in order to run at different frequencies, we further add --cpu-freq=#### option to srun, where #### is the desired frequency in KHz

echo
echo "see results in directory: OUTPUT_FILES/"
echo
echo "done"
echo `date`


