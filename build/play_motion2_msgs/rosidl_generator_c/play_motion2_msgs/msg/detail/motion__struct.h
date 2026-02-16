// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/msg/motion.h"


#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'name'
// Member 'usage'
// Member 'description'
// Member 'joints'
#include "rosidl_runtime_c/string.h"
// Member 'positions'
// Member 'times_from_start'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Motion in the package play_motion2_msgs.
typedef struct play_motion2_msgs__msg__Motion
{
  rosidl_runtime_c__String key;
  /// meta
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String usage;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String__Sequence joints;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence times_from_start;
} play_motion2_msgs__msg__Motion;

// Struct for a sequence of play_motion2_msgs__msg__Motion.
typedef struct play_motion2_msgs__msg__Motion__Sequence
{
  play_motion2_msgs__msg__Motion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__msg__Motion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
