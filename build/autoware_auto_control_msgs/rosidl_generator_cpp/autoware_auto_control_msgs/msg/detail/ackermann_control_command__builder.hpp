// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_control_msgs/msg/detail/ackermann_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_AckermannControlCommand_longitudinal
{
public:
  explicit Init_AckermannControlCommand_longitudinal(::autoware_auto_control_msgs::msg::AckermannControlCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_control_msgs::msg::AckermannControlCommand longitudinal(::autoware_auto_control_msgs::msg::AckermannControlCommand::_longitudinal_type arg)
  {
    msg_.longitudinal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannControlCommand msg_;
};

class Init_AckermannControlCommand_lateral
{
public:
  explicit Init_AckermannControlCommand_lateral(::autoware_auto_control_msgs::msg::AckermannControlCommand & msg)
  : msg_(msg)
  {}
  Init_AckermannControlCommand_longitudinal lateral(::autoware_auto_control_msgs::msg::AckermannControlCommand::_lateral_type arg)
  {
    msg_.lateral = std::move(arg);
    return Init_AckermannControlCommand_longitudinal(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannControlCommand msg_;
};

class Init_AckermannControlCommand_stamp
{
public:
  Init_AckermannControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AckermannControlCommand_lateral stamp(::autoware_auto_control_msgs::msg::AckermannControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AckermannControlCommand_lateral(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::AckermannControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_control_msgs::msg::AckermannControlCommand>()
{
  return autoware_auto_control_msgs::msg::builder::Init_AckermannControlCommand_stamp();
}

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__BUILDER_HPP_
