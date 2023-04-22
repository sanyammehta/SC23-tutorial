# CMake generated Testfile for 
# Source directory: /lus/cls01075/anberu/PIO/ParallelIO/examples/c
# Build directory: /lus/cls01075/anberu/PIO/ParallelIO/examples/c
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(examplePio "/usr/bin/mpiexec" "-n" "4" "/lus/cls01075/anberu/PIO/ParallelIO/examples/c/examplePio")
set_tests_properties(examplePio PROPERTIES  TIMEOUT "60" _BACKTRACE_TRIPLES "/lus/cls01075/anberu/PIO/ParallelIO/cmake/LibMPI.cmake;119;add_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;48;add_mpi_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;0;")
add_test(example1 "/usr/bin/mpiexec" "-n" "4" "/lus/cls01075/anberu/PIO/ParallelIO/examples/c/example1")
set_tests_properties(example1 PROPERTIES  TIMEOUT "60" _BACKTRACE_TRIPLES "/lus/cls01075/anberu/PIO/ParallelIO/cmake/LibMPI.cmake;119;add_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;49;add_mpi_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;0;")
add_test(darray_no_async "/usr/bin/mpiexec" "-n" "4" "/lus/cls01075/anberu/PIO/ParallelIO/examples/c/darray_no_async")
set_tests_properties(darray_no_async PROPERTIES  TIMEOUT "60" _BACKTRACE_TRIPLES "/lus/cls01075/anberu/PIO/ParallelIO/cmake/LibMPI.cmake;119;add_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;51;add_mpi_test;/lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeLists.txt;0;")
