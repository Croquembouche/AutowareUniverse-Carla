// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardStatus_diag_single_point_fault
{
public:
  explicit Init_HazardStatus_diag_single_point_fault(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::HazardStatus diag_single_point_fault(::autoware_auto_system_msgs::msg::HazardStatus::_diag_single_point_fault_type arg)
  {
    msg_.diag_single_point_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_diag_latent_fault
{
public:
  explicit Init_HazardStatus_diag_latent_fault(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  Init_HazardStatus_diag_single_point_fault diag_latent_fault(::autoware_auto_system_msgs::msg::HazardStatus::_diag_latent_fault_type arg)
  {
    msg_.diag_latent_fault = std::move(arg);
    return Init_HazardStatus_diag_single_point_fault(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_diag_safe_fault
{
public:
  explicit Init_HazardStatus_diag_safe_fault(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  Init_HazardStatus_diag_latent_fault diag_safe_fault(::autoware_auto_system_msgs::msg::HazardStatus::_diag_safe_fault_type arg)
  {
    msg_.diag_safe_fault = std::move(arg);
    return Init_HazardStatus_diag_latent_fault(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_diag_no_fault
{
public:
  explicit Init_HazardStatus_diag_no_fault(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  Init_HazardStatus_diag_safe_fault diag_no_fault(::autoware_auto_system_msgs::msg::HazardStatus::_diag_no_fault_type arg)
  {
    msg_.diag_no_fault = std::move(arg);
    return Init_HazardStatus_diag_safe_fault(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_emergency_holding
{
public:
  explicit Init_HazardStatus_emergency_holding(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  Init_HazardStatus_diag_no_fault emergency_holding(::autoware_auto_system_msgs::msg::HazardStatus::_emergency_holding_type arg)
  {
    msg_.emergency_holding = std::move(arg);
    return Init_HazardStatus_diag_no_fault(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_emergency
{
public:
  explicit Init_HazardStatus_emergency(::autoware_auto_system_msgs::msg::HazardStatus & msg)
  : msg_(msg)
  {}
  Init_HazardStatus_emergency_holding emergency(::autoware_auto_system_msgs::msg::HazardStatus::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return Init_HazardStatus_emergency_holding(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

class Init_HazardStatus_level
{
public:
  Init_HazardStatus_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardStatus_emergency level(::autoware_auto_system_msgs::msg::HazardStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_HazardStatus_emergency(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::HazardStatus>()
{
  return autoware_auto_system_msgs::msg::builder::Init_HazardStatus_level();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__BUILDER_HPP_
