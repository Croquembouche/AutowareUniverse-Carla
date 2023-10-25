// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/RawControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/raw_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_RawControlCommand_rear_steer
{
public:
  explicit Init_RawControlCommand_rear_steer(::autoware_auto_vehicle_msgs::msg::RawControlCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand rear_steer(::autoware_auto_vehicle_msgs::msg::RawControlCommand::_rear_steer_type arg)
  {
    msg_.rear_steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand msg_;
};

class Init_RawControlCommand_front_steer
{
public:
  explicit Init_RawControlCommand_front_steer(::autoware_auto_vehicle_msgs::msg::RawControlCommand & msg)
  : msg_(msg)
  {}
  Init_RawControlCommand_rear_steer front_steer(::autoware_auto_vehicle_msgs::msg::RawControlCommand::_front_steer_type arg)
  {
    msg_.front_steer = std::move(arg);
    return Init_RawControlCommand_rear_steer(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand msg_;
};

class Init_RawControlCommand_brake
{
public:
  explicit Init_RawControlCommand_brake(::autoware_auto_vehicle_msgs::msg::RawControlCommand & msg)
  : msg_(msg)
  {}
  Init_RawControlCommand_front_steer brake(::autoware_auto_vehicle_msgs::msg::RawControlCommand::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_RawControlCommand_front_steer(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand msg_;
};

class Init_RawControlCommand_throttle
{
public:
  explicit Init_RawControlCommand_throttle(::autoware_auto_vehicle_msgs::msg::RawControlCommand & msg)
  : msg_(msg)
  {}
  Init_RawControlCommand_brake throttle(::autoware_auto_vehicle_msgs::msg::RawControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_RawControlCommand_brake(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand msg_;
};

class Init_RawControlCommand_stamp
{
public:
  Init_RawControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawControlCommand_throttle stamp(::autoware_auto_vehicle_msgs::msg::RawControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RawControlCommand_throttle(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::RawControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::RawControlCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_RawControlCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__BUILDER_HPP_
