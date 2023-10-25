// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_auto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AckermannLateralCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: steering_tire_angle
  {
    out << "steering_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_angle, out);
    out << ", ";
  }

  // member: steering_tire_rotation_rate
  {
    out << "steering_tire_rotation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_rotation_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AckermannLateralCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: steering_tire_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_angle, out);
    out << "\n";
  }

  // member: steering_tire_rotation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_tire_rotation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_rotation_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AckermannLateralCommand & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_control_msgs::msg::AckermannLateralCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_control_msgs::msg::AckermannLateralCommand & msg)
{
  return autoware_auto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return "autoware_auto_control_msgs::msg::AckermannLateralCommand";
}

template<>
inline const char * name<autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return "autoware_auto_control_msgs/msg/AckermannLateralCommand";
}

template<>
struct has_fixed_size<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_
