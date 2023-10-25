// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HazardLightsReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/hazard_lights_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardLightsReport_report
{
public:
  explicit Init_HazardLightsReport_report(::autoware_auto_vehicle_msgs::msg::HazardLightsReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::HazardLightsReport report(::autoware_auto_vehicle_msgs::msg::HazardLightsReport::_report_type arg)
  {
    msg_.report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HazardLightsReport msg_;
};

class Init_HazardLightsReport_stamp
{
public:
  Init_HazardLightsReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardLightsReport_report stamp(::autoware_auto_vehicle_msgs::msg::HazardLightsReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HazardLightsReport_report(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::HazardLightsReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::HazardLightsReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_HazardLightsReport_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__BUILDER_HPP_
