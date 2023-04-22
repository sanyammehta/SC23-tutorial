
if(NOT "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitinfo.txt" IS_NEWER_THAN "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/PARALLELIO/genf90" "genf90"
    WORKING_DIRECTORY "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/PARALLELIO/genf90'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout genf90_200608 --
  WORKING_DIRECTORY "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'genf90_200608'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitinfo.txt"
    "/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/lus/scratch/smehta/MPAS/PIO-gnu/ParallelIO/src/flib/genf90/src/genf90-stamp/genf90-gitclone-lastrun.txt'")
endif()

