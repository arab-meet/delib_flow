// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/action/play_motion2.hpp"


#ifndef PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__BUILDER_HPP_
#define PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "play_motion2_msgs/action/detail/play_motion2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_Goal_skip_planning
{
public:
  explicit Init_PlayMotion2_Goal_skip_planning(::play_motion2_msgs::action::PlayMotion2_Goal & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_Goal skip_planning(::play_motion2_msgs::action::PlayMotion2_Goal::_skip_planning_type arg)
  {
    msg_.skip_planning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_Goal msg_;
};

class Init_PlayMotion2_Goal_motion_name
{
public:
  Init_PlayMotion2_Goal_motion_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_Goal_skip_planning motion_name(::play_motion2_msgs::action::PlayMotion2_Goal::_motion_name_type arg)
  {
    msg_.motion_name = std::move(arg);
    return Init_PlayMotion2_Goal_skip_planning(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_Goal>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_Goal_motion_name();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_Result_error
{
public:
  explicit Init_PlayMotion2_Result_error(::play_motion2_msgs::action::PlayMotion2_Result & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_Result error(::play_motion2_msgs::action::PlayMotion2_Result::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_Result msg_;
};

class Init_PlayMotion2_Result_success
{
public:
  Init_PlayMotion2_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_Result_error success(::play_motion2_msgs::action::PlayMotion2_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlayMotion2_Result_error(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_Result>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_Result_success();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_Feedback_current_time
{
public:
  Init_PlayMotion2_Feedback_current_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::play_motion2_msgs::action::PlayMotion2_Feedback current_time(::play_motion2_msgs::action::PlayMotion2_Feedback::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_Feedback>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_Feedback_current_time();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_SendGoal_Request_goal
{
public:
  explicit Init_PlayMotion2_SendGoal_Request_goal(::play_motion2_msgs::action::PlayMotion2_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Request goal(::play_motion2_msgs::action::PlayMotion2_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Request msg_;
};

class Init_PlayMotion2_SendGoal_Request_goal_id
{
public:
  Init_PlayMotion2_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_SendGoal_Request_goal goal_id(::play_motion2_msgs::action::PlayMotion2_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlayMotion2_SendGoal_Request_goal(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_SendGoal_Request>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_SendGoal_Request_goal_id();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_SendGoal_Response_stamp
{
public:
  explicit Init_PlayMotion2_SendGoal_Response_stamp(::play_motion2_msgs::action::PlayMotion2_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Response stamp(::play_motion2_msgs::action::PlayMotion2_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Response msg_;
};

class Init_PlayMotion2_SendGoal_Response_accepted
{
public:
  Init_PlayMotion2_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_SendGoal_Response_stamp accepted(::play_motion2_msgs::action::PlayMotion2_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PlayMotion2_SendGoal_Response_stamp(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_SendGoal_Response>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_SendGoal_Response_accepted();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_SendGoal_Event_response
{
public:
  explicit Init_PlayMotion2_SendGoal_Event_response(::play_motion2_msgs::action::PlayMotion2_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Event response(::play_motion2_msgs::action::PlayMotion2_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Event msg_;
};

class Init_PlayMotion2_SendGoal_Event_request
{
public:
  explicit Init_PlayMotion2_SendGoal_Event_request(::play_motion2_msgs::action::PlayMotion2_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PlayMotion2_SendGoal_Event_response request(::play_motion2_msgs::action::PlayMotion2_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlayMotion2_SendGoal_Event_response(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Event msg_;
};

class Init_PlayMotion2_SendGoal_Event_info
{
public:
  Init_PlayMotion2_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_SendGoal_Event_request info(::play_motion2_msgs::action::PlayMotion2_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlayMotion2_SendGoal_Event_request(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_SendGoal_Event>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_SendGoal_Event_info();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_GetResult_Request_goal_id
{
public:
  Init_PlayMotion2_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Request goal_id(::play_motion2_msgs::action::PlayMotion2_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_GetResult_Request>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_GetResult_Request_goal_id();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_GetResult_Response_result
{
public:
  explicit Init_PlayMotion2_GetResult_Response_result(::play_motion2_msgs::action::PlayMotion2_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Response result(::play_motion2_msgs::action::PlayMotion2_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Response msg_;
};

class Init_PlayMotion2_GetResult_Response_status
{
public:
  Init_PlayMotion2_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_GetResult_Response_result status(::play_motion2_msgs::action::PlayMotion2_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlayMotion2_GetResult_Response_result(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_GetResult_Response>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_GetResult_Response_status();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_GetResult_Event_response
{
public:
  explicit Init_PlayMotion2_GetResult_Event_response(::play_motion2_msgs::action::PlayMotion2_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Event response(::play_motion2_msgs::action::PlayMotion2_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Event msg_;
};

class Init_PlayMotion2_GetResult_Event_request
{
public:
  explicit Init_PlayMotion2_GetResult_Event_request(::play_motion2_msgs::action::PlayMotion2_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PlayMotion2_GetResult_Event_response request(::play_motion2_msgs::action::PlayMotion2_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlayMotion2_GetResult_Event_response(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Event msg_;
};

class Init_PlayMotion2_GetResult_Event_info
{
public:
  Init_PlayMotion2_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_GetResult_Event_request info(::play_motion2_msgs::action::PlayMotion2_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlayMotion2_GetResult_Event_request(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_GetResult_Event>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_GetResult_Event_info();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace action
{

namespace builder
{

class Init_PlayMotion2_FeedbackMessage_feedback
{
public:
  explicit Init_PlayMotion2_FeedbackMessage_feedback(::play_motion2_msgs::action::PlayMotion2_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::action::PlayMotion2_FeedbackMessage feedback(::play_motion2_msgs::action::PlayMotion2_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_FeedbackMessage msg_;
};

class Init_PlayMotion2_FeedbackMessage_goal_id
{
public:
  Init_PlayMotion2_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMotion2_FeedbackMessage_feedback goal_id(::play_motion2_msgs::action::PlayMotion2_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlayMotion2_FeedbackMessage_feedback(msg_);
  }

private:
  ::play_motion2_msgs::action::PlayMotion2_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::action::PlayMotion2_FeedbackMessage>()
{
  return play_motion2_msgs::action::builder::Init_PlayMotion2_FeedbackMessage_goal_id();
}

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__BUILDER_HPP_
