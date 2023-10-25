// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_AutonomyModeChange_Request_mode
{
public:
  Init_AutonomyModeChange_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request mode(::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>()
{
  return autoware_auto_vehicle_msgs::srv::builder::Init_AutonomyModeChange_Request_mode();
}

}  // namespace autoware_auto_vehicle_msgs


namespace autoware_auto_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_AutonomyModeChange_Response_empty
{
public:
  Init_AutonomyModeChange_Response_empty()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response empty(::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>()
{
  return autoware_auto_vehicle_msgs::srv::builder::Init_AutonomyModeChange_Response_empty();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__BUILDER_HPP_
