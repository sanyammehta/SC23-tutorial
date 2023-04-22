#!/bin/bash

#SBATCH --ntasks=28
#SBATCH --cpus-per-task=4
#SBATCH --nodes=1
#SBATCH --exclusive
#SBATCH --hint=nomultithread
#SBATCH -p hotlum
#SBATCH --time=240
#SBATCH --distribution=block:cyclic

export OMP_NUM_THREADS=4
#export FI_LOG_LEVEL=Info

srun --mpi=pmix -n 28 -N 1 -c 4 ./engine_linux64_gf -i NEON1M11_0001.rad -norst -nt 4
