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
include CMakeFiles/moduletcharm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/moduletcharm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/moduletcharm.dir/flags.make

include/tcharm.decl.h: ../src/libs/ck-libs/tcharm/tcharm.ci
include/tcharm.decl.h: bin/charmxi
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/tcharm.decl.h, include/tcharm.def.h"
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/include && /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/bin/charmc -I. \ \ -optimize\ -production /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/tcharm/tcharm.ci

include/tcharm.def.h: include/tcharm.decl.h
	@$(CMAKE_COMMAND) -E touch_nocreate include/tcharm.def.h

CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o: CMakeFiles/moduletcharm.dir/flags.make
CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o: ../src/libs/ck-libs/tcharm/tcharm.C
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o"
	/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/bin/charmc /opt/cray/pe/craype/2.7.19.2/bin/CC  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o -c /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/tcharm/tcharm.C

CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.i"
	/opt/cray/pe/craype/2.7.19.2/bin/CC $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/tcharm/tcharm.C > CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.i

CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.s"
	/opt/cray/pe/craype/2.7.19.2/bin/CC $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/tcharm/tcharm.C -o CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.s

# Object files for target moduletcharm
moduletcharm_OBJECTS = \
"CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o"

# External object files for target moduletcharm
moduletcharm_EXTERNAL_OBJECTS =

lib/libmoduletcharm.a: CMakeFiles/moduletcharm.dir/src/libs/ck-libs/tcharm/tcharm.C.o
lib/libmoduletcharm.a: CMakeFiles/moduletcharm.dir/build.make
lib/libmoduletcharm.a: CMakeFiles/moduletcharm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library lib/libmoduletcharm.a"
	$(CMAKE_COMMAND) -P CMakeFiles/moduletcharm.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/moduletcharm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/moduletcharm.dir/build: lib/libmoduletcharm.a

.PHONY : CMakeFiles/moduletcharm.dir/build

CMakeFiles/moduletcharm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/moduletcharm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/moduletcharm.dir/clean

CMakeFiles/moduletcharm.dir/depend: include/tcharm.decl.h
CMakeFiles/moduletcharm.dir/depend: include/tcharm.def.h
	cd /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp /cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/mpi-crayshasta-smp/CMakeFiles/moduletcharm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/moduletcharm.dir/depend

