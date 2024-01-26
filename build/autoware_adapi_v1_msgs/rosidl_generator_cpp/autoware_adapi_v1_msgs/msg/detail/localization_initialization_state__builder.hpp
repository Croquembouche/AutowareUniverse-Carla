// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/LocalizationInitializationState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/localization_initialization_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationInitializationState_state
{
public:
  explicit Init_LocalizationInitializationState_state(::autoware_adapi_v1_msgs::msg::LocalizationInitializationState & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::LocalizationInitializationState state(::autoware_adapi_v1_msgs::msg::LocalizationInitializationState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::LocalizationInitializationState msg_;
};

class Init_LocalizationInitializationState_stamp
{
public:
  Init_LocalizationInitializationState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationInitializationState_state stamp(::autoware_adapi_v1_msgs::msg::LocalizationInitializationState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LocalizationInitializationState_state(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::LocalizationInitializationState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::LocalizationInitializationState>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_LocalizationInitializationState_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__BUILDER_HPP_
