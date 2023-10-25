// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__traits.hpp"

namespace autoware_auto_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlDiagnostic & msg,
  std::ostream & out)
{
  out << "{";
  // member: diag_header
  {
    out << "diag_header: ";
    to_flow_style_yaml(msg.diag_header, out);
    out << ", ";
  }

  // member: new_trajectory
  {
    out << "new_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.new_trajectory, out);
    out << ", ";
  }

  // member: trajectory_source
  {
    out << "trajectory_source: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_source, out);
    out << ", ";
  }

  // member: pose_source
  {
    out << "pose_source: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_source, out);
    out << ", ";
  }

  // member: lateral_error_m
  {
    out << "lateral_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_m, out);
    out << ", ";
  }

  // member: longitudinal_error_m
  {
    out << "longitudinal_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_m, out);
    out << ", ";
  }

  // member: velocity_error_mps
  {
    out << "velocity_error_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_error_mps, out);
    out << ", ";
  }

  // member: acceleration_error_mps2
  {
    out << "acceleration_error_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_error_mps2, out);
    out << ", ";
  }

  // member: yaw_error_rad
  {
    out << "yaw_error_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error_rad, out);
    out << ", ";
  }

  // member: yaw_rate_error_rps
  {
    out << "yaw_rate_error_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_error_rps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlDiagnostic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: diag_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_header:\n";
    to_block_style_yaml(msg.diag_header, out, indentation + 2);
  }

  // member: new_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_trajectory: ";
    rosidl_generator_traits::value_to_yaml(msg.new_trajectory, out);
    out << "\n";
  }

  // member: trajectory_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_source: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_source, out);
    out << "\n";
  }

  // member: pose_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_source: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_source, out);
    out << "\n";
  }

  // member: lateral_error_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_m, out);
    out << "\n";
  }

  // member: longitudinal_error_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_m, out);
    out << "\n";
  }

  // member: velocity_error_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_error_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_error_mps, out);
    out << "\n";
  }

  // member: acceleration_error_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_error_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_error_mps2, out);
    out << "\n";
  }

  // member: yaw_error_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error_rad, out);
    out << "\n";
  }

  // member: yaw_rate_error_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_error_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_error_rps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlDiagnostic & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_system_msgs::msg::ControlDiagnostic & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_system_msgs::msg::ControlDiagnostic & msg)
{
  return autoware_auto_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::ControlDiagnostic>()
{
  return "autoware_auto_system_msgs::msg::ControlDiagnostic";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::ControlDiagnostic>()
{
  return "autoware_auto_system_msgs/msg/ControlDiagnostic";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::DiagnosticHeader>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_
