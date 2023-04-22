#!/bin/bash


module use /sw/com/modulefiles/
module swap PrgEnv-cray/8.3.3 PrgEnv-intel/8.3.3
module swap intel/2021.4.0 intel-classic/2021.4.0
module load cray-hdf5/1.12.1.3
module load cray-netcdf/4.8.1.3
module load cray-parallel-netcdf/1.12.2.3
module list

export FC=ftn
export F9X=ftn
export F77=ftn
export F90=ftn
export CXX=CC
export CC=cc
export MPIF77=cc
export MPIF90=ftn
export MPICC=cc
export MPICXX=CC

cd /lus/scratch/anberu/PIO
git clone https://github.com/NCAR/ParallelIO.git
cd ParallelIO

PIO_PATH=/lus/cls01075/anberu/PIO/PIO

cmake -DNetCDF_C_PATH=$NETCDF_DIR -DNetCDF_Fortran_PATH=$NETCDF_DIR -DPnetCDF_PATH=$PNETCDF_DIR -DHDF5_PATH=$HDF5_DIR -DCMAKE_INSTALL_PREFIX=$PIO_PATH -DPIO_USE_MALLOC=ON -DCMAKE_VERBOSE_MAKEFILE=1 -DPIO_ENABLE_TIMING=OFF 

make
make install

