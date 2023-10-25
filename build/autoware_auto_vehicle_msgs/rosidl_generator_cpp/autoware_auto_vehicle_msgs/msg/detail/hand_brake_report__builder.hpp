// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HandBrakeReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/hand_brake_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HandBrakeReport_report
{
public:
  explicit Init_HandBrakeReport_report(::autoware_auto_vehicle_msgs::msg::HandBrakeReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HandBrakeReport report(::autoware_auto_vehicle_msgs::msg::HandBrakeReport::_report_type arg)
  {
    msg_.report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HandBrakeReport msg_;
};

class Init_HandBrakeReport_stamp
{
public:
  Init_HandBrakeReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandBrakeReport_report stamp(::autoware_auto_vehicle_msgs::msg::HandBrakeReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HandBrakeReport_report(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HandBrakeReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HandBrakeReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HandBrakeReport_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__BUILDER_HPP_
