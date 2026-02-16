// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolo_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolo_msgs/msg/detail/key_point3_d_array__rosidl_typesupport_introspection_c.h"
#include "yolo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolo_msgs/msg/detail/key_point3_d_array__functions.h"
#include "yolo_msgs/msg/detail/key_point3_d_array__struct.h"


// Include directives for member types
// Member `data`
#include "yolo_msgs/msg/key_point3_d.h"
// Member `data`
#include "yolo_msgs/msg/detail/key_point3_d__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolo_msgs__msg__KeyPoint3DArray__init(message_memory);
}

void yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_fini_function(void * message_memory)
{
  yolo_msgs__msg__KeyPoint3DArray__fini(message_memory);
}

size_t yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint3DArray__data(
  const void * untyped_member)
{
  const yolo_msgs__msg__KeyPoint3D__Sequence * member =
    (const yolo_msgs__msg__KeyPoint3D__Sequence *)(untyped_member);
  return member->size;
}

const void * yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint3DArray__data(
  const void * untyped_member, size_t index)
{
  const yolo_msgs__msg__KeyPoint3D__Sequence * member =
    (const yolo_msgs__msg__KeyPoint3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint3DArray__data(
  void * untyped_member, size_t index)
{
  yolo_msgs__msg__KeyPoint3D__Sequence * member =
    (yolo_msgs__msg__KeyPoint3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint3DArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yolo_msgs__msg__KeyPoint3D * item =
    ((const yolo_msgs__msg__KeyPoint3D *)
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint3DArray__data(untyped_member, index));
  yolo_msgs__msg__KeyPoint3D * value =
    (yolo_msgs__msg__KeyPoint3D *)(untyped_value);
  *value = *item;
}

void yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint3DArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yolo_msgs__msg__KeyPoint3D * item =
    ((yolo_msgs__msg__KeyPoint3D *)
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint3DArray__data(untyped_member, index));
  const yolo_msgs__msg__KeyPoint3D * value =
    (const yolo_msgs__msg__KeyPoint3D *)(untyped_value);
  *item = *value;
}

bool yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint3DArray__data(
  void * untyped_member, size_t size)
{
  yolo_msgs__msg__KeyPoint3D__Sequence * member =
    (yolo_msgs__msg__KeyPoint3D__Sequence *)(untyped_member);
  yolo_msgs__msg__KeyPoint3D__Sequence__fini(member);
  return yolo_msgs__msg__KeyPoint3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__KeyPoint3DArray, data),  // bytes offset in struct
    NULL,  // default value
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint3DArray__data,  // size() function pointer
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint3DArray__data,  // get_const(index) function pointer
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint3DArray__data,  // get(index) function pointer
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__fetch_function__KeyPoint3DArray__data,  // fetch(index, &value) function pointer
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__assign_function__KeyPoint3DArray__data,  // assign(index, value) function pointer
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint3DArray__data  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__KeyPoint3DArray, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_members = {
  "yolo_msgs__msg",  // message namespace
  "KeyPoint3DArray",  // message name
  2,  // number of fields
  sizeof(yolo_msgs__msg__KeyPoint3DArray),
  false,  // has_any_key_member_
  yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_member_array,  // message members
  yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_type_support_handle = {
  0,
  &yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_members,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__KeyPoint3DArray__get_type_hash,
  &yolo_msgs__msg__KeyPoint3DArray__get_type_description,
  &yolo_msgs__msg__KeyPoint3DArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, KeyPoint3DArray)() {
  yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, KeyPoint3D)();
  if (!yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_type_support_handle.typesupport_identifier) {
    yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolo_msgs__msg__KeyPoint3DArray__rosidl_typesupport_introspection_c__KeyPoint3DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
