cmake_minimum_required(VERSION 3.8)
project(tiago_demos)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(tiago_nav REQUIRED)
find_package(tiago_grab REQUIRED)
find_package(nav2_util REQUIRED)
find_package(nav2_behavior_tree REQUIRED)
find_package(grab2_behavior_tree REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

add_executable(btcpp_engine src/btcpp_engine.cpp)
target_include_directories(btcpp_engine PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(btcpp_engine PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  btcpp_engine
  "rclcpp"
  "behaviortree_cpp"
  "tiago_nav"
  "tiago_grab"
  "nav2_util"
  "nav2_behavior_tree"
  "grab2_behavior_tree"
  "ament_index_cpp"
  "geometry_msgs"
  "trajectory_msgs"
  "tf2"       
  "tf2_geometry_msgs"
)

target_link_libraries(btcpp_engine yaml-cpp)


install(TARGETS btcpp_engine
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY trees config launch
  DESTINATION share/${PROJECT_NAME}/
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
