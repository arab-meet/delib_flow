# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pal_maps_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pal_maps_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pal_maps_FOUND FALSE)
  elseif(NOT pal_maps_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pal_maps_FOUND FALSE)
  endif()
  return()
endif()
set(_pal_maps_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pal_maps_FIND_QUIETLY)
  message(STATUS "Found pal_maps: 0.5.0 (${pal_maps_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pal_maps' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT pal_maps_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pal_maps_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pal_maps_DIR}/${_extra}")
endforeach()
