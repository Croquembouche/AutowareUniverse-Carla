// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/driving_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_DrivingCapability_remote_control
{
public:
  explicit Init_DrivingCapability_remote_control(::autoware_auto_system_msgs::msg::DrivingCapability & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::DrivingCapability remote_control(::autoware_auto_system_msgs::msg::DrivingCapability::_remote_control_type arg)
  {
    msg_.remote_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DrivingCapability msg_;
};

class Init_DrivingCapability_autonomous_driving
{
public:
  explicit Init_DrivingCapability_autonomous_driving(::autoware_auto_system_msgs::msg::DrivingCapability & msg)
  : msg_(msg)
  {}
  Init_DrivingCapability_remote_control autonomous_driving(::autoware_auto_system_msgs::msg::DrivingCapability::_autonomous_driving_type arg)
  {
    msg_.autonomous_driving = std::move(arg);
    return Init_DrivingCapability_remote_control(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DrivingCapability msg_;
};

class Init_DrivingCapability_stamp
{
public:
  Init_DrivingCapability_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingCapability_autonomous_driving stamp(::autoware_auto_system_msgs::msg::DrivingCapability::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DrivingCapability_autonomous_driving(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::DrivingCapability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return autoware_auto_system_msgs::msg::builder::Init_DrivingCapability_stamp();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__BUILDER_HPP_
