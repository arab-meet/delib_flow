// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/srv/set_classes.h"


#ifndef YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_H_
#define YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetClasses in the package yolo_msgs.
typedef struct yolo_msgs__srv__SetClasses_Request
{
  rosidl_runtime_c__String__Sequence classes;
} yolo_msgs__srv__SetClasses_Request;

// Struct for a sequence of yolo_msgs__srv__SetClasses_Request.
typedef struct yolo_msgs__srv__SetClasses_Request__Sequence
{
  yolo_msgs__srv__SetClasses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__srv__SetClasses_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetClasses in the package yolo_msgs.
typedef struct yolo_msgs__srv__SetClasses_Response
{
  uint8_t structure_needs_at_least_one_member;
} yolo_msgs__srv__SetClasses_Response;

// Struct for a sequence of yolo_msgs__srv__SetClasses_Response.
typedef struct yolo_msgs__srv__SetClasses_Response__Sequence
{
  yolo_msgs__srv__SetClasses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__srv__SetClasses_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  yolo_msgs__srv__SetClasses_Event__request__MAX_SIZE = 1
};
// response
enum
{
  yolo_msgs__srv__SetClasses_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetClasses in the package yolo_msgs.
typedef struct yolo_msgs__srv__SetClasses_Event
{
  service_msgs__msg__ServiceEventInfo info;
  yolo_msgs__srv__SetClasses_Request__Sequence request;
  yolo_msgs__srv__SetClasses_Response__Sequence response;
} yolo_msgs__srv__SetClasses_Event;

// Struct for a sequence of yolo_msgs__srv__SetClasses_Event.
typedef struct yolo_msgs__srv__SetClasses_Event__Sequence
{
  yolo_msgs__srv__SetClasses_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__srv__SetClasses_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__SRV__DETAIL__SET_CLASSES__STRUCT_H_
