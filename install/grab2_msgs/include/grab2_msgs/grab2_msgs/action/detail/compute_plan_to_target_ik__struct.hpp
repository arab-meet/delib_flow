// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grab2_msgs:action/ComputePlanToTargetIK.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Goal __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Goal __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_Goal_
{
  using Type = ComputePlanToTargetIK_Goal_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->interpolation_dt = 0.1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->interpolation_dt = 0.0;
    }
  }

  explicit ComputePlanToTargetIK_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->interpolation_dt = 0.1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->interpolation_dt = 0.0;
    }
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _interpolation_dt_type =
    double;
  _interpolation_dt_type interpolation_dt;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__interpolation_dt(
    const double & _arg)
  {
    this->interpolation_dt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Goal
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Goal
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_Goal_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->interpolation_dt != other.interpolation_dt) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_Goal_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_Goal =
  grab2_msgs::action::ComputePlanToTargetIK_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Result __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Result __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_Result_
{
  using Type = ComputePlanToTargetIK_Result_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  explicit ComputePlanToTargetIK_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init),
    error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  // field types and members
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESSFUL =
    0;
  static constexpr int32_t INVALID_GOAL =
    -1;
  static constexpr int32_t INVALID_JOINTS =
    -2;
  static constexpr int32_t OLD_HEADER_TIMESTAMP =
    -3;

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Result
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Result
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_Result_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_Result_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_Result =
  grab2_msgs::action::ComputePlanToTargetIK_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ComputePlanToTargetIK_Result_<ContainerAllocator>::SUCCESSFUL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ComputePlanToTargetIK_Result_<ContainerAllocator>::INVALID_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ComputePlanToTargetIK_Result_<ContainerAllocator>::INVALID_JOINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ComputePlanToTargetIK_Result_<ContainerAllocator>::OLD_HEADER_TIMESTAMP;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace grab2_msgs


#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Feedback __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_Feedback_
{
  using Type = ComputePlanToTargetIK_Feedback_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ComputePlanToTargetIK_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Feedback
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_Feedback
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_Feedback_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_Feedback =
  grab2_msgs::action::ComputePlanToTargetIK_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_SendGoal_Request_
{
  using Type = ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ComputePlanToTargetIK_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const grab2_msgs::action::ComputePlanToTargetIK_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_SendGoal_Request_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_SendGoal_Request =
  grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_SendGoal_Response_
{
  using Type = ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ComputePlanToTargetIK_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_SendGoal_Response_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_SendGoal_Response =
  grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

namespace grab2_msgs
{

namespace action
{

struct ComputePlanToTargetIK_SendGoal
{
  using Request = grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Request;
  using Response = grab2_msgs::action::ComputePlanToTargetIK_SendGoal_Response;
};

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_GetResult_Request_
{
  using Type = ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ComputePlanToTargetIK_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_GetResult_Request_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_GetResult_Request =
  grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_GetResult_Response_
{
  using Type = ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ComputePlanToTargetIK_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const grab2_msgs::action::ComputePlanToTargetIK_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_GetResult_Response_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_GetResult_Response =
  grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

namespace grab2_msgs
{

namespace action
{

struct ComputePlanToTargetIK_GetResult
{
  using Request = grab2_msgs::action::ComputePlanToTargetIK_GetResult_Request;
  using Response = grab2_msgs::action::ComputePlanToTargetIK_GetResult_Response;
};

}  // namespace action

}  // namespace grab2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage __declspec(deprecated)
#endif

namespace grab2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePlanToTargetIK_FeedbackMessage_
{
  using Type = ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>;

  explicit ComputePlanToTargetIK_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ComputePlanToTargetIK_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const grab2_msgs::action::ComputePlanToTargetIK_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage
    std::shared_ptr<grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanToTargetIK_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanToTargetIK_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanToTargetIK_FeedbackMessage_

// alias to use template instance with default allocator
using ComputePlanToTargetIK_FeedbackMessage =
  grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grab2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace grab2_msgs
{

namespace action
{

struct ComputePlanToTargetIK
{
  /// The goal message defined in the action definition.
  using Goal = grab2_msgs::action::ComputePlanToTargetIK_Goal;
  /// The result message defined in the action definition.
  using Result = grab2_msgs::action::ComputePlanToTargetIK_Result;
  /// The feedback message defined in the action definition.
  using Feedback = grab2_msgs::action::ComputePlanToTargetIK_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = grab2_msgs::action::ComputePlanToTargetIK_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = grab2_msgs::action::ComputePlanToTargetIK_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = grab2_msgs::action::ComputePlanToTargetIK_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ComputePlanToTargetIK ComputePlanToTargetIK;

}  // namespace action

}  // namespace grab2_msgs

#endif  // GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_HPP_
