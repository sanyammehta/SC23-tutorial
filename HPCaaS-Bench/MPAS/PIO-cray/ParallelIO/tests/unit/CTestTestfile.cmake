# CMake generated Testfile for 
# Source directory: /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit
# Build directory: /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pio_unit_test "/usr/bin/mpiexec" "-n" "4" "/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/pio_unit_test")
set_tests_properties(pio_unit_test PROPERTIES  TIMEOUT "60" _BACKTRACE_TRIPLES "/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/cmake/LibMPI.cmake;119;add_test;/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/CMakeLists.txt;62;add_mpi_test;/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/CMakeLists.txt;0;")
add_test(ftst_vars_chunking "/usr/bin/mpiexec" "-n" "4" "/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/ftst_vars_chunking")
set_tests_properties(ftst_vars_chunking PROPERTIES  TIMEOUT "60" _BACKTRACE_TRIPLES "/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/cmake/LibMPI.cmake;119;add_test;/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/CMakeLists.txt;66;add_mpi_test;/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/unit/CMakeLists.txt;0;")
