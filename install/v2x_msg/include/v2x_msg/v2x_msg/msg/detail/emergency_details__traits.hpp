// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/emergency_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'events'
#include "v2x_msg/msg/detail/privileged_events__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyDetails & msg,
  std::ostream & out)
{
  out << "{";
  // member: notused
  {
    out << "notused: ";
    rosidl_generator_traits::value_to_yaml(msg.notused, out);
    out << ", ";
  }

  // member: sirenuse
  {
    out << "sirenuse: ";
    rosidl_generator_traits::value_to_yaml(msg.sirenuse, out);
    out << ", ";
  }

  // member: lightsuse
  {
    out << "lightsuse: ";
    rosidl_generator_traits::value_to_yaml(msg.lightsuse, out);
    out << ", ";
  }

  // member: multi
  {
    out << "multi: ";
    rosidl_generator_traits::value_to_yaml(msg.multi, out);
    out << ", ";
  }

  // member: events
  {
    out << "events: ";
    to_flow_style_yaml(msg.events, out);
    out << ", ";
  }

  // member: responsetype
  {
    out << "responsetype: ";
    rosidl_generator_traits::value_to_yaml(msg.responsetype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: notused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused: ";
    rosidl_generator_traits::value_to_yaml(msg.notused, out);
    out << "\n";
  }

  // member: sirenuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sirenuse: ";
    rosidl_generator_traits::value_to_yaml(msg.sirenuse, out);
    out << "\n";
  }

  // member: lightsuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lightsuse: ";
    rosidl_generator_traits::value_to_yaml(msg.lightsuse, out);
    out << "\n";
  }

  // member: multi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi: ";
    rosidl_generator_traits::value_to_yaml(msg.multi, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events:\n";
    to_block_style_yaml(msg.events, out, indentation + 2);
  }

  // member: responsetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responsetype: ";
    rosidl_generator_traits::value_to_yaml(msg.responsetype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyDetails & msg, bool use_flow_style = false)
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

}  // namespace v2x_msg

namespace rosidl_generator_traits
{

[[deprecated("use v2x_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_msg::msg::EmergencyDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::EmergencyDetails & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::EmergencyDetails>()
{
  return "v2x_msg::msg::EmergencyDetails";
}

template<>
inline const char * name<v2x_msg::msg::EmergencyDetails>()
{
  return "v2x_msg/msg/EmergencyDetails";
}

template<>
struct has_fixed_size<v2x_msg::msg::EmergencyDetails>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::PrivilegedEvents>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::EmergencyDetails>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::PrivilegedEvents>::value> {};

template<>
struct is_message<v2x_msg::msg::EmergencyDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
