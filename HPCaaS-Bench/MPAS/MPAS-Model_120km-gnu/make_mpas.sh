#!/bin/bash


###### compile with Intel ##########
module use /sw/com/modulefiles/
module swap PrgEnv-cray/8.3.3 PrgEnv-intel/8.3.3
module swap intel/2021.4.0 intel-classic/2021.4.0
module load cray-hdf5
module load cray-netcdf
module load cray-parallel-netcdf
module list


##### compile with gnu ######

#module swap cce gcc
#module swap PrgEnv-cray PrgEnv-gnu
#module load cray-hdf5-parallel
#module load cray-netcdf-hdf5parallel
#module load cray-parallel-netcdf

#module li

###############################
export F9X=ftn
export F77=ftn
export F90=ftn
export CXX=CC
export CC=cc
export MPIF77=cc
export MPIF90=ftn
export MPICC=cc
export MPICXX=CC


#export PIO= < full path of ParallelIO install folder >
#export NETCDF= < full path of NetCDF-C install folder >
#export PNETCDF= < full path of Parallel-NetCDF install folder >
#PIO_DIR=/home/users/anberu/PIO_GNU/ParallelIO-pio1_7_1/pio
PIO_DIR=/lus/scratch/anberu/PIO/PIO
#NETCDF_PATH=/opt/cray/pe/netcdf-hdf5parallel/4.8.1.3/INTEL/19.0

export PIO=$PIO_DIR
export NETCDF=$NETCDF_DIR
export PNETCDF=$PNETCDF_DIR

#make -j 8 gfortran CORE=atmosphere USE_PIO=true PRECISION=single 2>&1 | tee make.output
#make -j 8 ifort CORE=atmosphere FC=ftn CC=cc CXX=CC USE_PIO=true PRECISION=single 2>&1 | tee make.output
#make -j 8 ifort CORE=atmosphere USE_PIO2=true PRECISION=single 2>&1 | tee make.output

make -j 8 intel-nersc CORE=atmosphere  USE_PIO2=true PRECISION=single 2>&1 | tee make.output

