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
include examples/c/CMakeFiles/example1.dir/depend.make

# Include the progress variables for this target.
include examples/c/CMakeFiles/example1.dir/progress.make

# Include the compile flags for this target's objects.
include examples/c/CMakeFiles/example1.dir/flags.make

examples/c/CMakeFiles/example1.dir/example1.c.o: examples/c/CMakeFiles/example1.dir/flags.make
examples/c/CMakeFiles/example1.dir/example1.c.o: examples/c/example1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/c/CMakeFiles/example1.dir/example1.c.o"
	cd /lus/cls01075/anberu/PIO/ParallelIO/examples/c && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/example1.dir/example1.c.o   -c /lus/cls01075/anberu/PIO/ParallelIO/examples/c/example1.c

examples/c/CMakeFiles/example1.dir/example1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example1.dir/example1.c.i"
	cd /lus/cls01075/anberu/PIO/ParallelIO/examples/c && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /lus/cls01075/anberu/PIO/ParallelIO/examples/c/example1.c > CMakeFiles/example1.dir/example1.c.i

examples/c/CMakeFiles/example1.dir/example1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example1.dir/example1.c.s"
	cd /lus/cls01075/anberu/PIO/ParallelIO/examples/c && /opt/cray/pe/craype/2.7.15/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /lus/cls01075/anberu/PIO/ParallelIO/examples/c/example1.c -o CMakeFiles/example1.dir/example1.c.s

# Object files for target example1
example1_OBJECTS = \
"CMakeFiles/example1.dir/example1.c.o"

# External object files for target example1
example1_EXTERNAL_OBJECTS =

examples/c/example1: examples/c/CMakeFiles/example1.dir/example1.c.o
examples/c/example1: examples/c/CMakeFiles/example1.dir/build.make
examples/c/example1: src/clib/libpioc.a
examples/c/example1: /opt/cray/pe/netcdf/4.8.1.3/INTEL/19.0/lib/libnetcdf.so
examples/c/example1: /opt/cray/pe/parallel-netcdf/1.12.2.3/INTEL/19.0/lib/libpnetcdf.so
examples/c/example1: examples/c/CMakeFiles/example1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable example1"
	cd /lus/cls01075/anberu/PIO/ParallelIO/examples/c && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/c/CMakeFiles/example1.dir/build: examples/c/example1

.PHONY : examples/c/CMakeFiles/example1.dir/build

examples/c/CMakeFiles/example1.dir/clean:
	cd /lus/cls01075/anberu/PIO/ParallelIO/examples/c && $(CMAKE_COMMAND) -P CMakeFiles/example1.dir/cmake_clean.cmake
.PHONY : examples/c/CMakeFiles/example1.dir/clean

examples/c/CMakeFiles/example1.dir/depend:
	cd /lus/cls01075/anberu/PIO/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/examples/c /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/examples/c /lus/cls01075/anberu/PIO/ParallelIO/examples/c/CMakeFiles/example1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/c/CMakeFiles/example1.dir/depend

