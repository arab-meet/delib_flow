// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_HPP_
#define BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Request __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Request __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrees_Request_
{
  using Type = GetTrees_Request_<ContainerAllocator>;

  explicit GetTrees_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetTrees_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Request
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Request
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrees_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrees_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrees_Request_

// alias to use template instance with default allocator
using GetTrees_Request =
  btcpp_ros2_interfaces::srv::GetTrees_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace btcpp_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Response __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Response __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrees_Response_
{
  using Type = GetTrees_Response_<ContainerAllocator>;

  explicit GetTrees_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetTrees_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tree_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _tree_ids_type tree_ids;

  // setters for named parameter idiom
  Type & set__tree_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->tree_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Response
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__srv__GetTrees_Response
    std::shared_ptr<btcpp_ros2_interfaces::srv::GetTrees_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrees_Response_ & other) const
  {
    if (this->tree_ids != other.tree_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrees_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrees_Response_

// alias to use template instance with default allocator
using GetTrees_Response =
  btcpp_ros2_interfaces::srv::GetTrees_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace btcpp_ros2_interfaces
{

namespace srv
{

struct GetTrees
{
  using Request = btcpp_ros2_interfaces::srv::GetTrees_Request;
  using Response = btcpp_ros2_interfaces::srv::GetTrees_Response;
};

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__STRUCT_HPP_
