// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HandBrakeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/hand_brake_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HandBrakeCommand_active
{
public:
  explicit Init_HandBrakeCommand_active(::autoware_auto_vehicle_msgs::msg::HandBrakeCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HandBrakeCommand active(::autoware_auto_vehicle_msgs::msg::HandBrakeCommand::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HandBrakeCommand msg_;
};

class Init_HandBrakeCommand_stamp
{
public:
  Init_HandBrakeCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandBrakeCommand_active stamp(::autoware_auto_vehicle_msgs::msg::HandBrakeCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HandBrakeCommand_active(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HandBrakeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HandBrakeCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HandBrakeCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_COMMAND__BUILDER_HPP_
