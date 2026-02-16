// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "btcpp_ros2_interfaces/srv/get_trees.hpp"


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

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTrees_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetTrees_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTrees_Event & msg, bool use_flow_style = false)
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
  const btcpp_ros2_interfaces::srv::GetTrees_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::srv::GetTrees_Event & msg)
{
  return btcpp_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::srv::GetTrees_Event>()
{
  return "btcpp_ros2_interfaces::srv::GetTrees_Event";
}

template<>
inline const char * name<btcpp_ros2_interfaces::srv::GetTrees_Event>()
{
  return "btcpp_ros2_interfaces/srv/GetTrees_Event";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::srv::GetTrees_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Event>
  : std::integral_constant<bool, has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Request>::value && has_bounded_size<btcpp_ros2_interfaces::srv::GetTrees_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<btcpp_ros2_interfaces::srv::GetTrees_Event>
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
