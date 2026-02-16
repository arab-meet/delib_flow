// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/msg/motion.hpp"


#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "play_motion2_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace play_motion2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motion & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: usage
  {
    out << "usage: ";
    rosidl_generator_traits::value_to_yaml(msg.usage, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: times_from_start
  {
    if (msg.times_from_start.size() == 0) {
      out << "times_from_start: []";
    } else {
      out << "times_from_start: [";
      size_t pending_items = msg.times_from_start.size();
      for (auto item : msg.times_from_start) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usage: ";
    rosidl_generator_traits::value_to_yaml(msg.usage, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: times_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times_from_start.size() == 0) {
      out << "times_from_start: []\n";
    } else {
      out << "times_from_start:\n";
      for (auto item : msg.times_from_start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motion & msg, bool use_flow_style = false)
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

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::msg::Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::msg::Motion & msg)
{
  return play_motion2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::msg::Motion>()
{
  return "play_motion2_msgs::msg::Motion";
}

template<>
inline const char * name<play_motion2_msgs::msg::Motion>()
{
  return "play_motion2_msgs/msg/Motion";
}

template<>
struct has_fixed_size<play_motion2_msgs::msg::Motion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<play_motion2_msgs::msg::Motion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<play_motion2_msgs::msg::Motion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
