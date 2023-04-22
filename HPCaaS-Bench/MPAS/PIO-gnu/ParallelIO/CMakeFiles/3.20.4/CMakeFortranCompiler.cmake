set(CMAKE_Fortran_COMPILER "/opt/cray/pe/craype/2.7.20/bin/ftn")
set(CMAKE_Fortran_COMPILER_ARG1 "")
set(CMAKE_Fortran_COMPILER_ID "GNU")
set(CMAKE_Fortran_COMPILER_VERSION "12.2.0")
set(CMAKE_Fortran_COMPILER_WRAPPER "CrayPrgEnv")
set(CMAKE_Fortran_PLATFORM_ID "")
set(CMAKE_Fortran_SIMULATE_ID "")
set(CMAKE_Fortran_SIMULATE_VERSION "")




set(CMAKE_AR "/usr/bin/ar")
set(CMAKE_Fortran_COMPILER_AR "/usr/bin/gcc-ar")
set(CMAKE_RANLIB "/usr/bin/ranlib")
set(CMAKE_Fortran_COMPILER_RANLIB "/usr/bin/gcc-ranlib")
set(CMAKE_COMPILER_IS_GNUG77 1)
set(CMAKE_Fortran_COMPILER_LOADED 1)
set(CMAKE_Fortran_COMPILER_WORKS TRUE)
set(CMAKE_Fortran_ABI_COMPILED TRUE)
set(CMAKE_COMPILER_IS_MINGW )
set(CMAKE_COMPILER_IS_CYGWIN )
if(CMAKE_COMPILER_IS_CYGWIN)
  set(CYGWIN 1)
  set(UNIX 1)
endif()

set(CMAKE_Fortran_COMPILER_ENV_VAR "FC")

set(CMAKE_Fortran_COMPILER_SUPPORTS_F90 1)

if(CMAKE_COMPILER_IS_MINGW)
  set(MINGW 1)
endif()
set(CMAKE_Fortran_COMPILER_ID_RUN 1)
set(CMAKE_Fortran_SOURCE_FILE_EXTENSIONS f;F;fpp;FPP;f77;F77;f90;F90;for;For;FOR;f95;F95)
set(CMAKE_Fortran_IGNORE_EXTENSIONS h;H;o;O;obj;OBJ;def;DEF;rc;RC)
set(CMAKE_Fortran_LINKER_PREFERENCE 20)
if(UNIX)
  set(CMAKE_Fortran_OUTPUT_EXTENSION .o)
else()
  set(CMAKE_Fortran_OUTPUT_EXTENSION .obj)
endif()

# Save compiler ABI information.
set(CMAKE_Fortran_SIZEOF_DATA_PTR "8")
set(CMAKE_Fortran_COMPILER_ABI "")
set(CMAKE_Fortran_LIBRARY_ARCHITECTURE "")

if(CMAKE_Fortran_SIZEOF_DATA_PTR AND NOT CMAKE_SIZEOF_VOID_P)
  set(CMAKE_SIZEOF_VOID_P "${CMAKE_Fortran_SIZEOF_DATA_PTR}")
endif()

if(CMAKE_Fortran_COMPILER_ABI)
  set(CMAKE_INTERNAL_PLATFORM_ABI "${CMAKE_Fortran_COMPILER_ABI}")
endif()

if(CMAKE_Fortran_LIBRARY_ARCHITECTURE)
  set(CMAKE_LIBRARY_ARCHITECTURE "")
endif()





set(CMAKE_Fortran_IMPLICIT_INCLUDE_DIRECTORIES "/opt/cray/pe/libsci/23.02.1.1/GNU/9.1/x86_64/include;/opt/cray/pe/mpich/8.1.25/ofi/gnu/9.1/include;/opt/cray/pe/dsmml/0.2.2/dsmml/include;/opt/cray/pe/parallel-netcdf/1.12.3.3/gnu/9.1/include;/opt/cray/pe/netcdf/4.9.0.3/gnu/9.1/include;/opt/cray/pe/hdf5/1.12.2.3/gnu/9.1/include;/opt/cray/xpmem/2.5.2-2.4_3.20__gd0f7936.shasta/include;/opt/cray/pe/gcc/12.2.0/snos/lib/gcc/x86_64-suse-linux/12.2.0/finclude;/opt/cray/pe/gcc/12.2.0/snos/lib/gcc/x86_64-suse-linux/12.2.0/include;/usr/local/include;/opt/cray/pe/gcc/12.2.0/snos/include;/opt/cray/pe/gcc/12.2.0/snos/lib/gcc/x86_64-suse-linux/12.2.0/include-fixed;/usr/include")
set(CMAKE_Fortran_IMPLICIT_LINK_LIBRARIES "pnetcdf;mpichf90;netcdf;netcdff;hdf5_hl;hdf5;hdf5hl_fortran;hdf5_fortran;sci_gnu_82_mpi;sci_gnu_82;dl;mpifort_gnu_91;mpi_gnu_91;dsmml;xpmem;gfortran;quadmath;pthread;gfortran;m;gcc_s;gcc;quadmath;m;gcc_s;gcc;c;gcc_s;gcc")
set(CMAKE_Fortran_IMPLICIT_LINK_DIRECTORIES "/opt/cray/pe/libsci/23.02.1.1/GNU/9.1/x86_64/lib;/opt/cray/pe/mpich/8.1.25/ofi/gnu/9.1/lib;/opt/cray/pe/dsmml/0.2.2/dsmml/lib;/opt/cray/pe/parallel-netcdf/1.12.3.3/gnu/9.1/lib;/opt/cray/pe/netcdf/4.9.0.3/gnu/9.1/lib;/opt/cray/pe/hdf5/1.12.2.3/gnu/9.1/lib;/opt/cray/xpmem/2.5.2-2.4_3.20__gd0f7936.shasta/lib64;/opt/cray/pe/gcc/12.2.0/snos/lib/gcc/x86_64-suse-linux/12.2.0;/opt/cray/pe/gcc/12.2.0/snos/lib64;/lib64;/usr/lib64;/opt/cray/pe/gcc/12.2.0/snos/lib")
set(CMAKE_Fortran_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
