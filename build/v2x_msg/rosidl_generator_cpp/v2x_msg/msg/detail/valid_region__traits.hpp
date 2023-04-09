// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ValidRegion.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VALID_REGION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VALID_REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/valid_region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'area'
#include "v2x_msg/msg/detail/area__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ValidRegion & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: extent
  {
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    to_flow_style_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValidRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << "\n";
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_block_style_yaml(msg.area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValidRegion & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ValidRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ValidRegion & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
