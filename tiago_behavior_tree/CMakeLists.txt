cmake_minimum_required(VERSION 3.20)
project(tiago_behavior_tree)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(vision_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(behaviortree_cpp)
find_package(behaviortree_ros2)
find_package(tf2)
find_package(tf2_ros)
find_package(tf2_geometry_msgs)

set(CMAKE_CXX_STANDARD 17)

add_library(tiago_set_target_using_aruco_marker_bt_node src/set_target_using_aruco_marker_bt_node.cpp)

list(APPEND plugin_libs
  tiago_set_target_using_aruco_marker_bt_node
)

foreach(bt_plugin ${plugin_libs})
  target_compile_definitions(${bt_plugin} PRIVATE BT_PLUGIN_EXPORT)
  target_include_directories(${bt_plugin} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
  target_link_libraries(
    ${bt_plugin} PUBLIC
    rclcpp::rclcpp
    behaviortree_cpp::behaviortree_cpp
    behaviortree_ros2::behaviortree_ros2
    tf2::tf2
    tf2_ros::tf2_ros
    ${std_msgs_TARGETS}
    ${geometry_msgs_TARGETS}
    ${nav_msgs_TARGETS}
    ${vision_msgs_TARGETS}
    ${trajectory_msgs_TARGETS}
    ${tf2_geometry_msgs_TARGETS}
  )
endforeach()

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)
install(
  TARGETS ${plugin_libs}
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install plugins for other packages to load
install(
  TARGETS
  ${plugin_libs}
  LIBRARY DESTINATION share/${PROJECT_NAME}/bt_plugins
  ARCHIVE DESTINATION share/${PROJECT_NAME}/bt_plugins
  RUNTIME DESTINATION share/${PROJECT_NAME}/bt_plugins
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(
  "include/${PROJECT_NAME}"
)

ament_export_targets(
  export_${PROJECT_NAME}
)

ament_package()
