// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_aruco_interfaces:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_aruco_interfaces/msg/detail/aruco_markers__rosidl_typesupport_introspection_c.h"
#include "ros2_aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_aruco_interfaces/msg/detail/aruco_markers__functions.h"
#include "ros2_aruco_interfaces/msg/detail/aruco_markers__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `marker_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_aruco_interfaces__msg__ArucoMarkers__init(message_memory);
}

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_fini_function(void * message_memory)
{
  ros2_aruco_interfaces__msg__ArucoMarkers__fini(message_memory);
}

size_t ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__marker_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__marker_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__marker_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__marker_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__marker_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__marker_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__marker_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__marker_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_aruco_interfaces__msg__ArucoMarkers, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_aruco_interfaces__msg__ArucoMarkers, marker_ids),  // bytes offset in struct
    NULL,  // default value
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__marker_ids,  // size() function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__marker_ids,  // get_const(index) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__marker_ids,  // get(index) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__marker_ids,  // fetch(index, &value) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__marker_ids,  // assign(index, value) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__marker_ids  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_aruco_interfaces__msg__ArucoMarkers, poses),  // bytes offset in struct
    NULL,  // default value
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__poses,  // size() function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__poses,  // get_const(index) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__poses,  // get(index) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__poses,  // fetch(index, &value) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__poses,  // assign(index, value) function pointer
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_members = {
  "ros2_aruco_interfaces__msg",  // message namespace
  "ArucoMarkers",  // message name
  3,  // number of fields
  sizeof(ros2_aruco_interfaces__msg__ArucoMarkers),
  false,  // has_any_key_member_
  ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array,  // message members
  ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle = {
  0,
  &ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_members,
  get_message_typesupport_handle_function,
  &ros2_aruco_interfaces__msg__ArucoMarkers__get_type_hash,
  &ros2_aruco_interfaces__msg__ArucoMarkers__get_type_description,
  &ros2_aruco_interfaces__msg__ArucoMarkers__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_aruco_interfaces, msg, ArucoMarkers)() {
  ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle.typesupport_identifier) {
    ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_aruco_interfaces__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
