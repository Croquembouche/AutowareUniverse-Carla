// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HeadlightsCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/headlights_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadlightsCommand_command
{
public:
  explicit Init_HeadlightsCommand_command(::autoware_auto_vehicle_msgs::msg::HeadlightsCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HeadlightsCommand command(::autoware_auto_vehicle_msgs::msg::HeadlightsCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HeadlightsCommand msg_;
};

class Init_HeadlightsCommand_stamp
{
public:
  Init_HeadlightsCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadlightsCommand_command stamp(::autoware_auto_vehicle_msgs::msg::HeadlightsCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HeadlightsCommand_command(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HeadlightsCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HeadlightsCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HeadlightsCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__BUILDER_HPP_
