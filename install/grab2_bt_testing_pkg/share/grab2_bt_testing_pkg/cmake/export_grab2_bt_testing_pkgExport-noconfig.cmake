#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "grab2_bt_testing_pkg::pick_and_navigate" for configuration ""
set_property(TARGET grab2_bt_testing_pkg::pick_and_navigate APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(grab2_bt_testing_pkg::pick_and_navigate PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpick_and_navigate.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS grab2_bt_testing_pkg::pick_and_navigate )
list(APPEND _IMPORT_CHECK_FILES_FOR_grab2_bt_testing_pkg::pick_and_navigate "${_IMPORT_PREFIX}/lib/libpick_and_navigate.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
