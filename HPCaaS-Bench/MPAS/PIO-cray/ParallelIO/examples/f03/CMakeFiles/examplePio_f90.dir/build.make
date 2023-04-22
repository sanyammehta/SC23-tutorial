# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO

# Include any dependencies generated for this target.
include examples/f03/CMakeFiles/examplePio_f90.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/f03/CMakeFiles/examplePio_f90.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/f03/CMakeFiles/examplePio_f90.dir/progress.make

# Include the compile flags for this target's objects.
include examples/f03/CMakeFiles/examplePio_f90.dir/flags.make

examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.o: examples/f03/CMakeFiles/examplePio_f90.dir/flags.make
examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.o: examples/f03/examplePio.F90
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Fortran object examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.o"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03 && /opt/cray/pe/craype/2.7.20/bin/ftn $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03/examplePio.F90 -o CMakeFiles/examplePio_f90.dir/examplePio.F90.o

examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing Fortran source to CMakeFiles/examplePio_f90.dir/examplePio.F90.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_Fortran_CREATE_PREPROCESSED_SOURCE

examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling Fortran source to assembly CMakeFiles/examplePio_f90.dir/examplePio.F90.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_Fortran_CREATE_ASSEMBLY_SOURCE

# Object files for target examplePio_f90
examplePio_f90_OBJECTS = \
"CMakeFiles/examplePio_f90.dir/examplePio.F90.o"

# External object files for target examplePio_f90
examplePio_f90_EXTERNAL_OBJECTS =

examples/f03/examplePio_f90: examples/f03/CMakeFiles/examplePio_f90.dir/examplePio.F90.o
examples/f03/examplePio_f90: examples/f03/CMakeFiles/examplePio_f90.dir/build.make
examples/f03/examplePio_f90: src/flib/libpiof.a
examples/f03/examplePio_f90: src/clib/libpioc.a
examples/f03/examplePio_f90: /opt/cray/pe/netcdf/4.9.0.3/CRAYCLANG/14.0/lib/libnetcdf.so
examples/f03/examplePio_f90: /opt/cray/pe/netcdf/4.9.0.3/CRAYCLANG/14.0/lib/libnetcdff.so
examples/f03/examplePio_f90: /opt/cray/pe/parallel-netcdf/1.12.3.3/CRAYCLANG/14.0/lib/libpnetcdf.so
examples/f03/examplePio_f90: examples/f03/CMakeFiles/examplePio_f90.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking Fortran executable examplePio_f90"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/examplePio_f90.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/f03/CMakeFiles/examplePio_f90.dir/build: examples/f03/examplePio_f90
.PHONY : examples/f03/CMakeFiles/examplePio_f90.dir/build

examples/f03/CMakeFiles/examplePio_f90.dir/clean:
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03 && $(CMAKE_COMMAND) -P CMakeFiles/examplePio_f90.dir/cmake_clean.cmake
.PHONY : examples/f03/CMakeFiles/examplePio_f90.dir/clean

examples/f03/CMakeFiles/examplePio_f90.dir/depend:
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03 /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03 /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/examples/f03/CMakeFiles/examplePio_f90.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/f03/CMakeFiles/examplePio_f90.dir/depend

