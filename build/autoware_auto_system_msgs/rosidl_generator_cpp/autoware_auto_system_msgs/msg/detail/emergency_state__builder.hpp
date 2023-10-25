// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/emergency_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyState_state
{
public:
  explicit Init_EmergencyState_state(::autoware_auto_system_msgs::msg::EmergencyState & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::EmergencyState state(::autoware_auto_system_msgs::msg::EmergencyState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::EmergencyState msg_;
};

class Init_EmergencyState_stamp
{
public:
  Init_EmergencyState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyState_state stamp(::autoware_auto_system_msgs::msg::EmergencyState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_EmergencyState_state(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::EmergencyState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::EmergencyState>()
{
  return autoware_auto_system_msgs::msg::builder::Init_EmergencyState_stamp();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__BUILDER_HPP_
