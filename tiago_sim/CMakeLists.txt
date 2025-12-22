cmake_minimum_required(VERSION 3.8)
project(tiago_sim)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake_auto REQUIRED)

find_package(ament_cmake_pal QUIET)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package(INSTALL_TO_SHARE config launch models worlds scripts)
