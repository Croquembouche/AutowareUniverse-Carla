// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/ControlModeReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/control_mode_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlModeReport_mode
{
public:
  explicit Init_ControlModeReport_mode(::autoware_auto_vehicle_msgs::msg::ControlModeReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::ControlModeReport mode(::autoware_auto_vehicle_msgs::msg::ControlModeReport::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::ControlModeReport msg_;
};

class Init_ControlModeReport_stamp
{
public:
  Init_ControlModeReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlModeReport_mode stamp(::autoware_auto_vehicle_msgs::msg::ControlModeReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlModeReport_mode(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::ControlModeReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::ControlModeReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_ControlModeReport_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__BUILDER_HPP_
