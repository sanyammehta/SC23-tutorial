#!/bin/bash -x

#SBATCH --time=1:00:00
#SBATCH --export=ALL
#SBATCH --hint=nomultithread
#SBATCH --exclusive
#SBATCH --partition=hotlum
#SBATCH --exclusive
#SBATCH --nodes=2
#SBATCH --job-name=MPAS-test-2N

#module swap PrgEnv-cray PrgEnv-intel
#module load cray-hdf5-parallel
#module load cray-netcdf-hdf5parallel

module list

#export KMP_STACKSIZE=4G
#export OMP_STACKSIZE=4G
#export OMP_PROC_BIND=close
#export OMP_DISPLAY_AFFINITY=true
#export MPICH_NO_BUFFER_ALIAS_CHECK=1
#export FOR_DISABLE_KMP_MALLOC=1
#export MALLOC_MMAP_MAX_=0
#export MALLOC_TRIM_THRESHOLD_=1073741824
export MPICH_VERSION_DISPLAY=1
export MPICH_ENV_DISPLAY=1
#export MPICH_ABORT_ON_ERROR=1
#export MPICH_OFI_NUM_NICS=1
#export MPICH_OFI_STARTUP_CONNECT=1
#export MPICH_OFI_VERBOSE=1
#export MPICH_MPIIO_STATS=1
#export MPICH_MPIIO_HINTS_DISPLAY=1

ulimit -s unlimited
ulimit -c unlimited
ulimit -a

#export turbo_status="/lus/cls01075/local/bin/turboboost status"
#export turbo_switch="/lus/cls01075/local/bin/turboboost on"
#srun -v --ntasks=$SLURM_NNODES --cpus-per-task=1 --tasks-per-node=1 -m plane=128 $turbo_switch
#srun -v --ntasks=$SLURM_NNODES --cpus-per-task=1 --tasks-per-node=1 -m plane=128 $turbo_status


/usr/bin/time -pv srun -v --ntasks=256 --cpus-per-task=1 --tasks-per-node=128 -m plane=128 ./atmosphere_model 

#/usr/bin/time -pv srun -v --ntasks=1024 --cpus-per-task=1 --tasks-per-node=128 -m plane=128 $main_dir/brams/build/brams-6.0 -f $main_dir/Input/bm/RAMSIN_BASIC_INI_2022051500 >& $RUNDIR/20216051500_ini.out.${SLURM_JOBID}

#/usr/bin/time -pv srun -v --ntasks=1024 --cpus-per-task=1 --tasks-per-node=128 -m plane=128 $main_dir/brams/build/brams-6.0 -f $main_dir/Input/bm/RAMSIN_BASIC_INI_2022051500 >& $RUNDIR/20216051500_ini.out.${SLURM_JOBID}
