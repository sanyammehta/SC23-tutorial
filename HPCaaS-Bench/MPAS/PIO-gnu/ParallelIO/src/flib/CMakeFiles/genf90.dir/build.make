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
CMAKE_SOURCE_DIR = /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO

# Utility rule file for genf90.

# Include any custom commands dependencies for this target.
include src/flib/CMakeFiles/genf90.dir/compiler_depend.make

# Include the progress variables for this target.
include src/flib/CMakeFiles/genf90.dir/progress.make

src/flib/CMakeFiles/genf90: src/flib/CMakeFiles/genf90-complete

src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-install
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-mkdir
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-download
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-update
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-patch
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-configure
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-build
src/flib/CMakeFiles/genf90-complete: src/flib/genf90/src/genf90-stamp/genf90-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/CMakeFiles
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/CMakeFiles/genf90-complete
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-done

src/flib/genf90/src/genf90-stamp/genf90-build: src/flib/genf90/src/genf90-stamp/genf90-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E echo_append
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-build

src/flib/genf90/src/genf90-stamp/genf90-configure: src/flib/genf90/tmp/genf90-cfgcmd.txt
src/flib/genf90/src/genf90-stamp/genf90-configure: src/flib/genf90/src/genf90-stamp/genf90-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E echo_append
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-configure

src/flib/genf90/src/genf90-stamp/genf90-download: src/flib/genf90/src/genf90-stamp/genf90-gitinfo.txt
src/flib/genf90/src/genf90-stamp/genf90-download: src/flib/genf90/src/genf90-stamp/genf90-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src && /usr/bin/cmake -P /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/tmp/genf90-gitclone.cmake
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-download

src/flib/genf90/src/genf90-stamp/genf90-install: src/flib/genf90/src/genf90-stamp/genf90-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E echo_append
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-install

src/flib/genf90/src/genf90-stamp/genf90-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-build
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/tmp
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E make_directory /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-mkdir

src/flib/genf90/src/genf90-stamp/genf90-patch: src/flib/genf90/src/genf90-stamp/genf90-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E echo_append
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-patch

src/flib/genf90/src/genf90-stamp/genf90-update: src/flib/genf90/src/genf90-stamp/genf90-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No update step for 'genf90'"
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90 && /usr/bin/cmake -E echo_append
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90 && /usr/bin/cmake -E touch /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-update

genf90: src/flib/CMakeFiles/genf90
genf90: src/flib/CMakeFiles/genf90-complete
genf90: src/flib/genf90/src/genf90-stamp/genf90-build
genf90: src/flib/genf90/src/genf90-stamp/genf90-configure
genf90: src/flib/genf90/src/genf90-stamp/genf90-download
genf90: src/flib/genf90/src/genf90-stamp/genf90-install
genf90: src/flib/genf90/src/genf90-stamp/genf90-mkdir
genf90: src/flib/genf90/src/genf90-stamp/genf90-patch
genf90: src/flib/genf90/src/genf90-stamp/genf90-update
genf90: src/flib/CMakeFiles/genf90.dir/build.make
.PHONY : genf90

# Rule to build all files generated by this target.
src/flib/CMakeFiles/genf90.dir/build: genf90
.PHONY : src/flib/CMakeFiles/genf90.dir/build

src/flib/CMakeFiles/genf90.dir/clean:
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib && $(CMAKE_COMMAND) -P CMakeFiles/genf90.dir/cmake_clean.cmake
.PHONY : src/flib/CMakeFiles/genf90.dir/clean

src/flib/CMakeFiles/genf90.dir/depend:
	cd /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib /lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/CMakeFiles/genf90.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/flib/CMakeFiles/genf90.dir/depend

