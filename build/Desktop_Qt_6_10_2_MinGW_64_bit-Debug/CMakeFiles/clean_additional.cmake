# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\OMENHWCC_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\OMENHWCC_autogen.dir\\ParseCache.txt"
  "OMENHWCC_autogen"
  )
endif()
