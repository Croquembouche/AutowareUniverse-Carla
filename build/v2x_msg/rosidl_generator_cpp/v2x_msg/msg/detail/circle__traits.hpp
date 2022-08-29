// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Circle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CIRCLE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CIRCLE__TRAITS_HPP_

#include "v2x_msg/msg/detail/circle__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'center'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Circle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "units: ";
    value_to_yaml(msg.units, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Circle & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Circle>()
{
  return "v2x_msg::msg::Circle";
}

template<>
inline const char * name<v2x_msg::msg::Circle>()
{
  return "v2x_msg/msg/Circle";
}

template<>
struct has_fixed_size<v2x_msg::msg::Circle>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::Position3D>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Circle>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::Position3D>::value> {};

template<>
struct is_message<v2x_msg::msg::Circle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CIRCLE__TRAITS_HPP_
