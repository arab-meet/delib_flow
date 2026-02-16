// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/detection.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define YOLO_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bbox'
#include "yolo_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'bbox3d'
#include "yolo_msgs/msg/detail/bounding_box3_d__traits.hpp"
// Member 'mask'
#include "yolo_msgs/msg/detail/mask__traits.hpp"
// Member 'keypoints'
#include "yolo_msgs/msg/detail/key_point2_d_array__traits.hpp"
// Member 'keypoints3d'
#include "yolo_msgs/msg/detail/key_point3_d_array__traits.hpp"

namespace yolo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: bbox3d
  {
    out << "bbox3d: ";
    to_flow_style_yaml(msg.bbox3d, out);
    out << ", ";
  }

  // member: mask
  {
    out << "mask: ";
    to_flow_style_yaml(msg.mask, out);
    out << ", ";
  }

  // member: keypoints
  {
    out << "keypoints: ";
    to_flow_style_yaml(msg.keypoints, out);
    out << ", ";
  }

  // member: keypoints3d
  {
    out << "keypoints3d: ";
    to_flow_style_yaml(msg.keypoints3d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: bbox3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox3d:\n";
    to_block_style_yaml(msg.bbox3d, out, indentation + 2);
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask:\n";
    to_block_style_yaml(msg.mask, out, indentation + 2);
  }

  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keypoints:\n";
    to_block_style_yaml(msg.keypoints, out, indentation + 2);
  }

  // member: keypoints3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keypoints3d:\n";
    to_block_style_yaml(msg.keypoints3d, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const yolo_msgs::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::msg::Detection & msg)
{
  return yolo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::msg::Detection>()
{
  return "yolo_msgs::msg::Detection";
}

template<>
inline const char * name<yolo_msgs::msg::Detection>()
{
  return "yolo_msgs/msg/Detection";
}

template<>
struct has_fixed_size<yolo_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo_msgs::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
