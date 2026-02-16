// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/detection.h"


#ifndef YOLO_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'class_name'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'bbox'
#include "yolo_msgs/msg/detail/bounding_box2_d__struct.h"
// Member 'bbox3d'
#include "yolo_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'mask'
#include "yolo_msgs/msg/detail/mask__struct.h"
// Member 'keypoints'
#include "yolo_msgs/msg/detail/key_point2_d_array__struct.h"
// Member 'keypoints3d'
#include "yolo_msgs/msg/detail/key_point3_d_array__struct.h"

/// Struct defined in msg/Detection in the package yolo_msgs.
/**
  * defines a YOLO detection result
 */
typedef struct yolo_msgs__msg__Detection
{
  /// class probability
  int32_t class_id;
  rosidl_runtime_c__String class_name;
  double score;
  /// ID for tracking
  rosidl_runtime_c__String id;
  /// 2D bounding box surrounding the object in pixels
  yolo_msgs__msg__BoundingBox2D bbox;
  /// 3D bounding box surrounding the object in meters
  yolo_msgs__msg__BoundingBox3D bbox3d;
  /// segmentation mask of the detected object
  /// it is only the boundary of the segmented object
  yolo_msgs__msg__Mask mask;
  /// keypoints for human pose estimation
  yolo_msgs__msg__KeyPoint2DArray keypoints;
  /// keypoints for human pose estimation
  yolo_msgs__msg__KeyPoint3DArray keypoints3d;
} yolo_msgs__msg__Detection;

// Struct for a sequence of yolo_msgs__msg__Detection.
typedef struct yolo_msgs__msg__Detection__Sequence
{
  yolo_msgs__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
