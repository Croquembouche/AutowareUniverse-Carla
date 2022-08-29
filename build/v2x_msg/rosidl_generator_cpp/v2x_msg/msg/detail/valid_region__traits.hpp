// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ValidRegion.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VALID_REGION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VALID_REGION__TRAITS_HPP_

#include "v2x_msg/msg/detail/valid_region__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'area'
#include "v2x_msg/msg/detail/area__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ValidRegion & msg,
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

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_yaml(msg.area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ValidRegion & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ValidRegion>()
{
  return "v2x_msg::msg::ValidRegion";
}

template<>
inline const char * name<v2x_msg::msg::ValidRegion>()
{
  return "v2x_msg/msg/ValidRegion";
}

template<>
struct has_fixed_size<v2x_msg::msg::ValidRegion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::ValidRegion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::ValidRegion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VALID_REGION__TRAITS_HPP_
