# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QY_UartAssistant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QY_UartAssistant_autogen.dir\\ParseCache.txt"
  "QY_UartAssistant_autogen"
  )
endif()
