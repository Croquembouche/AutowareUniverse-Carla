// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__TRAITS_HPP_

#include "v2x_msg/msg/detail/geometric_projection__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'circle'
#include "v2x_msg/msg/detail/circle__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::GeometricProjection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent: ";
    value_to_yaml(msg.extent, out);
    out << "\n";
  }

  // member: lanewidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanewidth: ";
    value_to_yaml(msg.lanewidth, out);
    out << "\n";
  }

  // member: circle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle:\n";
    to_yaml(msg.circle, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::GeometricProjection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::GeometricProjection>()
{
  return "v2x_msg::msg::GeometricProjection";
}

template<>
inline const char * name<v2x_msg::msg::GeometricProjection>()
{
  return "v2x_msg/msg/GeometricProjection";
}

template<>
struct has_fixed_size<v2x_msg::msg::GeometricProjection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::GeometricProjection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::GeometricProjection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__TRAITS_HPP_
