// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/pose2_d.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
#define YOLO_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo_msgs/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "yolo_msgs/msg/detail/point2_d__traits.hpp"

namespace yolo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose2D & msg, bool use_flow_style = false)
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
  const yolo_msgs::msg::Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::msg::Pose2D & msg)
{
  return yolo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::msg::Pose2D>()
{
  return "yolo_msgs::msg::Pose2D";
}

template<>
inline const char * name<yolo_msgs::msg::Pose2D>()
{
  return "yolo_msgs/msg/Pose2D";
}

template<>
struct has_fixed_size<yolo_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_fixed_size<yolo_msgs::msg::Point2D>::value> {};

template<>
struct has_bounded_size<yolo_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_bounded_size<yolo_msgs::msg::Point2D>::value> {};

template<>
struct is_message<yolo_msgs::msg::Pose2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
