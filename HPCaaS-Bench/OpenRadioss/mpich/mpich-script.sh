#!/bin/bash

#SBATCH --ntasks=32
#SBATCH --cpus-per-task=4
#SBATCH --nodes=1
#SBATCH --exclusive
#SBATCH --hint=nomultithread
#SBATCH -p hotlum
#SBATCH --time=240
##SBATCH --distribution=block:block

#export FI_LOG_LEVEL=Info
export OMP_NUM_THREADS=4

srun -n 32 -N 1 -c 4 --cpu-bind=verbose ./engine_linux64_gf -i NEON1M11_0001.rad -norst -nt 4
