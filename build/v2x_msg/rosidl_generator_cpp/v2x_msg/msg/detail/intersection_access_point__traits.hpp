// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionAccessPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__TRAITS_HPP_

#include "v2x_msg/msg/detail/intersection_access_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::IntersectionAccessPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane: ";
    value_to_yaml(msg.lane, out);
    out << "\n";
  }

  // member: approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approach: ";
    value_to_yaml(msg.approach, out);
    out << "\n";
  }

  // member: connection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection: ";
    value_to_yaml(msg.connection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::IntersectionAccessPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::IntersectionAccessPoint>()
{
  return "v2x_msg::msg::IntersectionAccessPoint";
}

template<>
inline const char * name<v2x_msg::msg::IntersectionAccessPoint>()
{
  return "v2x_msg/msg/IntersectionAccessPoint";
}

template<>
struct has_fixed_size<v2x_msg::msg::IntersectionAccessPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::IntersectionAccessPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::IntersectionAccessPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__TRAITS_HPP_
