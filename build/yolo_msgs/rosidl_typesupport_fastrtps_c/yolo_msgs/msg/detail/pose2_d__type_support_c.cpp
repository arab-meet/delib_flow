// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yolo_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/pose2_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolo_msgs/msg/detail/pose2_d__struct.h"
#include "yolo_msgs/msg/detail/pose2_d__functions.h"
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

#include "yolo_msgs/msg/detail/point2_d__functions.h"  // position

// forward declare type support functions

bool cdr_serialize_yolo_msgs__msg__Point2D(
  const yolo_msgs__msg__Point2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_yolo_msgs__msg__Point2D(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__Point2D * ros_message);

size_t get_serialized_size_yolo_msgs__msg__Point2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_yolo_msgs__msg__Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_yolo_msgs__msg__Point2D(
  const yolo_msgs__msg__Point2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_yolo_msgs__msg__Point2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_yolo_msgs__msg__Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, Point2D)();


using _Pose2D__ros_msg_type = yolo_msgs__msg__Pose2D;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_yolo_msgs__msg__Pose2D(
  const yolo_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    cdr_serialize_yolo_msgs__msg__Point2D(
      &ros_message->position, cdr);
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_deserialize_yolo_msgs__msg__Pose2D(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs__msg__Pose2D * ros_message)
{
  // Field name: position
  {
    cdr_deserialize_yolo_msgs__msg__Point2D(cdr, &ros_message->position);
  }

  // Field name: theta
  {
    cdr >> ros_message->theta;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_yolo_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose2D__ros_msg_type * ros_message = static_cast<const _Pose2D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  current_alignment += get_serialized_size_yolo_msgs__msg__Point2D(
    &(ros_message->position), current_alignment);

  // Field name: theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_yolo_msgs__msg__Pose2D(
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

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_yolo_msgs__msg__Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: theta
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
    using DataType = yolo_msgs__msg__Pose2D;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_key_yolo_msgs__msg__Pose2D(
  const yolo_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    cdr_serialize_key_yolo_msgs__msg__Point2D(
      &ros_message->position, cdr);
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_key_yolo_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose2D__ros_msg_type * ros_message = static_cast<const _Pose2D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  current_alignment += get_serialized_size_key_yolo_msgs__msg__Point2D(
    &(ros_message->position), current_alignment);

  // Field name: theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_key_yolo_msgs__msg__Pose2D(
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
  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_yolo_msgs__msg__Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: theta
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
    using DataType = yolo_msgs__msg__Pose2D;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Pose2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const yolo_msgs__msg__Pose2D * ros_message = static_cast<const yolo_msgs__msg__Pose2D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_yolo_msgs__msg__Pose2D(ros_message, cdr);
}

static bool _Pose2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  yolo_msgs__msg__Pose2D * ros_message = static_cast<yolo_msgs__msg__Pose2D *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_yolo_msgs__msg__Pose2D(cdr, ros_message);
}

static uint32_t _Pose2D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yolo_msgs__msg__Pose2D(
      untyped_ros_message, 0));
}

static size_t _Pose2D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_yolo_msgs__msg__Pose2D(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Pose2D = {
  "yolo_msgs::msg",
  "Pose2D",
  _Pose2D__cdr_serialize,
  _Pose2D__cdr_deserialize,
  _Pose2D__get_serialized_size,
  _Pose2D__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Pose2D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pose2D,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__Pose2D__get_type_hash,
  &yolo_msgs__msg__Pose2D__get_type_description,
  &yolo_msgs__msg__Pose2D__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, Pose2D)() {
  return &_Pose2D__type_support;
}

#if defined(__cplusplus)
}
#endif
