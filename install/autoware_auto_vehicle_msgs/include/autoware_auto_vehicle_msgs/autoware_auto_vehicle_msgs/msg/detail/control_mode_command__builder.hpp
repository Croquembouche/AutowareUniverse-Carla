// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/control_mode_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlModeCommand_mode
{
public:
  explicit Init_ControlModeCommand_mode(::autoware_auto_vehicle_msgs::msg::ControlModeCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::ControlModeCommand mode(::autoware_auto_vehicle_msgs::msg::ControlModeCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::ControlModeCommand msg_;
};

class Init_ControlModeCommand_stamp
{
public:
  Init_ControlModeCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlModeCommand_mode stamp(::autoware_auto_vehicle_msgs::msg::ControlModeCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlModeCommand_mode(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::ControlModeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::ControlModeCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_ControlModeCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__BUILDER_HPP_
