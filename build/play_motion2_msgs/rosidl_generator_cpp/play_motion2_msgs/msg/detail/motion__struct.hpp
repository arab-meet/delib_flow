// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/msg/motion.hpp"


#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__msg__Motion __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__msg__Motion __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motion_
{
  using Type = Motion_<ContainerAllocator>;

  explicit Motion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->name = "";
      this->usage = "";
      this->description = "";
    }
  }

  explicit Motion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    name(_alloc),
    usage(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->name = "";
      this->usage = "";
      this->description = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _usage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _usage_type usage;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _joints_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joints_type joints;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _times_from_start_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _times_from_start_type times_from_start;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__usage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->usage = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__joints(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__times_from_start(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->times_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::msg::Motion_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::msg::Motion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::msg::Motion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::msg::Motion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__msg__Motion
    std::shared_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__msg__Motion
    std::shared_ptr<play_motion2_msgs::msg::Motion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motion_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->usage != other.usage) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->joints != other.joints) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->times_from_start != other.times_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motion_

// alias to use template instance with default allocator
using Motion =
  play_motion2_msgs::msg::Motion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
