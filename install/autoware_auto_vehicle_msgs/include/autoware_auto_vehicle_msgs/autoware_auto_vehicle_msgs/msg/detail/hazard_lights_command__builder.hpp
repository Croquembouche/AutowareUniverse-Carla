// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HazardLightsCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/hazard_lights_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardLightsCommand_command
{
public:
  explicit Init_HazardLightsCommand_command(::autoware_auto_vehicle_msgs::msg::HazardLightsCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HazardLightsCommand command(::autoware_auto_vehicle_msgs::msg::HazardLightsCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HazardLightsCommand msg_;
};

class Init_HazardLightsCommand_stamp
{
public:
  Init_HazardLightsCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardLightsCommand_command stamp(::autoware_auto_vehicle_msgs::msg::HazardLightsCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HazardLightsCommand_command(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HazardLightsCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HazardLightsCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HazardLightsCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_COMMAND__BUILDER_HPP_
