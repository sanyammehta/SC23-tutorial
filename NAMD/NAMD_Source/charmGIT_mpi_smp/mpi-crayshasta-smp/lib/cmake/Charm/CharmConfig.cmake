# Set Charm project version
set(CHARM_VERSION "7.0.0")


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was CharmConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# Set the equivalent to Charm_DIR for dependent project to set-up the path
# correctly in their cmake configs. This will be used to ease the set-up
# of working with find_package.
get_filename_component(CHARM_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" DIRECTORY)

# Set root for Charm installation
get_filename_component(CHARM_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../.." ABSOLUTE)

# Set cmake standard flag
set(CHARM_CXX_STANDARD 11)

# Set Charm compiler
set(CHARM_CXX_COMPILER "${CHARM_ROOT}/bin/charmc")
set(CHARM_C_COMPILER "${CHARM_ROOT}/bin/charmc")

# Set charmrun path
set(CHARM_CHARMRUN_PATH "${CHARM_ROOT}/bin/charmrun")

# Set CMK compiler used
set(CHARM_CMK_COMPILER clang)

# Set Charm build type
set(CHARM_BUILD_TYPE Release)

# Set Charm Network type
set(CHARM_WITH_NETWORK mpi-crayshasta)

# Set Charm TARGET type
set(CHARM_WITH_TARGET charm++)

# Set Charm ARCH type
set(CHARM_WITH_ARCH x86_64)

# Set SMP option
set(CHARM_WITH_SMP 1)

# Set OMP option
set(CHARM_WITH_OMP 0)

# Set TCP option
set(CHARM_WITH_TCP 0)

# Set Pthreads option
set(CHARM_WITH_PTHREADS 0)

# Set OOC option
set(CHARM_WITH_OOC 0)

# Set SYNCFT option
set(CHARM_WITH_SYNCFT 0)

# Set PAPI option
set(CHARM_WITH_PAPI OFF)

# Set STATS option
set(CHARM_WITH_STATS 0)

# Set TRACING_COMMTHREAD option
set(CHARM_WITH_TRACING_COMMTHREAD 0)

# Set CHARMDEBUG option
set(CHARM_WITH_CHARMDEBUG 0)

# Set REPLAY option
set(CHARM_WITH_REPLAY 0)

# Set CCS option
set(CHARM_WITH_CCS 0)

# Set CONTROLPOINT option
set(CHARM_WITH_CONTROLPOINT 0)

# Set PERSISTENT option
set(CHARM_WITH_PERSISTENT 0)

# Set LBUSERDATA option
set(CHARM_WITH_LBUSERDATA 0)

# Set LOCKLESS_QUEUE option
set(CHARM_WITH_LOCKLESS_QUEUE 0)

# Set SHRINKEXPAND option
set(CHARM_WITH_SHRINKEXPAND 0)

# Set NUMA option
set(CHARM_WITH_NUMA 0)

# Set QLOGIC option
set(CHARM_WITH_QLOGIC 0)

# Set RANDOMIZED_MSGQ option
set(CHARM_WITH_RANDOMIZED_MSGQ 0)

# Set ZLIB option
set(CHARM_WITH_ZLIB 1)

# Set AMPI_MPICH_TESTS option
set(CHARM_WITH_AMPI_MPICH_TESTS 0)

# Set DRONE_MODE option
set(CHARM_WITH_DRONE_MODE 0)

# Set TASK_QUEUE option
set(CHARM_WITH_TASK_QUEUE 0)

# Set BUILD_SHARED option
set(CHARM_WITH_BUILD_SHARED 0)

# Set CUDA option
set(CHARM_WITH_CUDA 0)

# Set PXSHM option
set(CHARM_WITH_PXSHM 0)

# TODO: Find more useful flags that can be used in dependant apps/libs

check_required_components(Charm)
