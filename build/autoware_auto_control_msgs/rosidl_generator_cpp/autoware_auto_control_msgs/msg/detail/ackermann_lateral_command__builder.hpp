// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_AckermannLateralCommand_steering_tire_rotation_rate
{
public:
  explicit Init_AckermannLateralCommand_steering_tire_rotation_rate(::autoware_auto_control_msgs::msg::AckermannLateralCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_control_msgs::msg::AckermannLateralCommand steering_tire_rotation_rate(::autoware_auto_control_msgs::msg::AckermannLateralCommand::_steering_tire_rotation_rate_type arg)
  {
    msg_.steering_tire_rotation_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannLateralCommand msg_;
};

class Init_AckermannLateralCommand_steering_tire_angle
{
public:
  explicit Init_AckermannLateralCommand_steering_tire_angle(::autoware_auto_control_msgs::msg::AckermannLateralCommand & msg)
  : msg_(msg)
  {}
  Init_AckermannLateralCommand_steering_tire_rotation_rate steering_tire_angle(::autoware_auto_control_msgs::msg::AckermannLateralCommand::_steering_tire_angle_type arg)
  {
    msg_.steering_tire_angle = std::move(arg);
    return Init_AckermannLateralCommand_steering_tire_rotation_rate(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannLateralCommand msg_;
};

class Init_AckermannLateralCommand_stamp
{
public:
  Init_AckermannLateralCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AckermannLateralCommand_steering_tire_angle stamp(::autoware_auto_control_msgs::msg::AckermannLateralCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AckermannLateralCommand_steering_tire_angle(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannLateralCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return autoware_auto_control_msgs::msg::builder::Init_AckermannLateralCommand_stamp();
}

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__BUILDER_HPP_
