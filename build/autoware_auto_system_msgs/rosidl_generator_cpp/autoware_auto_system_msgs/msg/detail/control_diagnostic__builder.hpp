// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlDiagnostic_yaw_rate_error_rps
{
public:
  explicit Init_ControlDiagnostic_yaw_rate_error_rps(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::ControlDiagnostic yaw_rate_error_rps(::autoware_auto_system_msgs::msg::ControlDiagnostic::_yaw_rate_error_rps_type arg)
  {
    msg_.yaw_rate_error_rps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_yaw_error_rad
{
public:
  explicit Init_ControlDiagnostic_yaw_error_rad(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_yaw_rate_error_rps yaw_error_rad(::autoware_auto_system_msgs::msg::ControlDiagnostic::_yaw_error_rad_type arg)
  {
    msg_.yaw_error_rad = std::move(arg);
    return Init_ControlDiagnostic_yaw_rate_error_rps(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_acceleration_error_mps2
{
public:
  explicit Init_ControlDiagnostic_acceleration_error_mps2(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_yaw_error_rad acceleration_error_mps2(::autoware_auto_system_msgs::msg::ControlDiagnostic::_acceleration_error_mps2_type arg)
  {
    msg_.acceleration_error_mps2 = std::move(arg);
    return Init_ControlDiagnostic_yaw_error_rad(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_velocity_error_mps
{
public:
  explicit Init_ControlDiagnostic_velocity_error_mps(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_acceleration_error_mps2 velocity_error_mps(::autoware_auto_system_msgs::msg::ControlDiagnostic::_velocity_error_mps_type arg)
  {
    msg_.velocity_error_mps = std::move(arg);
    return Init_ControlDiagnostic_acceleration_error_mps2(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_longitudinal_error_m
{
public:
  explicit Init_ControlDiagnostic_longitudinal_error_m(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_velocity_error_mps longitudinal_error_m(::autoware_auto_system_msgs::msg::ControlDiagnostic::_longitudinal_error_m_type arg)
  {
    msg_.longitudinal_error_m = std::move(arg);
    return Init_ControlDiagnostic_velocity_error_mps(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_lateral_error_m
{
public:
  explicit Init_ControlDiagnostic_lateral_error_m(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_longitudinal_error_m lateral_error_m(::autoware_auto_system_msgs::msg::ControlDiagnostic::_lateral_error_m_type arg)
  {
    msg_.lateral_error_m = std::move(arg);
    return Init_ControlDiagnostic_longitudinal_error_m(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_pose_source
{
public:
  explicit Init_ControlDiagnostic_pose_source(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_lateral_error_m pose_source(::autoware_auto_system_msgs::msg::ControlDiagnostic::_pose_source_type arg)
  {
    msg_.pose_source = std::move(arg);
    return Init_ControlDiagnostic_lateral_error_m(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_trajectory_source
{
public:
  explicit Init_ControlDiagnostic_trajectory_source(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_pose_source trajectory_source(::autoware_auto_system_msgs::msg::ControlDiagnostic::_trajectory_source_type arg)
  {
    msg_.trajectory_source = std::move(arg);
    return Init_ControlDiagnostic_pose_source(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_new_trajectory
{
public:
  explicit Init_ControlDiagnostic_new_trajectory(::autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
  : msg_(msg)
  {}
  Init_ControlDiagnostic_trajectory_source new_trajectory(::autoware_auto_system_msgs::msg::ControlDiagnostic::_new_trajectory_type arg)
  {
    msg_.new_trajectory = std::move(arg);
    return Init_ControlDiagnostic_trajectory_source(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

class Init_ControlDiagnostic_diag_header
{
public:
  Init_ControlDiagnostic_diag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlDiagnostic_new_trajectory diag_header(::autoware_auto_system_msgs::msg::ControlDiagnostic::_diag_header_type arg)
  {
    msg_.diag_header = std::move(arg);
    return Init_ControlDiagnostic_new_trajectory(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::ControlDiagnostic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::ControlDiagnostic>()
{
  return autoware_auto_system_msgs::msg::builder::Init_ControlDiagnostic_diag_header();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__BUILDER_HPP_
