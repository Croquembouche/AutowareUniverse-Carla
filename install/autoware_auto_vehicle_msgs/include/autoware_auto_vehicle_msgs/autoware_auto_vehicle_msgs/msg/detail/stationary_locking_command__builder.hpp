// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/StationaryLockingCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/stationary_locking_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_StationaryLockingCommand_avoid_stationary_locking
{
public:
  explicit Init_StationaryLockingCommand_avoid_stationary_locking(::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand avoid_stationary_locking(::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand::_avoid_stationary_locking_type arg)
  {
    msg_.avoid_stationary_locking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand msg_;
};

class Init_StationaryLockingCommand_stamp
{
public:
  Init_StationaryLockingCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StationaryLockingCommand_avoid_stationary_locking stamp(::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_StationaryLockingCommand_avoid_stationary_locking(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::StationaryLockingCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_StationaryLockingCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__BUILDER_HPP_
