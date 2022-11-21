// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_

#include "v2x_msg/msg/detail/connecting_lane__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'maneuver'
#include "v2x_msg/msg/detail/allowed_maneuvers__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ConnectingLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneid: ";
    value_to_yaml(msg.laneid, out);
    out << "\n";
  }

  // member: maneuver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver:\n";
    to_yaml(msg.maneuver, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ConnectingLane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
