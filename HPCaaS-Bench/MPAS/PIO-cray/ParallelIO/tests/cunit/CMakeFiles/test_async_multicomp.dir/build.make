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
include tests/cunit/CMakeFiles/test_async_multicomp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/cunit/CMakeFiles/test_async_multicomp.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/cunit/CMakeFiles/test_async_multicomp.dir/progress.make

# Include the compile flags for this target's objects.
include tests/cunit/CMakeFiles/test_async_multicomp.dir/flags.make

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o: tests/cunit/CMakeFiles/test_async_multicomp.dir/flags.make
tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o: tests/cunit/test_async_multicomp.c
tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o: tests/cunit/CMakeFiles/test_async_multicomp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o -MF CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o.d -o CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o -c /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_async_multicomp.c

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.i"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_async_multicomp.c > CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.i

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.s"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_async_multicomp.c -o CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.s

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o: tests/cunit/CMakeFiles/test_async_multicomp.dir/flags.make
tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o: tests/cunit/test_common.c
tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o: tests/cunit/CMakeFiles/test_async_multicomp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o -MF CMakeFiles/test_async_multicomp.dir/test_common.c.o.d -o CMakeFiles/test_async_multicomp.dir/test_common.c.o -c /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_common.c

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_async_multicomp.dir/test_common.c.i"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_common.c > CMakeFiles/test_async_multicomp.dir/test_common.c.i

tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_async_multicomp.dir/test_common.c.s"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.20/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/test_common.c -o CMakeFiles/test_async_multicomp.dir/test_common.c.s

# Object files for target test_async_multicomp
test_async_multicomp_OBJECTS = \
"CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o" \
"CMakeFiles/test_async_multicomp.dir/test_common.c.o"

# External object files for target test_async_multicomp
test_async_multicomp_EXTERNAL_OBJECTS =

tests/cunit/test_async_multicomp: tests/cunit/CMakeFiles/test_async_multicomp.dir/test_async_multicomp.c.o
tests/cunit/test_async_multicomp: tests/cunit/CMakeFiles/test_async_multicomp.dir/test_common.c.o
tests/cunit/test_async_multicomp: tests/cunit/CMakeFiles/test_async_multicomp.dir/build.make
tests/cunit/test_async_multicomp: src/clib/libpioc.a
tests/cunit/test_async_multicomp: /opt/cray/pe/netcdf/4.9.0.3/CRAYCLANG/14.0/lib/libnetcdf.so
tests/cunit/test_async_multicomp: /opt/cray/pe/parallel-netcdf/1.12.3.3/CRAYCLANG/14.0/lib/libpnetcdf.so
tests/cunit/test_async_multicomp: tests/cunit/CMakeFiles/test_async_multicomp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_async_multicomp"
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_async_multicomp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/cunit/CMakeFiles/test_async_multicomp.dir/build: tests/cunit/test_async_multicomp
.PHONY : tests/cunit/CMakeFiles/test_async_multicomp.dir/build

tests/cunit/CMakeFiles/test_async_multicomp.dir/clean:
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit && $(CMAKE_COMMAND) -P CMakeFiles/test_async_multicomp.dir/cmake_clean.cmake
.PHONY : tests/cunit/CMakeFiles/test_async_multicomp.dir/clean

tests/cunit/CMakeFiles/test_async_multicomp.dir/depend:
	cd /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit /lus/scratch/smehta/MPAS/PIO-cray/ParallelIO/tests/cunit/CMakeFiles/test_async_multicomp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/cunit/CMakeFiles/test_async_multicomp.dir/depend

