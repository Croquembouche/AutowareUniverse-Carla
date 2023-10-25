// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace autoware_auto_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: longitudinal_velocity_mps
  {
    out << "longitudinal_velocity_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity_mps, out);
    out << ", ";
  }

  // member: lateral_velocity_mps
  {
    out << "lateral_velocity_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_velocity_mps, out);
    out << ", ";
  }

  // member: heading_rate_rps
  {
    out << "heading_rate_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_rate_rps, out);
    out << ", ";
  }

  // member: is_final
  {
    out << "is_final: ";
    rosidl_generator_traits::value_to_yaml(msg.is_final, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: longitudinal_velocity_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity_mps, out);
    out << "\n";
  }

  // member: lateral_velocity_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_velocity_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_velocity_mps, out);
    out << "\n";
  }

  // member: heading_rate_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_rate_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_rate_rps, out);
    out << "\n";
  }

  // member: is_final
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_final: ";
    rosidl_generator_traits::value_to_yaml(msg.is_final, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPoint & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_planning_msgs::msg::PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_planning_msgs::msg::PathPoint & msg)
{
  return autoware_auto_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathPoint>()
{
  return "autoware_auto_planning_msgs::msg::PathPoint";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathPoint>()
{
  return "autoware_auto_planning_msgs/msg/PathPoint";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
