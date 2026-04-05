# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\WinPowerControlCenter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\WinPowerControlCenter_autogen.dir\\ParseCache.txt"
  "WinPowerControlCenter_autogen"
  )
endif()
