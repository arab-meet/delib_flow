// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "play_motion2_msgs/msg/detail/motion__rosidl_typesupport_introspection_c.h"
#include "play_motion2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "play_motion2_msgs/msg/detail/motion__functions.h"
#include "play_motion2_msgs/msg/detail/motion__struct.h"


// Include directives for member types
// Member `key`
// Member `name`
// Member `usage`
// Member `description`
// Member `joints`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
// Member `times_from_start`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  play_motion2_msgs__msg__Motion__init(message_memory);
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_fini_function(void * message_memory)
{
  play_motion2_msgs__msg__Motion__fini(message_memory);
}

size_t play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__joints(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__joints(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__times_from_start(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__times_from_start(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__times_from_start(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__times_from_start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__times_from_start(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__times_from_start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__times_from_start(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__times_from_start(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array[7] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, joints),  // bytes offset in struct
    NULL,  // default value
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__joints,  // size() function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__joints,  // get_const(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__joints,  // get(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__joints,  // fetch(index, &value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__joints,  // assign(index, value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__joints  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, positions),  // bytes offset in struct
    NULL,  // default value
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__positions,  // size() function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__positions,  // get_const(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__positions,  // get(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__positions,  // fetch(index, &value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__positions,  // assign(index, value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__positions  // resize(index) function pointer
  },
  {
    "times_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__msg__Motion, times_from_start),  // bytes offset in struct
    NULL,  // default value
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__times_from_start,  // size() function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__times_from_start,  // get_const(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__times_from_start,  // get(index) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__times_from_start,  // fetch(index, &value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__times_from_start,  // assign(index, value) function pointer
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__times_from_start  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_members = {
  "play_motion2_msgs__msg",  // message namespace
  "Motion",  // message name
  7,  // number of fields
  sizeof(play_motion2_msgs__msg__Motion),
  false,  // has_any_key_member_
  play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array,  // message members
  play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_init_function,  // function to initialize message memory (memory has to be allocated)
  play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle = {
  0,
  &play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__msg__Motion__get_type_hash,
  &play_motion2_msgs__msg__Motion__get_type_description,
  &play_motion2_msgs__msg__Motion__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, msg, Motion)() {
  if (!play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle.typesupport_identifier) {
    play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &play_motion2_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
