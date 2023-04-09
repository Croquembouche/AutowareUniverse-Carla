// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/allowed_maneuvers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllowedManeuvers & msg,
  std::ostream & out)
{
  out << "{";
  // member: maneuverstraightallowed
  {
    out << "maneuverstraightallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverstraightallowed, out);
    out << ", ";
  }

  // member: maneuverleftallowed
  {
    out << "maneuverleftallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverleftallowed, out);
    out << ", ";
  }

  // member: maneuverrightallowed
  {
    out << "maneuverrightallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverrightallowed, out);
    out << ", ";
  }

  // member: maneuveruturnallowed
  {
    out << "maneuveruturnallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuveruturnallowed, out);
    out << ", ";
  }

  // member: maneuverleftturnonredallowed
  {
    out << "maneuverleftturnonredallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverleftturnonredallowed, out);
    out << ", ";
  }

  // member: maneverrightturnonredallowed
  {
    out << "maneverrightturnonredallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneverrightturnonredallowed, out);
    out << ", ";
  }

  // member: maneuverlanechangeallowed
  {
    out << "maneuverlanechangeallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverlanechangeallowed, out);
    out << ", ";
  }

  // member: maneuvernostoppingallowed
  {
    out << "maneuvernostoppingallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvernostoppingallowed, out);
    out << ", ";
  }

  // member: yieldallwaysrequired
  {
    out << "yieldallwaysrequired: ";
    rosidl_generator_traits::value_to_yaml(msg.yieldallwaysrequired, out);
    out << ", ";
  }

  // member: gowithhalt
  {
    out << "gowithhalt: ";
    rosidl_generator_traits::value_to_yaml(msg.gowithhalt, out);
    out << ", ";
  }

  // member: caution
  {
    out << "caution: ";
    rosidl_generator_traits::value_to_yaml(msg.caution, out);
    out << ", ";
  }

  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllowedManeuvers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maneuverstraightallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverstraightallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverstraightallowed, out);
    out << "\n";
  }

  // member: maneuverleftallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverleftallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverleftallowed, out);
    out << "\n";
  }

  // member: maneuverrightallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverrightallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverrightallowed, out);
    out << "\n";
  }

  // member: maneuveruturnallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuveruturnallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuveruturnallowed, out);
    out << "\n";
  }

  // member: maneuverleftturnonredallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverleftturnonredallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverleftturnonredallowed, out);
    out << "\n";
  }

  // member: maneverrightturnonredallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneverrightturnonredallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneverrightturnonredallowed, out);
    out << "\n";
  }

  // member: maneuverlanechangeallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverlanechangeallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuverlanechangeallowed, out);
    out << "\n";
  }

  // member: maneuvernostoppingallowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvernostoppingallowed: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvernostoppingallowed, out);
    out << "\n";
  }

  // member: yieldallwaysrequired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yieldallwaysrequired: ";
    rosidl_generator_traits::value_to_yaml(msg.yieldallwaysrequired, out);
    out << "\n";
  }

  // member: gowithhalt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gowithhalt: ";
    rosidl_generator_traits::value_to_yaml(msg.gowithhalt, out);
    out << "\n";
  }

  // member: caution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "caution: ";
    rosidl_generator_traits::value_to_yaml(msg.caution, out);
    out << "\n";
  }

  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllowedManeuvers & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::AllowedManeuvers & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::AllowedManeuvers & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
