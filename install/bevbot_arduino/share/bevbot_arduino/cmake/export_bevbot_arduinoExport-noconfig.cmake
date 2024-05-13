#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bevbot_arduino::bevbot_arduino" for configuration ""
set_property(TARGET bevbot_arduino::bevbot_arduino APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(bevbot_arduino::bevbot_arduino PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbevbot_arduino.so"
  IMPORTED_SONAME_NOCONFIG "libbevbot_arduino.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS bevbot_arduino::bevbot_arduino )
list(APPEND _IMPORT_CHECK_FILES_FOR_bevbot_arduino::bevbot_arduino "${_IMPORT_PREFIX}/lib/libbevbot_arduino.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
