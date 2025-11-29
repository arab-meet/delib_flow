cmake_minimum_required(VERSION 3.8)
project(tiago_behavior)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(tf2 REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)


add_executable(main_bt
  src/main_bt.cpp
  src/send_goal_node.cpp
  src/check_battery_node.cpp
  src/docking_node.cpp
  src/monitor_charge_node.cpp
  src/undock_node.cpp
)

ament_target_dependencies(main_bt
  rclcpp
  geometry_msgs
  nav2_msgs
  sensor_msgs
  behaviortree_cpp
  rclcpp_action
  ament_index_cpp
  tf2
)

install(TARGETS main_bt
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  include
  src
  config
  DESTINATION share/${PROJECT_NAME}
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

ament_package()
