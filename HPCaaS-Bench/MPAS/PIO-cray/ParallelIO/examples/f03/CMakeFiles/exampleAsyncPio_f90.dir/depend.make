# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Note that incremental build could trigger a call to cmake_copy_f90_mod on each re-build
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o: \
 ./config.h
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o: src/flib/CMakeFiles/piof.dir/pio.mod.stamp
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o.provides.build: examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/pioasyncexample.mod.stamp
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/pioasyncexample.mod.stamp: examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o
	$(CMAKE_COMMAND) -E cmake_copy_f90_mod examples/f03/pioasyncexample.mod examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/pioasyncexample.mod.stamp Cray
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o.provides.build:
	$(CMAKE_COMMAND) -E touch examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o.provides.build
examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/build: examples/f03/CMakeFiles/exampleAsyncPio_f90.dir/exampleAsyncPio.F90.o.provides.build
