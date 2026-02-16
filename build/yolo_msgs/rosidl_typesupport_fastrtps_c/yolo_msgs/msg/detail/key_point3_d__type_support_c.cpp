// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yolo_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/key_point3_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolo_msgs/msg/detail/key_point3_d__struct.h"
#include "yolo_msgs/msg/detail/key_point3_d__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // point

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_yolo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _KeyPoint3D__ros_msg_type = yolo_msgs__msg__KeyPoint3D;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_yolo_msgs__msg__KeyPoint3D(
  const yolo_msgs__msg__KeyPoint3D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: point
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->point, cdr);
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_deserialize_yolo_msgs__msg__KeyPoint3D(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__KeyPoint3D * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: point
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->point);
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_yolo_msgs__msg__KeyPoint3D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KeyPoint3D__ros_msg_type * ros_message = static_cast<const _KeyPoint3D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: point
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->point), current_alignment);

  // Field name: score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_yolo_msgs__msg__KeyPoint3D(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: point
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yolo_msgs__msg__KeyPoint3D;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_key_yolo_msgs__msg__KeyPoint3D(
  const yolo_msgs__msg__KeyPoint3D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: point
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->point, cdr);
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_key_yolo_msgs__msg__KeyPoint3D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KeyPoint3D__ros_msg_type * ros_message = static_cast<const _KeyPoint3D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: point
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->point), current_alignment);

  // Field name: score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_key_yolo_msgs__msg__KeyPoint3D(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: point
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = yolo_msgs__msg__KeyPoint3D;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _KeyPoint3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const yolo_msgs__msg__KeyPoint3D * ros_message = static_cast<const yolo_msgs__msg__KeyPoint3D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_yolo_msgs__msg__KeyPoint3D(ros_message, cdr);
}

static bool _KeyPoint3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  yolo_msgs__msg__KeyPoint3D * ros_message = static_cast<yolo_msgs__msg__KeyPoint3D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_yolo_msgs__msg__KeyPoint3D(cdr, ros_message);
}

static uint32_t _KeyPoint3D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yolo_msgs__msg__KeyPoint3D(
      untyped_ros_message, 0));
}

static size_t _KeyPoint3D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yolo_msgs__msg__KeyPoint3D(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KeyPoint3D = {
  "yolo_msgs::msg",
  "KeyPoint3D",
  _KeyPoint3D__cdr_serialize,
  _KeyPoint3D__cdr_deserialize,
  _KeyPoint3D__get_serialized_size,
  _KeyPoint3D__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _KeyPoint3D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KeyPoint3D,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__KeyPoint3D__get_type_hash,
  &yolo_msgs__msg__KeyPoint3D__get_type_description,
  &yolo_msgs__msg__KeyPoint3D__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, KeyPoint3D)() {
  return &_KeyPoint3D__type_support;
}

#if defined(__cplusplus)
}
#endif
