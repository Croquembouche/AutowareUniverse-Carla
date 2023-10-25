// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/WipersCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/wipers_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_WipersCommand_command
{
public:
  explicit Init_WipersCommand_command(::autoware_auto_vehicle_msgs::msg::WipersCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::WipersCommand command(::autoware_auto_vehicle_msgs::msg::WipersCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::WipersCommand msg_;
};

class Init_WipersCommand_stamp
{
public:
  Init_WipersCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WipersCommand_command stamp(::autoware_auto_vehicle_msgs::msg::WipersCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WipersCommand_command(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::WipersCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::WipersCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_WipersCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_COMMAND__BUILDER_HPP_
