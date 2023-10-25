// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:action/PlannerCostmap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_Goal_route
{
public:
  Init_PlannerCostmap_Goal_route()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Goal route(::autoware_auto_planning_msgs::action::PlannerCostmap_Goal::_route_type arg)
  {
    msg_.route = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_Goal>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_Goal_route();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_Result_costmap
{
public:
  Init_PlannerCostmap_Result_costmap()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Result costmap(::autoware_auto_planning_msgs::action::PlannerCostmap_Result::_costmap_type arg)
  {
    msg_.costmap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_Result>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_Result_costmap();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_Feedback_unused_variable
{
public:
  Init_PlannerCostmap_Feedback_unused_variable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Feedback unused_variable(::autoware_auto_planning_msgs::action::PlannerCostmap_Feedback::_unused_variable_type arg)
  {
    msg_.unused_variable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_Feedback_unused_variable();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_SendGoal_Request_goal
{
public:
  explicit Init_PlannerCostmap_SendGoal_Request_goal(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request goal(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request msg_;
};

class Init_PlannerCostmap_SendGoal_Request_goal_id
{
public:
  Init_PlannerCostmap_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerCostmap_SendGoal_Request_goal goal_id(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlannerCostmap_SendGoal_Request_goal(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_SendGoal_Request_goal_id();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_SendGoal_Response_stamp
{
public:
  explicit Init_PlannerCostmap_SendGoal_Response_stamp(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response stamp(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response msg_;
};

class Init_PlannerCostmap_SendGoal_Response_accepted
{
public:
  Init_PlannerCostmap_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerCostmap_SendGoal_Response_stamp accepted(::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PlannerCostmap_SendGoal_Response_stamp(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_SendGoal_Response_accepted();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_GetResult_Request_goal_id
{
public:
  Init_PlannerCostmap_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request goal_id(::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_GetResult_Request_goal_id();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_GetResult_Response_result
{
public:
  explicit Init_PlannerCostmap_GetResult_Response_result(::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response result(::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response msg_;
};

class Init_PlannerCostmap_GetResult_Response_status
{
public:
  Init_PlannerCostmap_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerCostmap_GetResult_Response_result status(::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlannerCostmap_GetResult_Response_result(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_GetResult_Response_status();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_PlannerCostmap_FeedbackMessage_feedback
{
public:
  explicit Init_PlannerCostmap_FeedbackMessage_feedback(::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage feedback(::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage msg_;
};

class Init_PlannerCostmap_FeedbackMessage_goal_id
{
public:
  Init_PlannerCostmap_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerCostmap_FeedbackMessage_feedback goal_id(::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlannerCostmap_FeedbackMessage_feedback(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>()
{
  return autoware_auto_planning_msgs::action::builder::Init_PlannerCostmap_FeedbackMessage_goal_id();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__BUILDER_HPP_
