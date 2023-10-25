// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/geometric_projection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'circle'
#include "v2x_msg/msg/detail/circle__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeometricProjection & msg,
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

  // member: lanewidth
  {
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
    out << ", ";
  }

  // member: circle
  {
    out << "circle: ";
    to_flow_style_yaml(msg.circle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeometricProjection & msg,
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

  // member: lanewidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
    out << "\n";
  }

  // member: circle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle:\n";
    to_block_style_yaml(msg.circle, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeometricProjection & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::GeometricProjection & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::GeometricProjection & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
