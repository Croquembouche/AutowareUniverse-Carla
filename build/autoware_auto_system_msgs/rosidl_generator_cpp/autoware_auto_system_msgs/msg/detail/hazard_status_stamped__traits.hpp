// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_system_msgs/msg/detail/hazard_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'status'
#include "autoware_auto_system_msgs/msg/detail/hazard_status__traits.hpp"

namespace autoware_auto_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HazardStatusStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HazardStatusStamped & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HazardStatusStamped & msg, bool use_flow_style = false)
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
  const autoware_auto_system_msgs::msg::HazardStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_system_msgs::msg::HazardStatusStamped & msg)
{
  return autoware_auto_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::HazardStatusStamped>()
{
  return "autoware_auto_system_msgs::msg::HazardStatusStamped";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::HazardStatusStamped>()
{
  return "autoware_auto_system_msgs/msg/HazardStatusStamped";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::HazardStatusStamped>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::HazardStatusStamped>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::HazardStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_
