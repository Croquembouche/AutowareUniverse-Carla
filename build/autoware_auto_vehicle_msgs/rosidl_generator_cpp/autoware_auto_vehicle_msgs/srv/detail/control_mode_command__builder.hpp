// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/srv/detail/control_mode_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlModeCommand_Request_mode
{
public:
  explicit Init_ControlModeCommand_Request_mode(::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request mode(::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request msg_;
};

class Init_ControlModeCommand_Request_stamp
{
public:
  Init_ControlModeCommand_Request_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlModeCommand_Request_mode stamp(::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlModeCommand_Request_mode(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>()
{
  return autoware_auto_vehicle_msgs::srv::builder::Init_ControlModeCommand_Request_stamp();
}

}  // namespace autoware_auto_vehicle_msgs


namespace autoware_auto_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlModeCommand_Response_success
{
public:
  Init_ControlModeCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response success(::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>()
{
  return autoware_auto_vehicle_msgs::srv::builder::Init_ControlModeCommand_Response_success();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_
