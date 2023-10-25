// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleOdometry_rear_wheel_angle_rad
{
public:
  explicit Init_VehicleOdometry_rear_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VehicleOdometry rear_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleOdometry::_rear_wheel_angle_rad_type arg)
  {
    msg_.rear_wheel_angle_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_front_wheel_angle_rad
{
public:
  explicit Init_VehicleOdometry_front_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_rear_wheel_angle_rad front_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleOdometry::_front_wheel_angle_rad_type arg)
  {
    msg_.front_wheel_angle_rad = std::move(arg);
    return Init_VehicleOdometry_rear_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity_mps
{
public:
  explicit Init_VehicleOdometry_velocity_mps(::autoware_auto_vehicle_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_front_wheel_angle_rad velocity_mps(::autoware_auto_vehicle_msgs::msg::VehicleOdometry::_velocity_mps_type arg)
  {
    msg_.velocity_mps = std::move(arg);
    return Init_VehicleOdometry_front_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_stamp
{
public:
  Init_VehicleOdometry_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleOdometry_velocity_mps stamp(::autoware_auto_vehicle_msgs::msg::VehicleOdometry::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleOdometry_velocity_mps(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VehicleOdometry>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VehicleOdometry_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
