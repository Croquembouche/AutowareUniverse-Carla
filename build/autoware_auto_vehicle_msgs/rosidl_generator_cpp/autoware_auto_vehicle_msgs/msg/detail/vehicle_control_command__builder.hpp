// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControlCommand_rear_wheel_angle_rad
{
public:
  explicit Init_VehicleControlCommand_rear_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand rear_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand::_rear_wheel_angle_rad_type arg)
  {
    msg_.rear_wheel_angle_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_front_wheel_angle_rad
{
public:
  explicit Init_VehicleControlCommand_front_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_rear_wheel_angle_rad front_wheel_angle_rad(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand::_front_wheel_angle_rad_type arg)
  {
    msg_.front_wheel_angle_rad = std::move(arg);
    return Init_VehicleControlCommand_rear_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_velocity_mps
{
public:
  explicit Init_VehicleControlCommand_velocity_mps(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_front_wheel_angle_rad velocity_mps(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand::_velocity_mps_type arg)
  {
    msg_.velocity_mps = std::move(arg);
    return Init_VehicleControlCommand_front_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_long_accel_mps2
{
public:
  explicit Init_VehicleControlCommand_long_accel_mps2(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_velocity_mps long_accel_mps2(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand::_long_accel_mps2_type arg)
  {
    msg_.long_accel_mps2 = std::move(arg);
    return Init_VehicleControlCommand_velocity_mps(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_stamp
{
public:
  Init_VehicleControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControlCommand_long_accel_mps2 stamp(::autoware_auto_vehicle_msgs::msg::VehicleControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleControlCommand_long_accel_mps2(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::VehicleControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::VehicleControlCommand>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_VehicleControlCommand_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_
