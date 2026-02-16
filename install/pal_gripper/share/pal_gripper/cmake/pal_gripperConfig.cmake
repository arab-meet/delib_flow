# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pal_gripper_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pal_gripper_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pal_gripper_FOUND FALSE)
  elseif(NOT pal_gripper_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pal_gripper_FOUND FALSE)
  endif()
  return()
endif()
set(_pal_gripper_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pal_gripper_FIND_QUIETLY)
  message(STATUS "Found pal_gripper: 3.2.0 (${pal_gripper_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pal_gripper' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT pal_gripper_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pal_gripper_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pal_gripper_DIR}/${_extra}")
endforeach()
