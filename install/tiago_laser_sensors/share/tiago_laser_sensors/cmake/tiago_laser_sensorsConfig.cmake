# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tiago_laser_sensors_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tiago_laser_sensors_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tiago_laser_sensors_FOUND FALSE)
  elseif(NOT tiago_laser_sensors_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tiago_laser_sensors_FOUND FALSE)
  endif()
  return()
endif()
set(_tiago_laser_sensors_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tiago_laser_sensors_FIND_QUIETLY)
  message(STATUS "Found tiago_laser_sensors: 4.2.0 (${tiago_laser_sensors_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tiago_laser_sensors' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT tiago_laser_sensors_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tiago_laser_sensors_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tiago_laser_sensors_DIR}/${_extra}")
endforeach()
