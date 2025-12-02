// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_H_
#define BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTrees in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Request
{
  uint8_t structure_needs_at_least_one_member;
} btcpp_ros2_interfaces__srv__GetTrees_Request;

// Struct for a sequence of btcpp_ros2_interfaces__srv__GetTrees_Request.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence
{
  btcpp_ros2_interfaces__srv__GetTrees_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tree_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTrees in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Response
{
  /// Ids of the available trees
  rosidl_runtime_c__String__Sequence tree_ids;
} btcpp_ros2_interfaces__srv__GetTrees_Response;

// Struct for a sequence of btcpp_ros2_interfaces__srv__GetTrees_Response.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence
{
  btcpp_ros2_interfaces__srv__GetTrees_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_H_
