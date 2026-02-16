// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/srv/set_classes.hpp"


#ifndef YOLO_MSGS__SRV__DETAIL__SET_CLASSES__TRAITS_HPP_
#define YOLO_MSGS__SRV__DETAIL__SET_CLASSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo_msgs/srv/detail/set_classes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yolo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetClasses_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: classes
  {
    if (msg.classes.size() == 0) {
      out << "classes: []";
    } else {
      out << "classes: [";
      size_t pending_items = msg.classes.size();
      for (auto item : msg.classes) {
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
  const SetClasses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classes.size() == 0) {
      out << "classes: []\n";
    } else {
      out << "classes:\n";
      for (auto item : msg.classes) {
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

inline std::string to_yaml(const SetClasses_Request & msg, bool use_flow_style = false)
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

}  // namespace yolo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolo_msgs::srv::SetClasses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::srv::SetClasses_Request & msg)
{
  return yolo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::srv::SetClasses_Request>()
{
  return "yolo_msgs::srv::SetClasses_Request";
}

template<>
inline const char * name<yolo_msgs::srv::SetClasses_Request>()
{
  return "yolo_msgs/srv/SetClasses_Request";
}

template<>
struct has_fixed_size<yolo_msgs::srv::SetClasses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo_msgs::srv::SetClasses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo_msgs::srv::SetClasses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace yolo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetClasses_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetClasses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetClasses_Response & msg, bool use_flow_style = false)
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

}  // namespace yolo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolo_msgs::srv::SetClasses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::srv::SetClasses_Response & msg)
{
  return yolo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::srv::SetClasses_Response>()
{
  return "yolo_msgs::srv::SetClasses_Response";
}

template<>
inline const char * name<yolo_msgs::srv::SetClasses_Response>()
{
  return "yolo_msgs/srv/SetClasses_Response";
}

template<>
struct has_fixed_size<yolo_msgs::srv::SetClasses_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yolo_msgs::srv::SetClasses_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yolo_msgs::srv::SetClasses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace yolo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetClasses_Event & msg,
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
  const SetClasses_Event & msg,
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

inline std::string to_yaml(const SetClasses_Event & msg, bool use_flow_style = false)
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

}  // namespace yolo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yolo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolo_msgs::srv::SetClasses_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yolo_msgs::srv::SetClasses_Event & msg)
{
  return yolo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yolo_msgs::srv::SetClasses_Event>()
{
  return "yolo_msgs::srv::SetClasses_Event";
}

template<>
inline const char * name<yolo_msgs::srv::SetClasses_Event>()
{
  return "yolo_msgs/srv/SetClasses_Event";
}

template<>
struct has_fixed_size<yolo_msgs::srv::SetClasses_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo_msgs::srv::SetClasses_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<yolo_msgs::srv::SetClasses_Request>::value && has_bounded_size<yolo_msgs::srv::SetClasses_Response>::value> {};

template<>
struct is_message<yolo_msgs::srv::SetClasses_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolo_msgs::srv::SetClasses>()
{
  return "yolo_msgs::srv::SetClasses";
}

template<>
inline const char * name<yolo_msgs::srv::SetClasses>()
{
  return "yolo_msgs/srv/SetClasses";
}

template<>
struct has_fixed_size<yolo_msgs::srv::SetClasses>
  : std::integral_constant<
    bool,
    has_fixed_size<yolo_msgs::srv::SetClasses_Request>::value &&
    has_fixed_size<yolo_msgs::srv::SetClasses_Response>::value
  >
{
};

template<>
struct has_bounded_size<yolo_msgs::srv::SetClasses>
  : std::integral_constant<
    bool,
    has_bounded_size<yolo_msgs::srv::SetClasses_Request>::value &&
    has_bounded_size<yolo_msgs::srv::SetClasses_Response>::value
  >
{
};

template<>
struct is_service<yolo_msgs::srv::SetClasses>
  : std::true_type
{
};

template<>
struct is_service_request<yolo_msgs::srv::SetClasses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yolo_msgs::srv::SetClasses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YOLO_MSGS__SRV__DETAIL__SET_CLASSES__TRAITS_HPP_
