// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yolo_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolo_msgs/msg/detail/detection__struct.h"
#include "yolo_msgs/msg/detail/detection__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // class_name, id
#include "rosidl_runtime_c/string_functions.h"  // class_name, id
#include "yolo_msgs/msg/detail/bounding_box2_d__functions.h"  // bbox
#include "yolo_msgs/msg/detail/bounding_box3_d__functions.h"  // bbox3d
#include "yolo_msgs/msg/detail/key_point2_d_array__functions.h"  // keypoints
#include "yolo_msgs/msg/detail/key_point3_d_array__functions.h"  // keypoints3d
#include "yolo_msgs/msg/detail/mask__functions.h"  // mask

// forward declare type support functions

bool cdr_serialize_yolo_msgs__msg__BoundingBox2D(
  const yolo_msgs__msg__BoundingBox2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__BoundingBox2D(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__BoundingBox2D * ros_message);

size_t get_serialized_size_yolo_msgs__msg__BoundingBox2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__BoundingBox2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__BoundingBox2D(
  const yolo_msgs__msg__BoundingBox2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__BoundingBox2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__BoundingBox2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, BoundingBox2D)();

bool cdr_serialize_yolo_msgs__msg__BoundingBox3D(
  const yolo_msgs__msg__BoundingBox3D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__BoundingBox3D(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__BoundingBox3D * ros_message);

size_t get_serialized_size_yolo_msgs__msg__BoundingBox3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__BoundingBox3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__BoundingBox3D(
  const yolo_msgs__msg__BoundingBox3D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__BoundingBox3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__BoundingBox3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, BoundingBox3D)();

bool cdr_serialize_yolo_msgs__msg__KeyPoint2DArray(
  const yolo_msgs__msg__KeyPoint2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__KeyPoint2DArray(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__KeyPoint2DArray * ros_message);

size_t get_serialized_size_yolo_msgs__msg__KeyPoint2DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__KeyPoint2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__KeyPoint2DArray(
  const yolo_msgs__msg__KeyPoint2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__KeyPoint2DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__KeyPoint2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, KeyPoint2DArray)();

bool cdr_serialize_yolo_msgs__msg__KeyPoint3DArray(
  const yolo_msgs__msg__KeyPoint3DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__KeyPoint3DArray(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__KeyPoint3DArray * ros_message);

size_t get_serialized_size_yolo_msgs__msg__KeyPoint3DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__KeyPoint3DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__KeyPoint3DArray(
  const yolo_msgs__msg__KeyPoint3DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__KeyPoint3DArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__KeyPoint3DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, KeyPoint3DArray)();

bool cdr_serialize_yolo_msgs__msg__Mask(
  const yolo_msgs__msg__Mask * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__Mask(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__Mask * ros_message);

size_t get_serialized_size_yolo_msgs__msg__Mask(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__Mask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__Mask(
  const yolo_msgs__msg__Mask * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__Mask(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__Mask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, Mask)();


using _Detection__ros_msg_type = yolo_msgs__msg__Detection;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_yolo_msgs__msg__Detection(
  const yolo_msgs__msg__Detection * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: class_id
  {
    cdr << ros_message->class_id;
  }

  // Field name: class_name
  {
    const rosidl_runtime_c__String * str = &ros_message->class_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bbox
  {
    cdr_serialize_yolo_msgs__msg__BoundingBox2D(
      &ros_message->bbox, cdr);
  }

  // Field name: bbox3d
  {
    cdr_serialize_yolo_msgs__msg__BoundingBox3D(
      &ros_message->bbox3d, cdr);
  }

  // Field name: mask
  {
    cdr_serialize_yolo_msgs__msg__Mask(
      &ros_message->mask, cdr);
  }

  // Field name: keypoints
  {
    cdr_serialize_yolo_msgs__msg__KeyPoint2DArray(
      &ros_message->keypoints, cdr);
  }

  // Field name: keypoints3d
  {
    cdr_serialize_yolo_msgs__msg__KeyPoint3DArray(
      &ros_message->keypoints3d, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_deserialize_yolo_msgs__msg__Detection(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__Detection * ros_message)
{
  // Field name: class_id
  {
    cdr >> ros_message->class_id;
  }

  // Field name: class_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->class_name.data) {
      rosidl_runtime_c__String__init(&ros_message->class_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->class_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'class_name'\n");
      return false;
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: bbox
  {
    cdr_deserialize_yolo_msgs__msg__BoundingBox2D(cdr, &ros_message->bbox);
  }

  // Field name: bbox3d
  {
    cdr_deserialize_yolo_msgs__msg__BoundingBox3D(cdr, &ros_message->bbox3d);
  }

  // Field name: mask
  {
    cdr_deserialize_yolo_msgs__msg__Mask(cdr, &ros_message->mask);
  }

  // Field name: keypoints
  {
    cdr_deserialize_yolo_msgs__msg__KeyPoint2DArray(cdr, &ros_message->keypoints);
  }

  // Field name: keypoints3d
  {
    cdr_deserialize_yolo_msgs__msg__KeyPoint3DArray(cdr, &ros_message->keypoints3d);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_yolo_msgs__msg__Detection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: class_id
  {
    size_t item_size = sizeof(ros_message->class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: class_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->class_name.size + 1);

  // Field name: score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: bbox
  current_alignment += get_serialized_size_yolo_msgs__msg__BoundingBox2D(
    &(ros_message->bbox), current_alignment);

  // Field name: bbox3d
  current_alignment += get_serialized_size_yolo_msgs__msg__BoundingBox3D(
    &(ros_message->bbox3d), current_alignment);

  // Field name: mask
  current_alignment += get_serialized_size_yolo_msgs__msg__Mask(
    &(ros_message->mask), current_alignment);

  // Field name: keypoints
  current_alignment += get_serialized_size_yolo_msgs__msg__KeyPoint2DArray(
    &(ros_message->keypoints), current_alignment);

  // Field name: keypoints3d
  current_alignment += get_serialized_size_yolo_msgs__msg__KeyPoint3DArray(
    &(ros_message->keypoints3d), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_yolo_msgs__msg__Detection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: class_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: class_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: bbox
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__BoundingBox2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bbox3d
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__BoundingBox3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mask
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__Mask(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: keypoints
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__KeyPoint2DArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: keypoints3d
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__KeyPoint3DArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yolo_msgs__msg__Detection;
    is_plain =
      (
      offsetof(DataType, keypoints3d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_key_yolo_msgs__msg__Detection(
  const yolo_msgs__msg__Detection * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: class_id
  {
    cdr << ros_message->class_id;
  }

  // Field name: class_name
  {
    const rosidl_runtime_c__String * str = &ros_message->class_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bbox
  {
    cdr_serialize_key_yolo_msgs__msg__BoundingBox2D(
      &ros_message->bbox, cdr);
  }

  // Field name: bbox3d
  {
    cdr_serialize_key_yolo_msgs__msg__BoundingBox3D(
      &ros_message->bbox3d, cdr);
  }

  // Field name: mask
  {
    cdr_serialize_key_yolo_msgs__msg__Mask(
      &ros_message->mask, cdr);
  }

  // Field name: keypoints
  {
    cdr_serialize_key_yolo_msgs__msg__KeyPoint2DArray(
      &ros_message->keypoints, cdr);
  }

  // Field name: keypoints3d
  {
    cdr_serialize_key_yolo_msgs__msg__KeyPoint3DArray(
      &ros_message->keypoints3d, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_key_yolo_msgs__msg__Detection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Detection__ros_msg_type * ros_message = static_cast<const _Detection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: class_id
  {
    size_t item_size = sizeof(ros_message->class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: class_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->class_name.size + 1);

  // Field name: score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: bbox
  current_alignment += get_serialized_size_key_yolo_msgs__msg__BoundingBox2D(
    &(ros_message->bbox), current_alignment);

  // Field name: bbox3d
  current_alignment += get_serialized_size_key_yolo_msgs__msg__BoundingBox3D(
    &(ros_message->bbox3d), current_alignment);

  // Field name: mask
  current_alignment += get_serialized_size_key_yolo_msgs__msg__Mask(
    &(ros_message->mask), current_alignment);

  // Field name: keypoints
  current_alignment += get_serialized_size_key_yolo_msgs__msg__KeyPoint2DArray(
    &(ros_message->keypoints), current_alignment);

  // Field name: keypoints3d
  current_alignment += get_serialized_size_key_yolo_msgs__msg__KeyPoint3DArray(
    &(ros_message->keypoints3d), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_key_yolo_msgs__msg__Detection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: class_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: class_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: bbox
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__BoundingBox2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bbox3d
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__BoundingBox3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mask
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__Mask(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: keypoints
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__KeyPoint2DArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: keypoints3d
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__KeyPoint3DArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yolo_msgs__msg__Detection;
    is_plain =
      (
      offsetof(DataType, keypoints3d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Detection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const yolo_msgs__msg__Detection * ros_message = static_cast<const yolo_msgs__msg__Detection *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_yolo_msgs__msg__Detection(ros_message, cdr);
}

static bool _Detection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  yolo_msgs__msg__Detection * ros_message = static_cast<yolo_msgs__msg__Detection *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_yolo_msgs__msg__Detection(cdr, ros_message);
}

static uint32_t _Detection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yolo_msgs__msg__Detection(
      untyped_ros_message, 0));
}

static size_t _Detection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yolo_msgs__msg__Detection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Detection = {
  "yolo_msgs::msg",
  "Detection",
  _Detection__cdr_serialize,
  _Detection__cdr_deserialize,
  _Detection__get_serialized_size,
  _Detection__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Detection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Detection,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__Detection__get_type_hash,
  &yolo_msgs__msg__Detection__get_type_description,
  &yolo_msgs__msg__Detection__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, Detection)() {
  return &_Detection__type_support;
}

#if defined(__cplusplus)
}
#endif
