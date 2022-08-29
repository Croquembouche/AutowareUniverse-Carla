// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_

#include "v2x_msg/msg/detail/emergency_details__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'events'
#include "v2x_msg/msg/detail/privileged_events__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::EmergencyDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: notused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused: ";
    value_to_yaml(msg.notused, out);
    out << "\n";
  }

  // member: sirenuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sirenuse: ";
    value_to_yaml(msg.sirenuse, out);
    out << "\n";
  }

  // member: lightsuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lightsuse: ";
    value_to_yaml(msg.lightsuse, out);
    out << "\n";
  }

  // member: multi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi: ";
    value_to_yaml(msg.multi, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events:\n";
    to_yaml(msg.events, out, indentation + 2);
  }

  // member: responsetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responsetype: ";
    value_to_yaml(msg.responsetype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::EmergencyDetails & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
