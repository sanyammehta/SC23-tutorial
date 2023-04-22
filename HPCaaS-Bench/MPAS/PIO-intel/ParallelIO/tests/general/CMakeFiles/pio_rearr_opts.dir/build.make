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
include tests/general/CMakeFiles/pio_rearr_opts.dir/depend.make

# Include the progress variables for this target.
include tests/general/CMakeFiles/pio_rearr_opts.dir/progress.make

# Include the compile flags for this target's objects.
include tests/general/CMakeFiles/pio_rearr_opts.dir/flags.make

tests/general/pio_rearr_opts.F90: tests/general/pio_rearr_opts.F90.in
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating pio_rearr_opts.F90"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && util/pio_tf_f90gen.pl --annotate-source --out=/lus/cls01075/anberu/PIO/ParallelIO/tests/general/pio_rearr_opts.F90 /lus/cls01075/anberu/PIO/ParallelIO/tests/general/pio_rearr_opts.F90.in

tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o: tests/general/CMakeFiles/pio_rearr_opts.dir/flags.make
tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o: tests/general/pio_rearr_opts.F90
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building Fortran object tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && /opt/cray/pe/craype/2.7.15/bin/ftn $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /lus/cls01075/anberu/PIO/ParallelIO/tests/general/pio_rearr_opts.F90 -o CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o

tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing Fortran source to CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.i"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && /opt/cray/pe/craype/2.7.15/bin/ftn $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -E /lus/cls01075/anberu/PIO/ParallelIO/tests/general/pio_rearr_opts.F90 > CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.i

tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling Fortran source to assembly CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.s"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && /opt/cray/pe/craype/2.7.15/bin/ftn $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -S /lus/cls01075/anberu/PIO/ParallelIO/tests/general/pio_rearr_opts.F90 -o CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.s

# Object files for target pio_rearr_opts
pio_rearr_opts_OBJECTS = \
"CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o"

# External object files for target pio_rearr_opts
pio_rearr_opts_EXTERNAL_OBJECTS =

tests/general/pio_rearr_opts: tests/general/CMakeFiles/pio_rearr_opts.dir/pio_rearr_opts.F90.o
tests/general/pio_rearr_opts: tests/general/CMakeFiles/pio_rearr_opts.dir/build.make
tests/general/pio_rearr_opts: tests/general/libpio_tutil.a
tests/general/pio_rearr_opts: src/flib/libpiof.a
tests/general/pio_rearr_opts: /opt/cray/pe/netcdf/4.8.1.3/INTEL/19.0/lib/libnetcdff.so
tests/general/pio_rearr_opts: src/clib/libpioc.a
tests/general/pio_rearr_opts: /opt/cray/pe/netcdf/4.8.1.3/INTEL/19.0/lib/libnetcdf.so
tests/general/pio_rearr_opts: /opt/cray/pe/parallel-netcdf/1.12.2.3/INTEL/19.0/lib/libpnetcdf.so
tests/general/pio_rearr_opts: tests/general/CMakeFiles/pio_rearr_opts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/lus/cls01075/anberu/PIO/ParallelIO/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking Fortran executable pio_rearr_opts"
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pio_rearr_opts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/general/CMakeFiles/pio_rearr_opts.dir/build: tests/general/pio_rearr_opts

.PHONY : tests/general/CMakeFiles/pio_rearr_opts.dir/build

tests/general/CMakeFiles/pio_rearr_opts.dir/clean:
	cd /lus/cls01075/anberu/PIO/ParallelIO/tests/general && $(CMAKE_COMMAND) -P CMakeFiles/pio_rearr_opts.dir/cmake_clean.cmake
.PHONY : tests/general/CMakeFiles/pio_rearr_opts.dir/clean

tests/general/CMakeFiles/pio_rearr_opts.dir/depend: tests/general/pio_rearr_opts.F90
	cd /lus/cls01075/anberu/PIO/ParallelIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/tests/general /lus/cls01075/anberu/PIO/ParallelIO /lus/cls01075/anberu/PIO/ParallelIO/tests/general /lus/cls01075/anberu/PIO/ParallelIO/tests/general/CMakeFiles/pio_rearr_opts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/general/CMakeFiles/pio_rearr_opts.dir/depend

