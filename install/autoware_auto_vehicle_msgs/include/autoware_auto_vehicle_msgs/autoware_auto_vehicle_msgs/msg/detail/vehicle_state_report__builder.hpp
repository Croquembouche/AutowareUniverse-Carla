// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_state_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateReport_horn
{
public:
  explicit Init_VehicleStateReport_horn(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport horn(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_hand_brake
{
public:
  explicit Init_VehicleStateReport_hand_brake(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_horn hand_brake(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_hand_brake_type arg)
  {
    msg_.hand_brake = std::move(arg);
    return Init_VehicleStateReport_horn(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_mode
{
public:
  explicit Init_VehicleStateReport_mode(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_hand_brake mode(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VehicleStateReport_hand_brake(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_gear
{
public:
  explicit Init_VehicleStateReport_gear(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_mode gear(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleStateReport_mode(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_wiper
{
public:
  explicit Init_VehicleStateReport_wiper(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_gear wiper(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_VehicleStateReport_gear(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_headlight
{
public:
  explicit Init_VehicleStateReport_headlight(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_wiper headlight(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_headlight_type arg)
  {
    msg_.headlight = std::move(arg);
    return Init_VehicleStateReport_wiper(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_blinker
{
public:
  explicit Init_VehicleStateReport_blinker(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_headlight blinker(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_blinker_type arg)
  {
    msg_.blinker = std::move(arg);
    return Init_VehicleStateReport_headlight(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_fuel
{
public:
  explicit Init_VehicleStateReport_fuel(::autoware_auto_vehicle_msgs::msg::VehicleStateReport & msg)
  : msg_(msg)
  {}
  Init_VehicleStateReport_blinker fuel(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_fuel_type arg)
  {
    msg_.fuel = std::move(arg);
    return Init_VehicleStateReport_blinker(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

class Init_VehicleStateReport_stamp
{
public:
  Init_VehicleStateReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateReport_fuel stamp(::autoware_auto_vehicle_msgs::msg::VehicleStateReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleStateReport_fuel(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleStateReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VehicleStateReport>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VehicleStateReport_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__BUILDER_HPP_
