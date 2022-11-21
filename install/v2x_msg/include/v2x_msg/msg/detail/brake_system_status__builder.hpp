// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_

#include "v2x_msg/msg/detail/brake_system_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_BrakeSystemStatus_auxbrakes
{
public:
  explicit Init_BrakeSystemStatus_auxbrakes(::v2x_msg::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::BrakeSystemStatus auxbrakes(::v2x_msg::msg::BrakeSystemStatus::_auxbrakes_type arg)
  {
    msg_.auxbrakes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_brakeboost
{
public:
  explicit Init_BrakeSystemStatus_brakeboost(::v2x_msg::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_auxbrakes brakeboost(::v2x_msg::msg::BrakeSystemStatus::_brakeboost_type arg)
  {
    msg_.brakeboost = std::move(arg);
    return Init_BrakeSystemStatus_auxbrakes(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_scs
{
public:
  explicit Init_BrakeSystemStatus_scs(::v2x_msg::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_brakeboost scs(::v2x_msg::msg::BrakeSystemStatus::_scs_type arg)
  {
    msg_.scs = std::move(arg);
    return Init_BrakeSystemStatus_brakeboost(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_abs
{
public:
  explicit Init_BrakeSystemStatus_abs(::v2x_msg::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_scs abs(::v2x_msg::msg::BrakeSystemStatus::_abs_type arg)
  {
    msg_.abs = std::move(arg);
    return Init_BrakeSystemStatus_scs(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_traction
{
public:
  explicit Init_BrakeSystemStatus_traction(::v2x_msg::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_abs traction(::v2x_msg::msg::BrakeSystemStatus::_traction_type arg)
  {
    msg_.traction = std::move(arg);
    return Init_BrakeSystemStatus_abs(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_wheelbrakes
{
public:
  Init_BrakeSystemStatus_wheelbrakes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeSystemStatus_traction wheelbrakes(::v2x_msg::msg::BrakeSystemStatus::_wheelbrakes_type arg)
  {
    msg_.wheelbrakes = std::move(arg);
    return Init_BrakeSystemStatus_traction(msg_);
  }

private:
  ::v2x_msg::msg::BrakeSystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::BrakeSystemStatus>()
{
  return v2x_msg::msg::builder::Init_BrakeSystemStatus_wheelbrakes();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_
