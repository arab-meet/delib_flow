// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from play_motion2_msgs:srv/ListMotions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/srv/list_motions.hpp"


#ifndef PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__TRAITS_HPP_
#define PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "play_motion2_msgs/srv/detail/list_motions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace play_motion2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListMotions_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListMotions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListMotions_Request & msg, bool use_flow_style = false)
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

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::srv::ListMotions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::srv::ListMotions_Request & msg)
{
  return play_motion2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::srv::ListMotions_Request>()
{
  return "play_motion2_msgs::srv::ListMotions_Request";
}

template<>
inline const char * name<play_motion2_msgs::srv::ListMotions_Request>()
{
  return "play_motion2_msgs/srv/ListMotions_Request";
}

template<>
struct has_fixed_size<play_motion2_msgs::srv::ListMotions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<play_motion2_msgs::srv::ListMotions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<play_motion2_msgs::srv::ListMotions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace play_motion2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListMotions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_keys
  {
    if (msg.motion_keys.size() == 0) {
      out << "motion_keys: []";
    } else {
      out << "motion_keys: [";
      size_t pending_items = msg.motion_keys.size();
      for (auto item : msg.motion_keys) {
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
  const ListMotions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motion_keys.size() == 0) {
      out << "motion_keys: []\n";
    } else {
      out << "motion_keys:\n";
      for (auto item : msg.motion_keys) {
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

inline std::string to_yaml(const ListMotions_Response & msg, bool use_flow_style = false)
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

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::srv::ListMotions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::srv::ListMotions_Response & msg)
{
  return play_motion2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::srv::ListMotions_Response>()
{
  return "play_motion2_msgs::srv::ListMotions_Response";
}

template<>
inline const char * name<play_motion2_msgs::srv::ListMotions_Response>()
{
  return "play_motion2_msgs/srv/ListMotions_Response";
}

template<>
struct has_fixed_size<play_motion2_msgs::srv::ListMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<play_motion2_msgs::srv::ListMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<play_motion2_msgs::srv::ListMotions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace play_motion2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListMotions_Event & msg,
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
  const ListMotions_Event & msg,
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

inline std::string to_yaml(const ListMotions_Event & msg, bool use_flow_style = false)
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

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::srv::ListMotions_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::srv::ListMotions_Event & msg)
{
  return play_motion2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::srv::ListMotions_Event>()
{
  return "play_motion2_msgs::srv::ListMotions_Event";
}

template<>
inline const char * name<play_motion2_msgs::srv::ListMotions_Event>()
{
  return "play_motion2_msgs/srv/ListMotions_Event";
}

template<>
struct has_fixed_size<play_motion2_msgs::srv::ListMotions_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<play_motion2_msgs::srv::ListMotions_Event>
  : std::integral_constant<bool, has_bounded_size<play_motion2_msgs::srv::ListMotions_Request>::value && has_bounded_size<play_motion2_msgs::srv::ListMotions_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<play_motion2_msgs::srv::ListMotions_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<play_motion2_msgs::srv::ListMotions>()
{
  return "play_motion2_msgs::srv::ListMotions";
}

template<>
inline const char * name<play_motion2_msgs::srv::ListMotions>()
{
  return "play_motion2_msgs/srv/ListMotions";
}

template<>
struct has_fixed_size<play_motion2_msgs::srv::ListMotions>
  : std::integral_constant<
    bool,
    has_fixed_size<play_motion2_msgs::srv::ListMotions_Request>::value &&
    has_fixed_size<play_motion2_msgs::srv::ListMotions_Response>::value
  >
{
};

template<>
struct has_bounded_size<play_motion2_msgs::srv::ListMotions>
  : std::integral_constant<
    bool,
    has_bounded_size<play_motion2_msgs::srv::ListMotions_Request>::value &&
    has_bounded_size<play_motion2_msgs::srv::ListMotions_Response>::value
  >
{
};

template<>
struct is_service<play_motion2_msgs::srv::ListMotions>
  : std::true_type
{
};

template<>
struct is_service_request<play_motion2_msgs::srv::ListMotions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<play_motion2_msgs::srv::ListMotions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__TRAITS_HPP_
