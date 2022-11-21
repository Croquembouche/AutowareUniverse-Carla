// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__TRAITS_HPP_

#include "v2x_msg/msg/detail/allowed_maneuvers__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::AllowedManeuvers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maneuverstraightallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverstraightallowed: ";
    value_to_yaml(msg.maneuverstraightallowed, out);
    out << "\n";
  }

  // member: maneuverleftallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverleftallowed: ";
    value_to_yaml(msg.maneuverleftallowed, out);
    out << "\n";
  }

  // member: maneuverrightallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverrightallowed: ";
    value_to_yaml(msg.maneuverrightallowed, out);
    out << "\n";
  }

  // member: maneuveruturnallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuveruturnallowed: ";
    value_to_yaml(msg.maneuveruturnallowed, out);
    out << "\n";
  }

  // member: maneuverleftturnonredallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverleftturnonredallowed: ";
    value_to_yaml(msg.maneuverleftturnonredallowed, out);
    out << "\n";
  }

  // member: maneverrightturnonredallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneverrightturnonredallowed: ";
    value_to_yaml(msg.maneverrightturnonredallowed, out);
    out << "\n";
  }

  // member: maneuverlanechangeallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverlanechangeallowed: ";
    value_to_yaml(msg.maneuverlanechangeallowed, out);
    out << "\n";
  }

  // member: maneuvernostoppingallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvernostoppingallowed: ";
    value_to_yaml(msg.maneuvernostoppingallowed, out);
    out << "\n";
  }

  // member: yieldallwaysrequired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yieldallwaysrequired: ";
    value_to_yaml(msg.yieldallwaysrequired, out);
    out << "\n";
  }

  // member: gowithhalt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gowithhalt: ";
    value_to_yaml(msg.gowithhalt, out);
    out << "\n";
  }

  // member: caution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "caution: ";
    value_to_yaml(msg.caution, out);
    out << "\n";
  }

  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    value_to_yaml(msg.reserved1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::AllowedManeuvers & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::AllowedManeuvers>()
{
  return "v2x_msg::msg::AllowedManeuvers";
}

template<>
inline const char * name<v2x_msg::msg::AllowedManeuvers>()
{
  return "v2x_msg/msg/AllowedManeuvers";
}

template<>
struct has_fixed_size<v2x_msg::msg::AllowedManeuvers>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::AllowedManeuvers>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::AllowedManeuvers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__TRAITS_HPP_
