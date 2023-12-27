# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SerialPort_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SerialPort_autogen.dir\\ParseCache.txt"
  "SerialPort_autogen"
  )
endif()
