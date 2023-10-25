// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_kinematic_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__traits.hpp"
// Member 'delta'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleKinematicState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: delta
  {
    out << "delta: ";
    to_flow_style_yaml(msg.delta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleKinematicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta:\n";
    to_block_style_yaml(msg.delta, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleKinematicState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_vehicle_msgs::msg::VehicleKinematicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_vehicle_msgs::msg::VehicleKinematicState & msg)
{
  return autoware_auto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>()
{
  return "autoware_auto_vehicle_msgs::msg::VehicleKinematicState";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>()
{
  return "autoware_auto_vehicle_msgs/msg/VehicleKinematicState";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::msg::TrajectoryPoint>::value && has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::msg::TrajectoryPoint>::value && has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_
