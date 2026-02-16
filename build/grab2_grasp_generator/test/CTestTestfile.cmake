# CMake generated Testfile for 
# Source directory: /Bt/ThirdParty/grab2/grab2_grasp_generator/test
# Build directory: /Bt/build/grab2_grasp_generator/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_grasp_generator "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/Bt/build/grab2_grasp_generator/test_results/grab2_grasp_generator/test_grasp_generator.gtest.xml" "--package-name" "grab2_grasp_generator" "--output-file" "/Bt/build/grab2_grasp_generator/ament_cmake_gtest/test_grasp_generator.txt" "--command" "/Bt/build/grab2_grasp_generator/test/test_grasp_generator" "--gtest_output=xml:/Bt/build/grab2_grasp_generator/test_results/grab2_grasp_generator/test_grasp_generator.gtest.xml")
set_tests_properties(test_grasp_generator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/Bt/build/grab2_grasp_generator/test/test_grasp_generator" TIMEOUT "60" WORKING_DIRECTORY "/Bt/build/grab2_grasp_generator/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/Bt/ThirdParty/grab2/grab2_grasp_generator/test/CMakeLists.txt;1;ament_add_gtest;/Bt/ThirdParty/grab2/grab2_grasp_generator/test/CMakeLists.txt;0;")
