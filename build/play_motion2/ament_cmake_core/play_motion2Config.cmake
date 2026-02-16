# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_play_motion2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED play_motion2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(play_motion2_FOUND FALSE)
  elseif(NOT play_motion2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(play_motion2_FOUND FALSE)
  endif()
  return()
endif()
set(_play_motion2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT play_motion2_FIND_QUIETLY)
  message(STATUS "Found play_motion2: 1.5.1 (${play_motion2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'play_motion2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT play_motion2_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(play_motion2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${play_motion2_DIR}/${_extra}")
endforeach()
