// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_control_msgs:msg/HighLevelControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_control_msgs/msg/detail/high_level_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_HighLevelControlCommand_curvature
{
public:
  explicit Init_HighLevelControlCommand_curvature(::autoware_auto_control_msgs::msg::HighLevelControlCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_control_msgs::msg::HighLevelControlCommand curvature(::autoware_auto_control_msgs::msg::HighLevelControlCommand::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::HighLevelControlCommand msg_;
};

class Init_HighLevelControlCommand_velocity_mps
{
public:
  explicit Init_HighLevelControlCommand_velocity_mps(::autoware_auto_control_msgs::msg::HighLevelControlCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelControlCommand_curvature velocity_mps(::autoware_auto_control_msgs::msg::HighLevelControlCommand::_velocity_mps_type arg)
  {
    msg_.velocity_mps = std::move(arg);
    return Init_HighLevelControlCommand_curvature(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::HighLevelControlCommand msg_;
};

class Init_HighLevelControlCommand_stamp
{
public:
  Init_HighLevelControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighLevelControlCommand_velocity_mps stamp(::autoware_auto_control_msgs::msg::HighLevelControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HighLevelControlCommand_velocity_mps(msg_);
  }

private:
  ::autoware_auto_control_msgs::msg::HighLevelControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_control_msgs::msg::HighLevelControlCommand>()
{
  return autoware_auto_control_msgs::msg::builder::Init_HighLevelControlCommand_stamp();
}

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__BUILDER_HPP_
