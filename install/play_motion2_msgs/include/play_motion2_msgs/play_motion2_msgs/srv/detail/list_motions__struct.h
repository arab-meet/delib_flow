// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from play_motion2_msgs:srv/ListMotions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/srv/list_motions.h"


#ifndef PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__STRUCT_H_
#define PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListMotions in the package play_motion2_msgs.
typedef struct play_motion2_msgs__srv__ListMotions_Request
{
  uint8_t structure_needs_at_least_one_member;
} play_motion2_msgs__srv__ListMotions_Request;

// Struct for a sequence of play_motion2_msgs__srv__ListMotions_Request.
typedef struct play_motion2_msgs__srv__ListMotions_Request__Sequence
{
  play_motion2_msgs__srv__ListMotions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__srv__ListMotions_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'motion_keys'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListMotions in the package play_motion2_msgs.
typedef struct play_motion2_msgs__srv__ListMotions_Response
{
  rosidl_runtime_c__String__Sequence motion_keys;
} play_motion2_msgs__srv__ListMotions_Response;

// Struct for a sequence of play_motion2_msgs__srv__ListMotions_Response.
typedef struct play_motion2_msgs__srv__ListMotions_Response__Sequence
{
  play_motion2_msgs__srv__ListMotions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__srv__ListMotions_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  play_motion2_msgs__srv__ListMotions_Event__request__MAX_SIZE = 1
};
// response
enum
{
  play_motion2_msgs__srv__ListMotions_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListMotions in the package play_motion2_msgs.
typedef struct play_motion2_msgs__srv__ListMotions_Event
{
  service_msgs__msg__ServiceEventInfo info;
  play_motion2_msgs__srv__ListMotions_Request__Sequence request;
  play_motion2_msgs__srv__ListMotions_Response__Sequence response;
} play_motion2_msgs__srv__ListMotions_Event;

// Struct for a sequence of play_motion2_msgs__srv__ListMotions_Event.
typedef struct play_motion2_msgs__srv__ListMotions_Event__Sequence
{
  play_motion2_msgs__srv__ListMotions_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__srv__ListMotions_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__STRUCT_H_
