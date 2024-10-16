// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/operation_mode_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_OperationModeState_is_remote_mode_available
{
public:
  explicit Init_OperationModeState_is_remote_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::OperationModeState is_remote_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_remote_mode_available_type arg)
  {
    msg_.is_remote_mode_available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_is_local_mode_available
{
public:
  explicit Init_OperationModeState_is_local_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_remote_mode_available is_local_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_local_mode_available_type arg)
  {
    msg_.is_local_mode_available = std::move(arg);
    return Init_OperationModeState_is_remote_mode_available(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_is_autonomous_mode_available
{
public:
  explicit Init_OperationModeState_is_autonomous_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_local_mode_available is_autonomous_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_autonomous_mode_available_type arg)
  {
    msg_.is_autonomous_mode_available = std::move(arg);
    return Init_OperationModeState_is_local_mode_available(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_is_stop_mode_available
{
public:
  explicit Init_OperationModeState_is_stop_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_autonomous_mode_available is_stop_mode_available(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_stop_mode_available_type arg)
  {
    msg_.is_stop_mode_available = std::move(arg);
    return Init_OperationModeState_is_autonomous_mode_available(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_is_in_transition
{
public:
  explicit Init_OperationModeState_is_in_transition(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_stop_mode_available is_in_transition(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_in_transition_type arg)
  {
    msg_.is_in_transition = std::move(arg);
    return Init_OperationModeState_is_stop_mode_available(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_is_autoware_control_enabled
{
public:
  explicit Init_OperationModeState_is_autoware_control_enabled(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_in_transition is_autoware_control_enabled(::autoware_adapi_v1_msgs::msg::OperationModeState::_is_autoware_control_enabled_type arg)
  {
    msg_.is_autoware_control_enabled = std::move(arg);
    return Init_OperationModeState_is_in_transition(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_mode
{
public:
  explicit Init_OperationModeState_mode(::autoware_adapi_v1_msgs::msg::OperationModeState & msg)
  : msg_(msg)
  {}
  Init_OperationModeState_is_autoware_control_enabled mode(::autoware_adapi_v1_msgs::msg::OperationModeState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_OperationModeState_is_autoware_control_enabled(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

class Init_OperationModeState_stamp
{
public:
  Init_OperationModeState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperationModeState_mode stamp(::autoware_adapi_v1_msgs::msg::OperationModeState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_OperationModeState_mode(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::OperationModeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::OperationModeState>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_OperationModeState_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__BUILDER_HPP_
