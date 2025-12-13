cmake_minimum_required(VERSION 3.8)
project(tiago_behavior)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(nav2_util REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(check_battery_node SHARED src/check_battery_node.cpp)
add_library(dock_and_recharge_node SHARED src/docking_node.cpp)
add_library(monitor_charge_node SHARED src/monitor_charge_node.cpp)
add_library(undock_robot_node SHARED src/undock_node.cpp)

set(plugin_libs
  check_battery_node
  dock_and_recharge_node
  monitor_charge_node
  undock_robot_node
)

foreach(bt_plugin ${plugin_libs})
  target_compile_definitions(${bt_plugin} PRIVATE BT_PLUGIN_EXPORT)
  target_include_directories(${bt_plugin} PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>"
  )
  ament_target_dependencies(${bt_plugin}
    rclcpp
    rclcpp_action
    nav2_msgs
    sensor_msgs
    std_msgs
    nav2_util
    behaviortree_cpp
    tf2
    ament_index_cpp
  )
endforeach()

set(GENERATED_DIR ${CMAKE_CURRENT_BINARY_DIR}/gen/tiago_behavior)
file(MAKE_DIRECTORY ${GENERATED_DIR})
configure_file(plugins_list.hpp.in ${GENERATED_DIR}/plugins_list.hpp)

install(
  TARGETS
    ${plugin_libs}
  LIBRARY DESTINATION share/${PROJECT_NAME}/bt_plugins
  ARCHIVE DESTINATION share/${PROJECT_NAME}/bt_plugins
  RUNTIME DESTINATION share/${PROJECT_NAME}/bt_plugins
)

install(FILES ${GENERATED_DIR}/plugins_list.hpp
        DESTINATION include/${PROJECT_NAME}/tiago_behavior)

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(
  include/${PROJECT_NAME}
)

ament_package()
