// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/mask.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__MASK__TRAITS_HPP_
#define YOLO_MSGS__MSG__DETAIL__MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo_msgs/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "yolo_msgs/msg/detail/point2_d__traits.hpp"

namespace yolo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mask & msg,
  std::ostream & out)
{
  out << "{";
  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yolo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolo_msgs::msg::Mask & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::msg::Mask & msg)
{
  return yolo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::msg::Mask>()
{
  return "yolo_msgs::msg::Mask";
}

template<>
inline const char * name<yolo_msgs::msg::Mask>()
{
  return "yolo_msgs/msg/Mask";
}

template<>
struct has_fixed_size<yolo_msgs::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo_msgs::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo_msgs::msg::Mask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO_MSGS__MSG__DETAIL__MASK__TRAITS_HPP_
