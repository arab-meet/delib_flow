// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice
#include "play_motion2_msgs/action/detail/play_motion2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "play_motion2_msgs/action/detail/play_motion2__struct.h"
#include "play_motion2_msgs/action/detail/play_motion2__functions.h"
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

#include "rosidl_runtime_c/string.h"  // motion_name
#include "rosidl_runtime_c/string_functions.h"  // motion_name

// forward declare type support functions


using _PlayMotion2_Goal__ros_msg_type = play_motion2_msgs__action__PlayMotion2_Goal;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Goal(
  const play_motion2_msgs__action__PlayMotion2_Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motion_name
  {
    const rosidl_runtime_c__String * str = &ros_message->motion_name;
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

  // Field name: skip_planning
  {
    cdr << (ros_message->skip_planning ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Goal(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Goal * ros_message)
{
  // Field name: motion_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motion_name.data) {
      rosidl_runtime_c__String__init(&ros_message->motion_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motion_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motion_name'\n");
      return false;
    }
  }

  // Field name: skip_planning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->skip_planning = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Goal__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motion_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion_name.size + 1);

  // Field name: skip_planning
  {
    size_t item_size = sizeof(ros_message->skip_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
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

  // Field name: motion_name
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

  // Field name: skip_planning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs__action__PlayMotion2_Goal;
    is_plain =
      (
      offsetof(DataType, skip_planning) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Goal(
  const play_motion2_msgs__action__PlayMotion2_Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motion_name
  {
    const rosidl_runtime_c__String * str = &ros_message->motion_name;
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

  // Field name: skip_planning
  {
    cdr << (ros_message->skip_planning ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Goal__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motion_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion_name.size + 1);

  // Field name: skip_planning
  {
    size_t item_size = sizeof(ros_message->skip_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
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
  // Field name: motion_name
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

  // Field name: skip_planning
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs__action__PlayMotion2_Goal;
    is_plain =
      (
      offsetof(DataType, skip_planning) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_Goal * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_Goal *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_Goal(ros_message, cdr);
}

static bool _PlayMotion2_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_Goal * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_Goal *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Goal(cdr, ros_message);
}

static uint32_t _PlayMotion2_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_Goal = {
  "play_motion2_msgs::action",
  "PlayMotion2_Goal",
  _PlayMotion2_Goal__cdr_serialize,
  _PlayMotion2_Goal__cdr_deserialize,
  _PlayMotion2_Goal__get_serialized_size,
  _PlayMotion2_Goal__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_Goal,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_Goal__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_Goal__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_Goal__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Goal)() {
  return &_PlayMotion2_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // error
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error

// forward declare type support functions


using _PlayMotion2_Result__ros_msg_type = play_motion2_msgs__action__PlayMotion2_Result;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Result(
  const play_motion2_msgs__action__PlayMotion2_Result * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error
  {
    const rosidl_runtime_c__String * str = &ros_message->error;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Result(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Result * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error.data) {
      rosidl_runtime_c__String__init(&ros_message->error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Result__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs__action__PlayMotion2_Result;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Result(
  const play_motion2_msgs__action__PlayMotion2_Result * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error
  {
    const rosidl_runtime_c__String * str = &ros_message->error;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Result__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs__action__PlayMotion2_Result;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_Result * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_Result *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_Result(ros_message, cdr);
}

static bool _PlayMotion2_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_Result * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_Result *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Result(cdr, ros_message);
}

static uint32_t _PlayMotion2_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_Result = {
  "play_motion2_msgs::action",
  "PlayMotion2_Result",
  _PlayMotion2_Result__cdr_serialize,
  _PlayMotion2_Result__cdr_deserialize,
  _PlayMotion2_Result__get_serialized_size,
  _PlayMotion2_Result__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_Result,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_Result__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_Result__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_Result__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Result)() {
  return &_PlayMotion2_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // current_time

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _PlayMotion2_Feedback__ros_msg_type = play_motion2_msgs__action__PlayMotion2_Feedback;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Feedback(
  const play_motion2_msgs__action__PlayMotion2_Feedback * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: current_time
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->current_time, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Feedback(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Feedback * ros_message)
{
  // Field name: current_time
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->current_time);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Feedback__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: current_time
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->current_time), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
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

  // Field name: current_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_Feedback;
    is_plain =
      (
      offsetof(DataType, current_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Feedback(
  const play_motion2_msgs__action__PlayMotion2_Feedback * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: current_time
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->current_time, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_Feedback__ros_msg_type * ros_message = static_cast<const _PlayMotion2_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: current_time
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->current_time), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
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
  // Field name: current_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_Feedback;
    is_plain =
      (
      offsetof(DataType, current_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_Feedback * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_Feedback *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_Feedback(ros_message, cdr);
}

static bool _PlayMotion2_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_Feedback * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_Feedback *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Feedback(cdr, ros_message);
}

static uint32_t _PlayMotion2_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_Feedback = {
  "play_motion2_msgs::action",
  "PlayMotion2_Feedback",
  _PlayMotion2_Feedback__cdr_serialize,
  _PlayMotion2_Feedback__cdr_deserialize,
  _PlayMotion2_Feedback__get_serialized_size,
  _PlayMotion2_Feedback__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_Feedback,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_Feedback__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_Feedback__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_Feedback__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Feedback)() {
  return &_PlayMotion2_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Goal(
  const play_motion2_msgs__action__PlayMotion2_Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Goal(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Goal * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Goal(
  const play_motion2_msgs__action__PlayMotion2_Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Goal)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_unique_identifier_msgs__msg__UUID(
  eprosima::fastcdr::Cdr & cdr,
  unique_identifier_msgs__msg__UUID * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PlayMotion2_SendGoal_Request__ros_msg_type = play_motion2_msgs__action__PlayMotion2_SendGoal_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  // Field name: goal
  {
    cdr_serialize_play_motion2_msgs__action__PlayMotion2_Goal(
      &ros_message->goal, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message)
{
  // Field name: goal_id
  {
    cdr_deserialize_unique_identifier_msgs__msg__UUID(cdr, &ros_message->goal_id);
  }

  // Field name: goal
  {
    cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Goal(cdr, &ros_message->goal);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  // Field name: goal
  current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
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

  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: goal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_Goal(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_key_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  // Field name: goal
  {
    cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Goal(
      &ros_message->goal, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_key_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  // Field name: goal
  current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
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
  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: goal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Goal(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_SendGoal_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(ros_message, cdr);
}

static bool _PlayMotion2_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_SendGoal_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(cdr, ros_message);
}

static uint32_t _PlayMotion2_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_SendGoal_Request = {
  "play_motion2_msgs::action",
  "PlayMotion2_SendGoal_Request",
  _PlayMotion2_SendGoal_Request__cdr_serialize,
  _PlayMotion2_SendGoal_Request__cdr_deserialize,
  _PlayMotion2_SendGoal_Request__get_serialized_size,
  _PlayMotion2_SendGoal_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_SendGoal_Request,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Request__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Request__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Request)() {
  return &_PlayMotion2_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _PlayMotion2_SendGoal_Response__ros_msg_type = play_motion2_msgs__action__PlayMotion2_SendGoal_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message)
{
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
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

  // Field name: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
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
  // Field name: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_SendGoal_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(ros_message, cdr);
}

static bool _PlayMotion2_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_SendGoal_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(cdr, ros_message);
}

static uint32_t _PlayMotion2_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_SendGoal_Response = {
  "play_motion2_msgs::action",
  "PlayMotion2_SendGoal_Response",
  _PlayMotion2_SendGoal_Response__cdr_serialize,
  _PlayMotion2_SendGoal_Response__cdr_deserialize,
  _PlayMotion2_SendGoal_Response__get_serialized_size,
  _PlayMotion2_SendGoal_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_SendGoal_Response,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Response__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Response__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Response)() {
  return &_PlayMotion2_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Request)();

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _PlayMotion2_SendGoal_Event__ros_msg_type = play_motion2_msgs__action__PlayMotion2_SendGoal_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(&ros_message->request);
    }
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(&ros_message->response);
    }
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Event__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_SendGoal_Event__ros_msg_type * ros_message = static_cast<const _PlayMotion2_SendGoal_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_SendGoal_Response(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_SendGoal_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_SendGoal_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_SendGoal_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(ros_message, cdr);
}

static bool _PlayMotion2_SendGoal_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_SendGoal_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(cdr, ros_message);
}

static uint32_t _PlayMotion2_SendGoal_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_SendGoal_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_SendGoal_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_SendGoal_Event = {
  "play_motion2_msgs::action",
  "PlayMotion2_SendGoal_Event",
  _PlayMotion2_SendGoal_Event__cdr_serialize,
  _PlayMotion2_SendGoal_Event__cdr_deserialize,
  _PlayMotion2_SendGoal_Event__get_serialized_size,
  _PlayMotion2_SendGoal_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_SendGoal_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_SendGoal_Event,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Event__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Event__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_SendGoal_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Event)() {
  return &_PlayMotion2_SendGoal_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "play_motion2_msgs/action/play_motion2.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlayMotion2_SendGoal__callbacks = {
  "play_motion2_msgs::action",
  "PlayMotion2_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal_Response)(),
};

static rosidl_service_type_support_t PlayMotion2_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlayMotion2_SendGoal__callbacks,
  get_service_typesupport_handle_function,
  &_PlayMotion2_SendGoal_Request__type_support,
  &_PlayMotion2_SendGoal_Response__type_support,
  &_PlayMotion2_SendGoal_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    action,
    PlayMotion2_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    action,
    PlayMotion2_SendGoal
  ),
  &play_motion2_msgs__action__PlayMotion2_SendGoal__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_SendGoal__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_SendGoal__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_SendGoal)() {
  return &PlayMotion2_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_unique_identifier_msgs__msg__UUID(
  eprosima::fastcdr::Cdr & cdr,
  unique_identifier_msgs__msg__UUID * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PlayMotion2_GetResult_Request__ros_msg_type = play_motion2_msgs__action__PlayMotion2_GetResult_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message)
{
  // Field name: goal_id
  {
    cdr_deserialize_unique_identifier_msgs__msg__UUID(cdr, &ros_message->goal_id);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Request__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
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

  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_key_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Request__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_key_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
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
  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unique_identifier_msgs__msg__UUID(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_GetResult_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(ros_message, cdr);
}

static bool _PlayMotion2_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_GetResult_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(cdr, ros_message);
}

static uint32_t _PlayMotion2_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_GetResult_Request = {
  "play_motion2_msgs::action",
  "PlayMotion2_GetResult_Request",
  _PlayMotion2_GetResult_Request__cdr_serialize,
  _PlayMotion2_GetResult_Request__cdr_deserialize,
  _PlayMotion2_GetResult_Request__get_serialized_size,
  _PlayMotion2_GetResult_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_GetResult_Request,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Request__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Request__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Request)() {
  return &_PlayMotion2_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"  // result

// forward declare type support functions

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Result(
  const play_motion2_msgs__action__PlayMotion2_Result * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Result(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Result * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Result(
  const play_motion2_msgs__action__PlayMotion2_Result * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Result)();


using _PlayMotion2_GetResult_Response__ros_msg_type = play_motion2_msgs__action__PlayMotion2_GetResult_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    cdr_serialize_play_motion2_msgs__action__PlayMotion2_Result(
      &ros_message->result, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message)
{
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Result(cdr, &ros_message->result);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Response__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: result
  current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
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

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: result
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_Result(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Result(
      &ros_message->result, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Response__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: result
  current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
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
  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: result
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Result(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_GetResult_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(ros_message, cdr);
}

static bool _PlayMotion2_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_GetResult_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(cdr, ros_message);
}

static uint32_t _PlayMotion2_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_GetResult_Response = {
  "play_motion2_msgs::action",
  "PlayMotion2_GetResult_Response",
  _PlayMotion2_GetResult_Response__cdr_serialize,
  _PlayMotion2_GetResult_Response__cdr_deserialize,
  _PlayMotion2_GetResult_Response__get_serialized_size,
  _PlayMotion2_GetResult_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_GetResult_Response,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Response__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Response__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Response)() {
  return &_PlayMotion2_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Request)();

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _PlayMotion2_GetResult_Event__ros_msg_type = play_motion2_msgs__action__PlayMotion2_GetResult_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(&ros_message->request);
    }
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(&ros_message->response);
    }
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Event__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_GetResult_Event__ros_msg_type * ros_message = static_cast<const _PlayMotion2_GetResult_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_GetResult_Response(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_GetResult_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_GetResult_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_GetResult_Event * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_GetResult_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_GetResult_Event(ros_message, cdr);
}

static bool _PlayMotion2_GetResult_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_GetResult_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_GetResult_Event(cdr, ros_message);
}

static uint32_t _PlayMotion2_GetResult_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_GetResult_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_GetResult_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_GetResult_Event = {
  "play_motion2_msgs::action",
  "PlayMotion2_GetResult_Event",
  _PlayMotion2_GetResult_Event__cdr_serialize,
  _PlayMotion2_GetResult_Event__cdr_deserialize,
  _PlayMotion2_GetResult_Event__get_serialized_size,
  _PlayMotion2_GetResult_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_GetResult_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_GetResult_Event,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Event__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Event__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_GetResult_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Event)() {
  return &_PlayMotion2_GetResult_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/play_motion2.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlayMotion2_GetResult__callbacks = {
  "play_motion2_msgs::action",
  "PlayMotion2_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult_Response)(),
};

static rosidl_service_type_support_t PlayMotion2_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlayMotion2_GetResult__callbacks,
  get_service_typesupport_handle_function,
  &_PlayMotion2_GetResult_Request__type_support,
  &_PlayMotion2_GetResult_Response__type_support,
  &_PlayMotion2_GetResult_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    action,
    PlayMotion2_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    action,
    PlayMotion2_GetResult
  ),
  &play_motion2_msgs__action__PlayMotion2_GetResult__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_GetResult__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_GetResult__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_GetResult)() {
  return &PlayMotion2_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions

bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_Feedback(
  const play_motion2_msgs__action__PlayMotion2_Feedback * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Feedback(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_Feedback * ros_message);

size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Feedback(
  const play_motion2_msgs__action__PlayMotion2_Feedback * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_Feedback)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_deserialize_unique_identifier_msgs__msg__UUID(
  eprosima::fastcdr::Cdr & cdr,
  unique_identifier_msgs__msg__UUID * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
bool cdr_serialize_key_unique_identifier_msgs__msg__UUID(
  const unique_identifier_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t get_serialized_size_key_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
size_t max_serialized_size_key_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PlayMotion2_FeedbackMessage__ros_msg_type = play_motion2_msgs__action__PlayMotion2_FeedbackMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
  const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  // Field name: feedback
  {
    cdr_serialize_play_motion2_msgs__action__PlayMotion2_Feedback(
      &ros_message->feedback, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * ros_message)
{
  // Field name: goal_id
  {
    cdr_deserialize_unique_identifier_msgs__msg__UUID(cdr, &ros_message->goal_id);
  }

  // Field name: feedback
  {
    cdr_deserialize_play_motion2_msgs__action__PlayMotion2_Feedback(cdr, &ros_message->feedback);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _PlayMotion2_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  // Field name: feedback
  current_alignment += get_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
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

  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_play_motion2_msgs__action__PlayMotion2_Feedback(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
  const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_key_unique_identifier_msgs__msg__UUID(
      &ros_message->goal_id, cdr);
  }

  // Field name: feedback
  {
    cdr_serialize_key_play_motion2_msgs__action__PlayMotion2_Feedback(
      &ros_message->feedback, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayMotion2_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _PlayMotion2_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_key_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  // Field name: feedback
  current_alignment += get_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
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
  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_play_motion2_msgs__action__PlayMotion2_Feedback(
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
    using DataType = play_motion2_msgs__action__PlayMotion2_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlayMotion2_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * ros_message = static_cast<const play_motion2_msgs__action__PlayMotion2_FeedbackMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(ros_message, cdr);
}

static bool _PlayMotion2_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * ros_message = static_cast<play_motion2_msgs__action__PlayMotion2_FeedbackMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(cdr, ros_message);
}

static uint32_t _PlayMotion2_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
      untyped_ros_message, 0));
}

static size_t _PlayMotion2_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_play_motion2_msgs__action__PlayMotion2_FeedbackMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlayMotion2_FeedbackMessage = {
  "play_motion2_msgs::action",
  "PlayMotion2_FeedbackMessage",
  _PlayMotion2_FeedbackMessage__cdr_serialize,
  _PlayMotion2_FeedbackMessage__cdr_deserialize,
  _PlayMotion2_FeedbackMessage__get_serialized_size,
  _PlayMotion2_FeedbackMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlayMotion2_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayMotion2_FeedbackMessage,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__action__PlayMotion2_FeedbackMessage__get_type_hash,
  &play_motion2_msgs__action__PlayMotion2_FeedbackMessage__get_type_description,
  &play_motion2_msgs__action__PlayMotion2_FeedbackMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, action, PlayMotion2_FeedbackMessage)() {
  return &_PlayMotion2_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
