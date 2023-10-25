// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HornCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/horn_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HornCommand_active
{
public:
  explicit Init_HornCommand_active(::autoware_auto_vehicle_msgs::msg::HornCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HornCommand active(::autoware_auto_vehicle_msgs::msg::HornCommand::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HornCommand msg_;
};

class Init_HornCommand_stamp
{
public:
  Init_HornCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HornCommand_active stamp(::autoware_auto_vehicle_msgs::msg::HornCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HornCommand_active(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HornCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HornCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HornCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__BUILDER_HPP_
