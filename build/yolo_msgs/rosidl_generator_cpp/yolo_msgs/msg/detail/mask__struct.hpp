// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolo_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/mask.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__MASK__STRUCT_HPP_
#define YOLO_MSGS__MSG__DETAIL__MASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "yolo_msgs/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolo_msgs__msg__Mask __attribute__((deprecated))
#else
# define DEPRECATED__yolo_msgs__msg__Mask __declspec(deprecated)
#endif

namespace yolo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mask_
{
  using Type = Mask_<ContainerAllocator>;

  explicit Mask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0l;
      this->width = 0l;
    }
  }

  explicit Mask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0l;
      this->width = 0l;
    }
  }

  // field types and members
  using _height_type =
    int32_t;
  _height_type height;
  using _width_type =
    int32_t;
  _width_type width;
  using _data_type =
    std::vector<yolo_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolo_msgs::msg::Point2D_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<yolo_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolo_msgs::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolo_msgs::msg::Mask_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolo_msgs::msg::Mask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolo_msgs::msg::Mask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolo_msgs::msg::Mask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::msg::Mask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::msg::Mask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::msg::Mask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::msg::Mask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolo_msgs::msg::Mask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolo_msgs::msg::Mask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolo_msgs__msg__Mask
    std::shared_ptr<yolo_msgs::msg::Mask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolo_msgs__msg__Mask
    std::shared_ptr<yolo_msgs::msg::Mask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mask_ & other) const
  {
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mask_

// alias to use template instance with default allocator
using Mask =
  yolo_msgs::msg::Mask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__MASK__STRUCT_HPP_
