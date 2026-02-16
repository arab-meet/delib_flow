// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/bounding_box2_d.h"


#ifndef YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "yolo_msgs/msg/detail/pose2_d__struct.h"
// Member 'size'
#include "yolo_msgs/msg/detail/vector2__struct.h"

/// Struct defined in msg/BoundingBox2D in the package yolo_msgs.
/**
  * 2D position and orientation of the bounding box center
 */
typedef struct yolo_msgs__msg__BoundingBox2D
{
  yolo_msgs__msg__Pose2D center;
  /// total size of the bounding box, in pixels, surrounding the object's center
  yolo_msgs__msg__Vector2 size;
} yolo_msgs__msg__BoundingBox2D;

// Struct for a sequence of yolo_msgs__msg__BoundingBox2D.
typedef struct yolo_msgs__msg__BoundingBox2D__Sequence
{
  yolo_msgs__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
