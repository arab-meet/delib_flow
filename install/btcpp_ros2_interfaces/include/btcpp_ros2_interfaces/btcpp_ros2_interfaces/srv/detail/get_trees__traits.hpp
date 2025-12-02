// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__TRAITS_HPP_
#define BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "btcpp_ros2_interfaces/srv/detail/get_trees__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTrees_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTrees_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTrees_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::srv::GetTrees_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::srv::GetTrees_Request & msg)
{
  return btcpp_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::srv::GetTrees_Request>()
{
  return "btcpp_ros2_interfaces::srv::GetTrees_Request";
}

template<>
inline const char * name<btcpp_ros2_interfaces::srv::GetTrees_Request>()
{
  return "btcpp_ros2_interfaces/srv/GetTrees_Request";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<btcpp_ros2_interfaces::srv::GetTrees_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace btcpp_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTrees_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: tree_ids
  {
    if (msg.tree_ids.size() == 0) {
      out << "tree_ids: []";
    } else {
      out << "tree_ids: [";
      size_t pending_items = msg.tree_ids.size();
      for (auto item : msg.tree_ids) {
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
  const GetTrees_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tree_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tree_ids.size() == 0) {
      out << "tree_ids: []\n";
    } else {
      out << "tree_ids:\n";
      for (auto item : msg.tree_ids) {
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

inline std::string to_yaml(const GetTrees_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::srv::GetTrees_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::srv::GetTrees_Response & msg)
{
  return btcpp_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::srv::GetTrees_Response>()
{
  return "btcpp_ros2_interfaces::srv::GetTrees_Response";
}

template<>
inline const char * name<btcpp_ros2_interfaces::srv::GetTrees_Response>()
{
  return "btcpp_ros2_interfaces/srv/GetTrees_Response";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<btcpp_ros2_interfaces::srv::GetTrees_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<btcpp_ros2_interfaces::srv::GetTrees>()
{
  return "btcpp_ros2_interfaces::srv::GetTrees";
}

template<>
inline const char * name<btcpp_ros2_interfaces::srv::GetTrees>()
{
  return "btcpp_ros2_interfaces/srv/GetTrees";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees>
  : std::integral_constant<
    bool,
    has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees_Request>::value &&
    has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees_Response>::value
  >
{
};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees>
  : std::integral_constant<
    bool,
    has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Request>::value &&
    has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Response>::value
  >
{
};

template<>
struct is_service<btcpp_ros2_interfaces::srv::GetTrees>
  : std::true_type
{
};

template<>
struct is_service_request<btcpp_ros2_interfaces::srv::GetTrees_Request>
  : std::true_type
{
};

template<>
struct is_service_response<btcpp_ros2_interfaces::srv::GetTrees_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__TRAITS_HPP_
