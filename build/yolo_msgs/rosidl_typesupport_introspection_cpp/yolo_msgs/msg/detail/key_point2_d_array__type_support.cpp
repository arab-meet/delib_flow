// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yolo_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yolo_msgs/msg/detail/key_point2_d_array__functions.h"
#include "yolo_msgs/msg/detail/key_point2_d_array__struct.hpp"
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

void KeyPoint2DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yolo_msgs::msg::KeyPoint2DArray(_init);
}

void KeyPoint2DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yolo_msgs::msg::KeyPoint2DArray *>(message_memory);
  typed_message->~KeyPoint2DArray();
}

size_t size_function__KeyPoint2DArray__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<yolo_msgs::msg::KeyPoint2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KeyPoint2DArray__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<yolo_msgs::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void * get_function__KeyPoint2DArray__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<yolo_msgs::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__KeyPoint2DArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const yolo_msgs::msg::KeyPoint2D *>(
    get_const_function__KeyPoint2DArray__data(untyped_member, index));
  auto & value = *reinterpret_cast<yolo_msgs::msg::KeyPoint2D *>(untyped_value);
  value = item;
}

void assign_function__KeyPoint2DArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<yolo_msgs::msg::KeyPoint2D *>(
    get_function__KeyPoint2DArray__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const yolo_msgs::msg::KeyPoint2D *>(untyped_value);
  item = value;
}

void resize_function__KeyPoint2DArray__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<yolo_msgs::msg::KeyPoint2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyPoint2DArray_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yolo_msgs::msg::KeyPoint2D>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolo_msgs::msg::KeyPoint2DArray, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__KeyPoint2DArray__data,  // size() function pointer
    get_const_function__KeyPoint2DArray__data,  // get_const(index) function pointer
    get_function__KeyPoint2DArray__data,  // get(index) function pointer
    fetch_function__KeyPoint2DArray__data,  // fetch(index, &value) function pointer
    assign_function__KeyPoint2DArray__data,  // assign(index, value) function pointer
    resize_function__KeyPoint2DArray__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyPoint2DArray_message_members = {
  "yolo_msgs::msg",  // message namespace
  "KeyPoint2DArray",  // message name
  1,  // number of fields
  sizeof(yolo_msgs::msg::KeyPoint2DArray),
  false,  // has_any_key_member_
  KeyPoint2DArray_message_member_array,  // message members
  KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyPoint2DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
  &yolo_msgs__msg__KeyPoint2DArray__get_type_hash,
  &yolo_msgs__msg__KeyPoint2DArray__get_type_description,
  &yolo_msgs__msg__KeyPoint2DArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yolo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yolo_msgs::msg::KeyPoint2DArray>()
{
  return &::yolo_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yolo_msgs, msg, KeyPoint2DArray)() {
  return &::yolo_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
