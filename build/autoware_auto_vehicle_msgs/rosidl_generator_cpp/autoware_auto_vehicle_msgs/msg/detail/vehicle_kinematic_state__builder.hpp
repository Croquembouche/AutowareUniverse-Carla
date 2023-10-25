// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_kinematic_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleKinematicState_delta
{
public:
  explicit Init_VehicleKinematicState_delta(::autoware_auto_vehicle_msgs::msg::VehicleKinematicState & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VehicleKinematicState delta(::autoware_auto_vehicle_msgs::msg::VehicleKinematicState::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleKinematicState msg_;
};

class Init_VehicleKinematicState_state
{
public:
  explicit Init_VehicleKinematicState_state(::autoware_auto_vehicle_msgs::msg::VehicleKinematicState & msg)
  : msg_(msg)
  {}
  Init_VehicleKinematicState_delta state(::autoware_auto_vehicle_msgs::msg::VehicleKinematicState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_VehicleKinematicState_delta(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleKinematicState msg_;
};

class Init_VehicleKinematicState_header
{
public:
  Init_VehicleKinematicState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleKinematicState_state header(::autoware_auto_vehicle_msgs::msg::VehicleKinematicState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleKinematicState_state(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleKinematicState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VehicleKinematicState>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VehicleKinematicState_header();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__BUILDER_HPP_
