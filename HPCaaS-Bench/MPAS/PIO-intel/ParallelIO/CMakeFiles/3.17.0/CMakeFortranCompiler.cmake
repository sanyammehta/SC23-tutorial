set(CMAKE_Fortran_COMPILER "/opt/cray/pe/craype/2.7.15/bin/ftn")
set(CMAKE_Fortran_COMPILER_ARG1 "")
set(CMAKE_Fortran_COMPILER_ID "Intel")
set(CMAKE_Fortran_COMPILER_VERSION "20.2.4.20210910")
set(CMAKE_Fortran_COMPILER_WRAPPER "")
set(CMAKE_Fortran_PLATFORM_ID "Linux")
set(CMAKE_Fortran_SIMULATE_ID "")
set(CMAKE_Fortran_SIMULATE_VERSION "")



set(CMAKE_AR "/usr/bin/ar")
set(CMAKE_Fortran_COMPILER_AR "")
set(CMAKE_RANLIB "/usr/bin/ranlib")
set(CMAKE_Fortran_COMPILER_RANLIB "")
set(CMAKE_COMPILER_IS_GNUG77 )
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
set(CMAKE_Fortran_COMPILER_ABI "ELF")
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





set(CMAKE_Fortran_IMPLICIT_INCLUDE_DIRECTORIES "/opt/cray/pe/libsci/21.08.1.2/INTEL/19.0/x86_64/include;/opt/cray/pe/dsmml/0.2.2/dsmml/include;/opt/cray/pe/parallel-netcdf/1.12.2.3/intel/19.0/include;/opt/cray/pe/netcdf/4.8.1.3/intel/19.0/include;/opt/cray/pe/hdf5/1.12.1.3/intel/19.0/include;/opt/cray/pe/mpich/8.1.16/ofi/intel/19.0/include;/opt/cray/xpmem/2.3.2-2.2_6.12__g93dd7ee.shasta/include;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/include;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/compiler/include/intel64;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/compiler/include/icc;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/compiler/include;/usr/local/include;/usr/lib64/gcc/x86_64-suse-linux/7/include;/usr/lib64/gcc/x86_64-suse-linux/7/include-fixed;/usr/include")
set(CMAKE_Fortran_IMPLICIT_LINK_LIBRARIES "pnetcdf;mpichf90;netcdf;netcdff;hdf5_hl;hdf5;hdf5hl_fortran;hdf5_fortran;sci_intel_mpi;sci_intel;dl;mpifort_intel;mpi_intel;dsmml;xpmem;imf;m;pthread;ifport;ifcoremt;imf;svml;m;ipgo;irc;pthread;svml;c;gcc;gcc_s;irc_s;dl;c")
set(CMAKE_Fortran_IMPLICIT_LINK_DIRECTORIES "/opt/cray/pe/libsci/21.08.1.2/INTEL/19.0/x86_64/lib;/opt/cray/pe/dsmml/0.2.2/dsmml/lib;/opt/cray/pe/parallel-netcdf/1.12.2.3/intel/19.0/lib;/opt/cray/pe/netcdf/4.8.1.3/intel/19.0/lib;/opt/cray/pe/hdf5/1.12.1.3/intel/19.0/lib;/opt/cray/pe/mpich/8.1.16/ofi/intel/19.0/lib;/opt/cray/xpmem/2.3.2-2.2_6.12__g93dd7ee.shasta/lib64;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/compiler/lib/intel64_lin;/global/sw/sdev/intel/oneapi/2021/v4/compiler/2021.4.0/linux/lib;/usr/lib64/gcc/x86_64-suse-linux/7;/usr/lib64;/lib64;/usr/x86_64-suse-linux/lib;/lib;/usr/lib")
set(CMAKE_Fortran_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
