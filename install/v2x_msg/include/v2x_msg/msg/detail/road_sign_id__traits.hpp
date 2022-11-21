// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__TRAITS_HPP_

#include "v2x_msg/msg/detail/road_sign_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RoadSignID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: viewangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "viewangle: ";
    value_to_yaml(msg.viewangle, out);
    out << "\n";
  }

  // member: mutcdcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mutcdcode: ";
    value_to_yaml(msg.mutcdcode, out);
    out << "\n";
  }

  // member: msgcrc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcrc: ";
    value_to_yaml(msg.msgcrc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RoadSignID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RoadSignID>()
{
  return "v2x_msg::msg::RoadSignID";
}

template<>
inline const char * name<v2x_msg::msg::RoadSignID>()
{
  return "v2x_msg/msg/RoadSignID";
}

template<>
struct has_fixed_size<v2x_msg::msg::RoadSignID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RoadSignID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RoadSignID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__TRAITS_HPP_
