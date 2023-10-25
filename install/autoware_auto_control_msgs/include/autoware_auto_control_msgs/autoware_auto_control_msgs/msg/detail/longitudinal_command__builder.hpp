// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_control_msgs:msg/LongitudinalCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_control_msgs/msg/detail/longitudinal_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_LongitudinalCommand_jerk
{
public:
  explicit Init_LongitudinalCommand_jerk(::autoware_auto_control_msgs::msg::LongitudinalCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_control_msgs::msg::LongitudinalCommand jerk(::autoware_auto_control_msgs::msg::LongitudinalCommand::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::LongitudinalCommand msg_;
};

class Init_LongitudinalCommand_acceleration
{
public:
  explicit Init_LongitudinalCommand_acceleration(::autoware_auto_control_msgs::msg::LongitudinalCommand & msg)
  : msg_(msg)
  {}
  Init_LongitudinalCommand_jerk acceleration(::autoware_auto_control_msgs::msg::LongitudinalCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_LongitudinalCommand_jerk(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::LongitudinalCommand msg_;
};

class Init_LongitudinalCommand_speed
{
public:
  explicit Init_LongitudinalCommand_speed(::autoware_auto_control_msgs::msg::LongitudinalCommand & msg)
  : msg_(msg)
  {}
  Init_LongitudinalCommand_acceleration speed(::autoware_auto_control_msgs::msg::LongitudinalCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LongitudinalCommand_acceleration(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::LongitudinalCommand msg_;
};

class Init_LongitudinalCommand_stamp
{
public:
  Init_LongitudinalCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongitudinalCommand_speed stamp(::autoware_auto_control_msgs::msg::LongitudinalCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LongitudinalCommand_speed(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::LongitudinalCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_control_msgs::msg::LongitudinalCommand>()
{
  return autoware_auto_control_msgs::msg::builder::Init_LongitudinalCommand_stamp();
}

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__BUILDER_HPP_
