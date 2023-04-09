// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/connecting_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'maneuver'
#include "v2x_msg/msg/detail/allowed_maneuvers__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectingLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: laneid
  {
    out << "laneid: ";
    rosidl_generator_traits::value_to_yaml(msg.laneid, out);
    out << ", ";
  }

  // member: maneuver
  {
    out << "maneuver: ";
    to_flow_style_yaml(msg.maneuver, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectingLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneid: ";
    rosidl_generator_traits::value_to_yaml(msg.laneid, out);
    out << "\n";
  }

  // member: maneuver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver:\n";
    to_block_style_yaml(msg.maneuver, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectingLane & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ConnectingLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ConnectingLane & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::ConnectingLane>()
{
  return "v2x_msg::msg::ConnectingLane";
}

template<>
inline const char * name<v2x_msg::msg::ConnectingLane>()
{
  return "v2x_msg/msg/ConnectingLane";
}

template<>
struct has_fixed_size<v2x_msg::msg::ConnectingLane>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::AllowedManeuvers>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::ConnectingLane>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::AllowedManeuvers>::value> {};

template<>
struct is_message<v2x_msg::msg::ConnectingLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
