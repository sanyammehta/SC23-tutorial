#!/bin/bash

module purge
module load PrgEnv-cray craype-x86-milan cray-fftw cray-pmi

git clone https://github.com/UIUC-PPL/charm charm.git
tar xvf tar/NAMD_Git-2022-07-21_Source.tar.gz
cd NAMD_Git-2022-07-21_Source
export NAMD_PATH=`pwd`

# charm++ stuff
mv ../charm.git charmGIT_mpi_smp
cd charmGIT_mpi_smp
CXX=CC CC=cc ./build charm++ mpi-crayshasta smp --with-production -j4
cd ..

#TCL stuff
cd ..
tar xvf tar/tcl8.5.9-linux-x86_64.tar
cd tcl8.5.9-linux-x86_64
export TCL_PATH=`pwd`
cd ..


#NAMD stuff
cd NAMD_Source
cp ../modif/Linux-x86_64-cce.arch arch/.
cp ../modif/config .

./config Linux-x86_64-cce.mpi --charm-base ${NAMD_PATH}/charmGIT_mpi_smp --charm-arch mpi-crayshasta-smp --with-memopt --with-fftw3 --fftw-prefix $FFTW_ROOT --tcl-prefix ${TCL_PATH}

cd Linux-x86_64-cce.mpi
make -j4
cd ../..
ls NAMD_Git-2022-07-21_Source/Linux-x86_64-cce.mpi/namd2
