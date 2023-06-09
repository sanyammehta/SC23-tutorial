set(CMAKE_Fortran_COMPILER "/opt/cray/pe/craype/2.7.19.2/bin/ftn")
set(CMAKE_Fortran_COMPILER_ARG1 "")
set(CMAKE_Fortran_COMPILER_ID "Cray")
set(CMAKE_Fortran_COMPILER_VERSION "15.0")
set(CMAKE_Fortran_COMPILER_WRAPPER "CrayPrgEnv")
set(CMAKE_Fortran_PLATFORM_ID "Linux")
set(CMAKE_Fortran_SIMULATE_ID "")
set(CMAKE_Fortran_SIMULATE_VERSION "")



set(CMAKE_AR "/opt/cray/pe/cce/15.0.0/binutils/x86_64/x86_64-pc-linux-gnu/bin/ar")
set(CMAKE_Fortran_COMPILER_AR "")
set(CMAKE_RANLIB "/opt/cray/pe/cce/15.0.0/binutils/x86_64/x86_64-pc-linux-gnu/bin/ranlib")
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





set(CMAKE_Fortran_IMPLICIT_INCLUDE_DIRECTORIES "/opt/cray/pe/cce/15.0.0/cce-clang/x86_64/lib/clang/15.0.2/include;/opt/cray/pe/cce/15.0.0/cce/x86_64/include/craylibs;/usr/include;/opt/cray/pe/fftw/3.3.8.13/sandybridge/include;/opt/cray/pe/libsci/20.09.1/CRAYCLANG/9.0/x86_64/include;/opt/cray/pe/mpt/7.7.20/gni/mpich-crayclang/14.0/include;/opt/cray/rca/2.2.20-7.0.3.1_2.27__g8e3fb5b.ari/include;/opt/cray/pe/pmi/5.0.17/include;/opt/cray/pe/atp/3.14.17/include;/opt/cray/xpmem/default/include;/opt/cray/dmapp/default/include;/opt/cray/alps/6.6.67-7.0.3.1_2.25__gb91cd181.ari/include;/opt/cray/wlm_detect/1.3.3-7.0.3.1_2.16__g7109084.ari/include;/opt/cray/ugni/default/include;/opt/cray/gni-headers/default/include;/opt/cray/krca/2.2.8-7.0.3.1_2.21__g59af36e.ari/include;/opt/cray-hss-devel/9.0.0/include;/opt/cray/udreg/default/include")
set(CMAKE_Fortran_IMPLICIT_LINK_LIBRARIES "AtpSigHandler;rca;fftw3_mpi;fftw3_threads;fftw3;fftw3f_mpi;mpich_crayclang;fftw3f_threads;fftw3f;sci_cray_mpi;sci_cray;stdc++;pgas-dmapp;quadmath;modules;fi;craymath;f;u;csup;gfortran;tcmalloc_minimal;stdc++;pthread;c;csup;m;clang_rt.craypgo-x86_64;gcc;clang_rt.builtins-x86_64")
set(CMAKE_Fortran_IMPLICIT_LINK_DIRECTORIES "/opt/gcc/10.3.0/snos/lib64;/opt/cray/pe/fftw/3.3.8.13/sandybridge/lib;/opt/cray/pe/libsci/20.09.1/CRAYCLANG/9.0/x86_64/lib;/opt/cray/dmapp/default/lib64;/opt/cray/pe/mpt/7.7.20/gni/mpich-crayclang/14.0/lib;/opt/cray/rca/2.2.20-7.0.3.1_2.27__g8e3fb5b.ari/lib64;/opt/cray/pe/atp/3.14.17/lib;/opt/cray/pe/cce/15.0.0/cce/x86_64/lib;/opt/cray/pe/gcc/10.3.0/snos/lib64;/opt/cray/pe/cce/15.0.0/cce-clang/x86_64/lib/clang/15.0.2/lib/linux;/opt/gcc/10.3.0/snos/lib/gcc/x86_64-suse-linux/10.3.0;/opt/cray/pe/cce/15.0.0/binutils/x86_64/x86_64-unknown-linux-gnu/lib")
set(CMAKE_Fortran_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
