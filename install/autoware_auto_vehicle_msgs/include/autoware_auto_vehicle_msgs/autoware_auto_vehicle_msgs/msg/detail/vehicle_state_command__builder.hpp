// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_state_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateCommand_horn
{
public:
  explicit Init_VehicleStateCommand_horn(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand horn(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_hand_brake
{
public:
  explicit Init_VehicleStateCommand_hand_brake(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_horn hand_brake(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_hand_brake_type arg)
  {
    msg_.hand_brake = std::move(arg);
    return Init_VehicleStateCommand_horn(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_mode
{
public:
  explicit Init_VehicleStateCommand_mode(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_hand_brake mode(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VehicleStateCommand_hand_brake(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_gear
{
public:
  explicit Init_VehicleStateCommand_gear(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_mode gear(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleStateCommand_mode(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_wiper
{
public:
  explicit Init_VehicleStateCommand_wiper(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_gear wiper(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_VehicleStateCommand_gear(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_headlight
{
public:
  explicit Init_VehicleStateCommand_headlight(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_wiper headlight(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_headlight_type arg)
  {
    msg_.headlight = std::move(arg);
    return Init_VehicleStateCommand_wiper(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_blinker
{
public:
  explicit Init_VehicleStateCommand_blinker(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStateCommand_headlight blinker(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_blinker_type arg)
  {
    msg_.blinker = std::move(arg);
    return Init_VehicleStateCommand_headlight(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

class Init_VehicleStateCommand_stamp
{
public:
  Init_VehicleStateCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateCommand_blinker stamp(::autoware_auto_vehicle_msgs::msg::VehicleStateCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleStateCommand_blinker(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VehicleStateCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VehicleStateCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__BUILDER_HPP_
