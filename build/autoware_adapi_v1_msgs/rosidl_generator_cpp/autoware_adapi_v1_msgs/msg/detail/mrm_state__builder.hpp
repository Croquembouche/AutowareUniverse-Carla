// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/MrmState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/mrm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_MrmState_behavior
{
public:
  explicit Init_MrmState_behavior(::autoware_adapi_v1_msgs::msg::MrmState & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::MrmState behavior(::autoware_adapi_v1_msgs::msg::MrmState::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmState msg_;
};

class Init_MrmState_state
{
public:
  explicit Init_MrmState_state(::autoware_adapi_v1_msgs::msg::MrmState & msg)
  : msg_(msg)
  {}
  Init_MrmState_behavior state(::autoware_adapi_v1_msgs::msg::MrmState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MrmState_behavior(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmState msg_;
};

class Init_MrmState_stamp
{
public:
  Init_MrmState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrmState_state stamp(::autoware_adapi_v1_msgs::msg::MrmState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MrmState_state(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::MrmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::MrmState>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_MrmState_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__BUILDER_HPP_
