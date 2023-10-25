// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/wheel_encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelEncoder_speed_mps
{
public:
  explicit Init_WheelEncoder_speed_mps(::autoware_auto_vehicle_msgs::msg::WheelEncoder & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::WheelEncoder speed_mps(::autoware_auto_vehicle_msgs::msg::WheelEncoder::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::WheelEncoder msg_;
};

class Init_WheelEncoder_header
{
public:
  Init_WheelEncoder_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoder_speed_mps header(::autoware_auto_vehicle_msgs::msg::WheelEncoder::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelEncoder_speed_mps(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::WheelEncoder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::WheelEncoder>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_WheelEncoder_header();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__BUILDER_HPP_
