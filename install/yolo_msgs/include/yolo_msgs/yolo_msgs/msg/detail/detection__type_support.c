// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolo_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolo_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "yolo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolo_msgs/msg/detail/detection__functions.h"
#include "yolo_msgs/msg/detail/detection__struct.h"


// Include directives for member types
// Member `class_name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "yolo_msgs/msg/bounding_box2_d.h"
// Member `bbox`
#include "yolo_msgs/msg/detail/bounding_box2_d__rosidl_typesupport_introspection_c.h"
// Member `bbox3d`
#include "yolo_msgs/msg/bounding_box3_d.h"
// Member `bbox3d`
#include "yolo_msgs/msg/detail/bounding_box3_d__rosidl_typesupport_introspection_c.h"
// Member `mask`
#include "yolo_msgs/msg/mask.h"
// Member `mask`
#include "yolo_msgs/msg/detail/mask__rosidl_typesupport_introspection_c.h"
// Member `keypoints`
#include "yolo_msgs/msg/key_point2_d_array.h"
// Member `keypoints`
#include "yolo_msgs/msg/detail/key_point2_d_array__rosidl_typesupport_introspection_c.h"
// Member `keypoints3d`
#include "yolo_msgs/msg/key_point3_d_array.h"
// Member `keypoints3d`
#include "yolo_msgs/msg/detail/key_point3_d_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolo_msgs__msg__Detection__init(message_memory);
}

void yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  yolo_msgs__msg__Detection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[9] = {
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, bbox3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, keypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keypoints3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs__msg__Detection, keypoints3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "yolo_msgs__msg",  // message namespace
  "Detection",  // message name
  9,  // number of fields
  sizeof(yolo_msgs__msg__Detection),
  false,  // has_any_key_member_
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__Detection__get_type_hash,
  &yolo_msgs__msg__Detection__get_type_description,
  &yolo_msgs__msg__Detection__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, Detection)() {
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, BoundingBox2D)();
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, BoundingBox3D)();
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, Mask)();
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, KeyPoint2DArray)();
  yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, KeyPoint3DArray)();
  if (!yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolo_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
