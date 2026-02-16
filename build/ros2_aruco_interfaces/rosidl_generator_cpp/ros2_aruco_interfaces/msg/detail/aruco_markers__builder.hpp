// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_aruco_interfaces:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_aruco_interfaces/msg/aruco_markers.hpp"


#ifndef ROS2_ARUCO_INTERFACES__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
#define ROS2_ARUCO_INTERFACES__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_aruco_interfaces/msg/detail/aruco_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_aruco_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArucoMarkers_poses
{
public:
  explicit Init_ArucoMarkers_poses(::ros2_aruco_interfaces::msg::ArucoMarkers & msg)
  : msg_(msg)
  {}
  ::ros2_aruco_interfaces::msg::ArucoMarkers poses(::ros2_aruco_interfaces::msg::ArucoMarkers::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_aruco_interfaces::msg::ArucoMarkers msg_;
};

class Init_ArucoMarkers_marker_ids
{
public:
  explicit Init_ArucoMarkers_marker_ids(::ros2_aruco_interfaces::msg::ArucoMarkers & msg)
  : msg_(msg)
  {}
  Init_ArucoMarkers_poses marker_ids(::ros2_aruco_interfaces::msg::ArucoMarkers::_marker_ids_type arg)
  {
    msg_.marker_ids = std::move(arg);
    return Init_ArucoMarkers_poses(msg_);
  }

private:
  ::ros2_aruco_interfaces::msg::ArucoMarkers msg_;
};

class Init_ArucoMarkers_header
{
public:
  Init_ArucoMarkers_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoMarkers_marker_ids header(::ros2_aruco_interfaces::msg::ArucoMarkers::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArucoMarkers_marker_ids(msg_);
  }

private:
  ::ros2_aruco_interfaces::msg::ArucoMarkers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_aruco_interfaces::msg::ArucoMarkers>()
{
  return ros2_aruco_interfaces::msg::builder::Init_ArucoMarkers_header();
}

}  // namespace ros2_aruco_interfaces

#endif  // ROS2_ARUCO_INTERFACES__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
