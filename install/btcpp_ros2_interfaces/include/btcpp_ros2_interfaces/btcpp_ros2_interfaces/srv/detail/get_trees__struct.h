// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "btcpp_ros2_interfaces/srv/get_trees.h"


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

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  btcpp_ros2_interfaces__srv__GetTrees_Event__request__MAX_SIZE = 1
};
// response
enum
{
  btcpp_ros2_interfaces__srv__GetTrees_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetTrees in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Event
{
  service_msgs__msg__ServiceEventInfo info;
  btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence request;
  btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence response;
} btcpp_ros2_interfaces__srv__GetTrees_Event;

// Struct for a sequence of btcpp_ros2_interfaces__srv__GetTrees_Event.
typedef struct btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence
{
  btcpp_ros2_interfaces__srv__GetTrees_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_H_
