// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "v2x_msg/msg/detail/offset_system__traits.hpp"
// Member 'geometry'
#include "v2x_msg/msg/detail/geometric_projection__traits.hpp"
// Member 'oldregion'
#include "v2x_msg/msg/detail/valid_region__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Description & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: geometry
  {
    out << "geometry: ";
    to_flow_style_yaml(msg.geometry, out);
    out << ", ";
  }

  // member: oldregion
  {
    out << "oldregion: ";
    to_flow_style_yaml(msg.oldregion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Description & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: geometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry:\n";
    to_block_style_yaml(msg.geometry, out, indentation + 2);
  }

  // member: oldregion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oldregion:\n";
    to_block_style_yaml(msg.oldregion, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Description & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::Description & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::Description & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::Description>()
{
  return "v2x_msg::msg::Description";
}

template<>
inline const char * name<v2x_msg::msg::Description>()
{
  return "v2x_msg/msg/Description";
}

template<>
struct has_fixed_size<v2x_msg::msg::Description>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::GeometricProjection>::value && has_fixed_size<v2x_msg::msg::OffsetSystem>::value && has_fixed_size<v2x_msg::msg::ValidRegion>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Description>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::GeometricProjection>::value && has_bounded_size<v2x_msg::msg::OffsetSystem>::value && has_bounded_size<v2x_msg::msg::ValidRegion>::value> {};

template<>
struct is_message<v2x_msg::msg::Description>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_
