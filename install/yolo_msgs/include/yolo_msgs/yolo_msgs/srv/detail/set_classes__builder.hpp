// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/srv/set_classes.hpp"


#ifndef YOLO_MSGS__SRV__DETAIL__SET_CLASSES__BUILDER_HPP_
#define YOLO_MSGS__SRV__DETAIL__SET_CLASSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/srv/detail/set_classes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetClasses_Request_classes
{
public:
  Init_SetClasses_Request_classes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yolo_msgs::srv::SetClasses_Request classes(::yolo_msgs::srv::SetClasses_Request::_classes_type arg)
  {
    msg_.classes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::srv::SetClasses_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::srv::SetClasses_Request>()
{
  return yolo_msgs::srv::builder::Init_SetClasses_Request_classes();
}

}  // namespace yolo_msgs


namespace yolo_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::srv::SetClasses_Response>()
{
  return ::yolo_msgs::srv::SetClasses_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace yolo_msgs


namespace yolo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetClasses_Event_response
{
public:
  explicit Init_SetClasses_Event_response(::yolo_msgs::srv::SetClasses_Event & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::srv::SetClasses_Event response(::yolo_msgs::srv::SetClasses_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::srv::SetClasses_Event msg_;
};

class Init_SetClasses_Event_request
{
public:
  explicit Init_SetClasses_Event_request(::yolo_msgs::srv::SetClasses_Event & msg)
  : msg_(msg)
  {}
  Init_SetClasses_Event_response request(::yolo_msgs::srv::SetClasses_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetClasses_Event_response(msg_);
  }

private:
  ::yolo_msgs::srv::SetClasses_Event msg_;
};

class Init_SetClasses_Event_info
{
public:
  Init_SetClasses_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetClasses_Event_request info(::yolo_msgs::srv::SetClasses_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetClasses_Event_request(msg_);
  }

private:
  ::yolo_msgs::srv::SetClasses_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::srv::SetClasses_Event>()
{
  return yolo_msgs::srv::builder::Init_SetClasses_Event_info();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__SRV__DETAIL__SET_CLASSES__BUILDER_HPP_
