// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/action/play_motion2.hpp"


#ifndef PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_HPP_
#define PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Goal __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Goal __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_Goal_
{
  using Type = PlayMotion2_Goal_<ContainerAllocator>;

  explicit PlayMotion2_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_name = "";
      this->skip_planning = false;
    }
  }

  explicit PlayMotion2_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_name = "";
      this->skip_planning = false;
    }
  }

  // field types and members
  using _motion_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_name_type motion_name;
  using _skip_planning_type =
    bool;
  _skip_planning_type skip_planning;

  // setters for named parameter idiom
  Type & set__motion_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion_name = _arg;
    return *this;
  }
  Type & set__skip_planning(
    const bool & _arg)
  {
    this->skip_planning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Goal
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Goal
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_Goal_ & other) const
  {
    if (this->motion_name != other.motion_name) {
      return false;
    }
    if (this->skip_planning != other.skip_planning) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_Goal_

// alias to use template instance with default allocator
using PlayMotion2_Goal =
  play_motion2_msgs::action::PlayMotion2_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Result __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Result __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_Result_
{
  using Type = PlayMotion2_Result_<ContainerAllocator>;

  explicit PlayMotion2_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit PlayMotion2_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Result
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Result
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_Result_

// alias to use template instance with default allocator
using PlayMotion2_Result =
  play_motion2_msgs::action::PlayMotion2_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'current_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_Feedback __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_Feedback_
{
  using Type = PlayMotion2_Feedback_<ContainerAllocator>;

  explicit PlayMotion2_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_time(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _current_time_type current_time;

  // setters for named parameter idiom
  Type & set__current_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->current_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Feedback
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_Feedback
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_Feedback_ & other) const
  {
    if (this->current_time != other.current_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_Feedback_

// alias to use template instance with default allocator
using PlayMotion2_Feedback =
  play_motion2_msgs::action::PlayMotion2_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "play_motion2_msgs/action/detail/play_motion2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Request __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_SendGoal_Request_
{
  using Type = PlayMotion2_SendGoal_Request_<ContainerAllocator>;

  explicit PlayMotion2_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const play_motion2_msgs::action::PlayMotion2_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Request
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Request
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_SendGoal_Request_

// alias to use template instance with default allocator
using PlayMotion2_SendGoal_Request =
  play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Response __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_SendGoal_Response_
{
  using Type = PlayMotion2_SendGoal_Response_<ContainerAllocator>;

  explicit PlayMotion2_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PlayMotion2_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Response
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Response
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_SendGoal_Response_

// alias to use template instance with default allocator
using PlayMotion2_SendGoal_Response =
  play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Event __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_SendGoal_Event_
{
  using Type = PlayMotion2_SendGoal_Event_<ContainerAllocator>;

  explicit PlayMotion2_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Event
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_SendGoal_Event
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_SendGoal_Event_

// alias to use template instance with default allocator
using PlayMotion2_SendGoal_Event =
  play_motion2_msgs::action::PlayMotion2_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs

namespace play_motion2_msgs
{

namespace action
{

struct PlayMotion2_SendGoal
{
  using Request = play_motion2_msgs::action::PlayMotion2_SendGoal_Request;
  using Response = play_motion2_msgs::action::PlayMotion2_SendGoal_Response;
  using Event = play_motion2_msgs::action::PlayMotion2_SendGoal_Event;
};

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Request __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_GetResult_Request_
{
  using Type = PlayMotion2_GetResult_Request_<ContainerAllocator>;

  explicit PlayMotion2_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Request
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Request
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_GetResult_Request_

// alias to use template instance with default allocator
using PlayMotion2_GetResult_Request =
  play_motion2_msgs::action::PlayMotion2_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Response __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_GetResult_Response_
{
  using Type = PlayMotion2_GetResult_Response_<ContainerAllocator>;

  explicit PlayMotion2_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PlayMotion2_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const play_motion2_msgs::action::PlayMotion2_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Response
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Response
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_GetResult_Response_

// alias to use template instance with default allocator
using PlayMotion2_GetResult_Response =
  play_motion2_msgs::action::PlayMotion2_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Event __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_GetResult_Event_
{
  using Type = PlayMotion2_GetResult_Event_<ContainerAllocator>;

  explicit PlayMotion2_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<play_motion2_msgs::action::PlayMotion2_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Event
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_GetResult_Event
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_GetResult_Event_

// alias to use template instance with default allocator
using PlayMotion2_GetResult_Event =
  play_motion2_msgs::action::PlayMotion2_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs

namespace play_motion2_msgs
{

namespace action
{

struct PlayMotion2_GetResult
{
  using Request = play_motion2_msgs::action::PlayMotion2_GetResult_Request;
  using Response = play_motion2_msgs::action::PlayMotion2_GetResult_Response;
  using Event = play_motion2_msgs::action::PlayMotion2_GetResult_Event;
};

}  // namespace action

}  // namespace play_motion2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__play_motion2_msgs__action__PlayMotion2_FeedbackMessage __declspec(deprecated)
#endif

namespace play_motion2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayMotion2_FeedbackMessage_
{
  using Type = PlayMotion2_FeedbackMessage_<ContainerAllocator>;

  explicit PlayMotion2_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PlayMotion2_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const play_motion2_msgs::action::PlayMotion2_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_FeedbackMessage
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__play_motion2_msgs__action__PlayMotion2_FeedbackMessage
    std::shared_ptr<play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMotion2_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMotion2_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMotion2_FeedbackMessage_

// alias to use template instance with default allocator
using PlayMotion2_FeedbackMessage =
  play_motion2_msgs::action::PlayMotion2_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace play_motion2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace play_motion2_msgs
{

namespace action
{

struct PlayMotion2
{
  /// The goal message defined in the action definition.
  using Goal = play_motion2_msgs::action::PlayMotion2_Goal;
  /// The result message defined in the action definition.
  using Result = play_motion2_msgs::action::PlayMotion2_Result;
  /// The feedback message defined in the action definition.
  using Feedback = play_motion2_msgs::action::PlayMotion2_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = play_motion2_msgs::action::PlayMotion2_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = play_motion2_msgs::action::PlayMotion2_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = play_motion2_msgs::action::PlayMotion2_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PlayMotion2 PlayMotion2;

}  // namespace action

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_HPP_
