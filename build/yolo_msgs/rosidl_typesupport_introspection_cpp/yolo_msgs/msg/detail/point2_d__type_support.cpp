// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yolo_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yolo_msgs/msg/detail/point2_d__functions.h"
#include "yolo_msgs/msg/detail/point2_d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yolo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Point2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yolo_msgs::msg::Point2D(_init);
}

void Point2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yolo_msgs::msg::Point2D *>(message_memory);
  typed_message->~Point2D();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Point2D_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs::msg::Point2D, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs::msg::Point2D, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Point2D_message_members = {
  "yolo_msgs::msg",  // message namespace
  "Point2D",  // message name
  2,  // number of fields
  sizeof(yolo_msgs::msg::Point2D),
  false,  // has_any_key_member_
  Point2D_message_member_array,  // message members
  Point2D_init_function,  // function to initialize message memory (memory has to be allocated)
  Point2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Point2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Point2D_message_members,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__Point2D__get_type_hash,
  &yolo_msgs__msg__Point2D__get_type_description,
  &yolo_msgs__msg__Point2D__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yolo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yolo_msgs::msg::Point2D>()
{
  return &::yolo_msgs::msg::rosidl_typesupport_introspection_cpp::Point2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yolo_msgs, msg, Point2D)() {
  return &::yolo_msgs::msg::rosidl_typesupport_introspection_cpp::Point2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
