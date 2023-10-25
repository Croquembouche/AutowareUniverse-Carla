// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VelocityReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/velocity_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityReport_heading_rate
{
public:
  explicit Init_VelocityReport_heading_rate(::autoware_auto_vehicle_msgs::msg::VelocityReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VelocityReport heading_rate(::autoware_auto_vehicle_msgs::msg::VelocityReport::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VelocityReport msg_;
};

class Init_VelocityReport_lateral_velocity
{
public:
  explicit Init_VelocityReport_lateral_velocity(::autoware_auto_vehicle_msgs::msg::VelocityReport & msg)
  : msg_(msg)
  {}
  Init_VelocityReport_heading_rate lateral_velocity(::autoware_auto_vehicle_msgs::msg::VelocityReport::_lateral_velocity_type arg)
  {
    msg_.lateral_velocity = std::move(arg);
    return Init_VelocityReport_heading_rate(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VelocityReport msg_;
};

class Init_VelocityReport_longitudinal_velocity
{
public:
  explicit Init_VelocityReport_longitudinal_velocity(::autoware_auto_vehicle_msgs::msg::VelocityReport & msg)
  : msg_(msg)
  {}
  Init_VelocityReport_lateral_velocity longitudinal_velocity(::autoware_auto_vehicle_msgs::msg::VelocityReport::_longitudinal_velocity_type arg)
  {
    msg_.longitudinal_velocity = std::move(arg);
    return Init_VelocityReport_lateral_velocity(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VelocityReport msg_;
};

class Init_VelocityReport_header
{
public:
  Init_VelocityReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityReport_longitudinal_velocity header(::autoware_auto_vehicle_msgs::msg::VelocityReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelocityReport_longitudinal_velocity(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VelocityReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VelocityReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VelocityReport_header();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__BUILDER_HPP_
