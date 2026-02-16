#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tiago_behavior_tree::tiago_set_target_using_aruco_marker_bt_node" for configuration ""
set_property(TARGET tiago_behavior_tree::tiago_set_target_using_aruco_marker_bt_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tiago_behavior_tree::tiago_set_target_using_aruco_marker_bt_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtiago_set_target_using_aruco_marker_bt_node.so"
  IMPORTED_SONAME_NOCONFIG "libtiago_set_target_using_aruco_marker_bt_node.so"
  )

list(APPEND _cmake_import_check_targets tiago_behavior_tree::tiago_set_target_using_aruco_marker_bt_node )
list(APPEND _cmake_import_check_files_for_tiago_behavior_tree::tiago_set_target_using_aruco_marker_bt_node "${_IMPORT_PREFIX}/lib/libtiago_set_target_using_aruco_marker_bt_node.so" )

# Import target "tiago_behavior_tree::tiago_set_target_using_transform_bt_node" for configuration ""
set_property(TARGET tiago_behavior_tree::tiago_set_target_using_transform_bt_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tiago_behavior_tree::tiago_set_target_using_transform_bt_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtiago_set_target_using_transform_bt_node.so"
  IMPORTED_SONAME_NOCONFIG "libtiago_set_target_using_transform_bt_node.so"
  )

list(APPEND _cmake_import_check_targets tiago_behavior_tree::tiago_set_target_using_transform_bt_node )
list(APPEND _cmake_import_check_files_for_tiago_behavior_tree::tiago_set_target_using_transform_bt_node "${_IMPORT_PREFIX}/lib/libtiago_set_target_using_transform_bt_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
