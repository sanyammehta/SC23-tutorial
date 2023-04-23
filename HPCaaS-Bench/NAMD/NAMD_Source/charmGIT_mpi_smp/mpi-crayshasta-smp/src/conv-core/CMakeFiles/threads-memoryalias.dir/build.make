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
CMAKE_SOURCE_DIR = /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp

# Include any dependencies generated for this target.
include src/conv-core/CMakeFiles/threads-memoryalias.dir/depend.make

# Include the progress variables for this target.
include src/conv-core/CMakeFiles/threads-memoryalias.dir/progress.make

# Include the compile flags for this target's objects.
include src/conv-core/CMakeFiles/threads-memoryalias.dir/flags.make

src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.o: src/conv-core/CMakeFiles/threads-memoryalias.dir/flags.make
src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.o: ../src/conv-core/threads.C
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.o"
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/bin/charmc /opt/cray/pe/craype/2.7.19.2/bin/CC  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/threads-memoryalias.dir/threads.C.o -c /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/conv-core/threads.C

src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/threads-memoryalias.dir/threads.C.i"
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && /opt/cray/pe/craype/2.7.19.2/bin/CC $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/conv-core/threads.C > CMakeFiles/threads-memoryalias.dir/threads.C.i

src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/threads-memoryalias.dir/threads.C.s"
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && /opt/cray/pe/craype/2.7.19.2/bin/CC $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/conv-core/threads.C -o CMakeFiles/threads-memoryalias.dir/threads.C.s

# Object files for target threads-memoryalias
threads__memoryalias_OBJECTS = \
"CMakeFiles/threads-memoryalias.dir/threads.C.o"

# External object files for target threads-memoryalias
threads__memoryalias_EXTERNAL_OBJECTS =

lib/libthreads-memoryalias.a: src/conv-core/CMakeFiles/threads-memoryalias.dir/threads.C.o
lib/libthreads-memoryalias.a: src/conv-core/CMakeFiles/threads-memoryalias.dir/build.make
lib/libthreads-memoryalias.a: src/conv-core/CMakeFiles/threads-memoryalias.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libthreads-memoryalias.a"
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && $(CMAKE_COMMAND) -P CMakeFiles/threads-memoryalias.dir/cmake_clean_target.cmake
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/threads-memoryalias.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/conv-core/CMakeFiles/threads-memoryalias.dir/build: lib/libthreads-memoryalias.a

.PHONY : src/conv-core/CMakeFiles/threads-memoryalias.dir/build

src/conv-core/CMakeFiles/threads-memoryalias.dir/clean:
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core && $(CMAKE_COMMAND) -P CMakeFiles/threads-memoryalias.dir/cmake_clean.cmake
.PHONY : src/conv-core/CMakeFiles/threads-memoryalias.dir/clean

src/conv-core/CMakeFiles/threads-memoryalias.dir/depend:
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/conv-core /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/src/conv-core/CMakeFiles/threads-memoryalias.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/conv-core/CMakeFiles/threads-memoryalias.dir/depend

