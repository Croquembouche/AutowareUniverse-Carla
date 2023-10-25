// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ModifyTrajectory_Request_original_trajectory
{
public:
  Init_ModifyTrajectory_Request_original_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::srv::ModifyTrajectory_Request original_trajectory(::autoware_auto_planning_msgs::srv::ModifyTrajectory_Request::_original_trajectory_type arg)
  {
    msg_.original_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::srv::ModifyTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::srv::ModifyTrajectory_Request>()
{
  return autoware_auto_planning_msgs::srv::builder::Init_ModifyTrajectory_Request_original_trajectory();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ModifyTrajectory_Response_modified_trajectory
{
public:
  Init_ModifyTrajectory_Response_modified_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::srv::ModifyTrajectory_Response modified_trajectory(::autoware_auto_planning_msgs::srv::ModifyTrajectory_Response::_modified_trajectory_type arg)
  {
    msg_.modified_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::srv::ModifyTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::srv::ModifyTrajectory_Response>()
{
  return autoware_auto_planning_msgs::srv::builder::Init_ModifyTrajectory_Response_modified_trajectory();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__BUILDER_HPP_
