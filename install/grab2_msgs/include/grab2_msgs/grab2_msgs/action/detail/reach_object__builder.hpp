// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grab2_msgs:action/ReachObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__BUILDER_HPP_
#define GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grab2_msgs/action/detail/reach_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_Goal_target_tree
{
public:
  explicit Init_ReachObject_Goal_target_tree(::grab2_msgs::action::ReachObject_Goal & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_Goal target_tree(::grab2_msgs::action::ReachObject_Goal::_target_tree_type arg)
  {
    msg_.target_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_Goal msg_;
};

class Init_ReachObject_Goal_target_pose
{
public:
  Init_ReachObject_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_Goal_target_tree target_pose(::grab2_msgs::action::ReachObject_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_ReachObject_Goal_target_tree(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_Goal>()
{
  return grab2_msgs::action::builder::Init_ReachObject_Goal_target_pose();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_Result_error_message
{
public:
  explicit Init_ReachObject_Result_error_message(::grab2_msgs::action::ReachObject_Result & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_Result error_message(::grab2_msgs::action::ReachObject_Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_Result msg_;
};

class Init_ReachObject_Result_node_status
{
public:
  Init_ReachObject_Result_node_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_Result_error_message node_status(::grab2_msgs::action::ReachObject_Result::_node_status_type arg)
  {
    msg_.node_status = std::move(arg);
    return Init_ReachObject_Result_error_message(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_Result>()
{
  return grab2_msgs::action::builder::Init_ReachObject_Result_node_status();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_Feedback>()
{
  return ::grab2_msgs::action::ReachObject_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_SendGoal_Request_goal
{
public:
  explicit Init_ReachObject_SendGoal_Request_goal(::grab2_msgs::action::ReachObject_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_SendGoal_Request goal(::grab2_msgs::action::ReachObject_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_SendGoal_Request msg_;
};

class Init_ReachObject_SendGoal_Request_goal_id
{
public:
  Init_ReachObject_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_SendGoal_Request_goal goal_id(::grab2_msgs::action::ReachObject_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachObject_SendGoal_Request_goal(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_SendGoal_Request>()
{
  return grab2_msgs::action::builder::Init_ReachObject_SendGoal_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_SendGoal_Response_stamp
{
public:
  explicit Init_ReachObject_SendGoal_Response_stamp(::grab2_msgs::action::ReachObject_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_SendGoal_Response stamp(::grab2_msgs::action::ReachObject_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_SendGoal_Response msg_;
};

class Init_ReachObject_SendGoal_Response_accepted
{
public:
  Init_ReachObject_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_SendGoal_Response_stamp accepted(::grab2_msgs::action::ReachObject_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ReachObject_SendGoal_Response_stamp(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_SendGoal_Response>()
{
  return grab2_msgs::action::builder::Init_ReachObject_SendGoal_Response_accepted();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_GetResult_Request_goal_id
{
public:
  Init_ReachObject_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grab2_msgs::action::ReachObject_GetResult_Request goal_id(::grab2_msgs::action::ReachObject_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_GetResult_Request>()
{
  return grab2_msgs::action::builder::Init_ReachObject_GetResult_Request_goal_id();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_GetResult_Response_result
{
public:
  explicit Init_ReachObject_GetResult_Response_result(::grab2_msgs::action::ReachObject_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_GetResult_Response result(::grab2_msgs::action::ReachObject_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_GetResult_Response msg_;
};

class Init_ReachObject_GetResult_Response_status
{
public:
  Init_ReachObject_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_GetResult_Response_result status(::grab2_msgs::action::ReachObject_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReachObject_GetResult_Response_result(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_GetResult_Response>()
{
  return grab2_msgs::action::builder::Init_ReachObject_GetResult_Response_status();
}

}  // namespace grab2_msgs


namespace grab2_msgs
{

namespace action
{

namespace builder
{

class Init_ReachObject_FeedbackMessage_feedback
{
public:
  explicit Init_ReachObject_FeedbackMessage_feedback(::grab2_msgs::action::ReachObject_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::grab2_msgs::action::ReachObject_FeedbackMessage feedback(::grab2_msgs::action::ReachObject_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_FeedbackMessage msg_;
};

class Init_ReachObject_FeedbackMessage_goal_id
{
public:
  Init_ReachObject_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachObject_FeedbackMessage_feedback goal_id(::grab2_msgs::action::ReachObject_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachObject_FeedbackMessage_feedback(msg_);
  }

private:
  ::grab2_msgs::action::ReachObject_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab2_msgs::action::ReachObject_FeedbackMessage>()
{
  return grab2_msgs::action::builder::Init_ReachObject_FeedbackMessage_goal_id();
}

}  // namespace grab2_msgs

#endif  // GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__BUILDER_HPP_
