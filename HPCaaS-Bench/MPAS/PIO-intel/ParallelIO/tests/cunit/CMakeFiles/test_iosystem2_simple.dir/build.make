# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /lus/cls01075/anberu/PIO/ParallelIO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /lus/cls01075/anberu/PIO/ParallelIO

# Include any dependencies generated for this target.
include tests/cunit/CMakeFiles/test_iosystem2_simple.dir/depend.make

# Include the progress variables for this target.
include tests/cunit/CMakeFiles/test_iosystem2_simple.dir/progress.make

# Include the compile flags for this target's objects.
include tests/cunit/CMakeFiles/test_iosystem2_simple.dir/flags.make

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/flags.make
tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o: tests/cunit/test_iosystem2_simple.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o   -c /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_iosystem2_simple.c

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.i"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_iosystem2_simple.c > CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.i

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.s"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_iosystem2_simple.c -o CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.s

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.o: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/flags.make
tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.o: tests/cunit/test_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.o"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_iosystem2_simple.dir/test_common.c.o   -c /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_common.c

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_iosystem2_simple.dir/test_common.c.i"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_common.c > CMakeFiles/test_iosystem2_simple.dir/test_common.c.i

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_iosystem2_simple.dir/test_common.c.s"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/test_common.c -o CMakeFiles/test_iosystem2_simple.dir/test_common.c.s

# Object files for target test_iosystem2_simple
test_iosystem2_simple_OBJECTS = \
"CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o" \
"CMakeFiles/test_iosystem2_simple.dir/test_common.c.o"

# External object files for target test_iosystem2_simple
test_iosystem2_simple_EXTERNAL_OBJECTS =

tests/cunit/test_iosystem2_simple: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_iosystem2_simple.c.o
tests/cunit/test_iosystem2_simple: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/test_common.c.o
tests/cunit/test_iosystem2_simple: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/build.make
tests/cunit/test_iosystem2_simple: src/clib/libpioc.a
tests/cunit/test_iosystem2_simple: /opt/cray/pe/netcdf/4.8.1.3/INTEL/19.0/lib/libnetcdf.so
tests/cunit/test_iosystem2_simple: /opt/cray/pe/parallel-netcdf/1.12.2.3/INTEL/19.0/lib/libpnetcdf.so
tests/cunit/test_iosystem2_simple: tests/cunit/CMakeFiles/test_iosystem2_simple.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_iosystem2_simple"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_iosystem2_simple.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/cunit/CMakeFiles/test_iosystem2_simple.dir/build: tests/cunit/test_iosystem2_simple

.PHONY : tests/cunit/CMakeFiles/test_iosystem2_simple.dir/build

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/clean:
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit && $(CMAKE_COMMAND) -P CMakeFiles/test_iosystem2_simple.dir/cmake_clean.cmake
.PHONY : tests/cunit/CMakeFiles/test_iosystem2_simple.dir/clean

tests/cunit/CMakeFiles/test_iosystem2_simple.dir/depend:
	cd /lus/cls01075/anberu/PIO/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit /lus/cls01075/anberu/PIO/ParallelIO/tests/cunit/CMakeFiles/test_iosystem2_simple.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/cunit/CMakeFiles/test_iosystem2_simple.dir/depend

