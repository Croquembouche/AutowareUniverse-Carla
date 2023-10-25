// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/TurnIndicatorsReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/turn_indicators_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnIndicatorsReport_report
{
public:
  explicit Init_TurnIndicatorsReport_report(::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport report(::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport::_report_type arg)
  {
    msg_.report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport msg_;
};

class Init_TurnIndicatorsReport_stamp
{
public:
  Init_TurnIndicatorsReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnIndicatorsReport_report stamp(::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TurnIndicatorsReport_report(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::TurnIndicatorsReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_TurnIndicatorsReport_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__BUILDER_HPP_
