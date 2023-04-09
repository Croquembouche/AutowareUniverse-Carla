// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/node_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'delta'
#include "v2x_msg/msg/detail/node_offset_point_xy__traits.hpp"
// Member 'attributes'
#include "v2x_msg/msg/detail/node_attribute_set_xy__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: delta
  {
    out << "delta: ";
    to_flow_style_yaml(msg.delta, out);
    out << ", ";
  }

  // member: attributes
  {
    out << "attributes: ";
    to_flow_style_yaml(msg.attributes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta:\n";
    to_block_style_yaml(msg.delta, out, indentation + 2);
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attributes:\n";
    to_block_style_yaml(msg.attributes, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeXY & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::NodeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::NodeXY & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::NodeXY>()
{
  return "v2x_msg::msg::NodeXY";
}

template<>
inline const char * name<v2x_msg::msg::NodeXY>()
{
  return "v2x_msg/msg/NodeXY";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeXY>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::NodeAttributeSetXY>::value && has_fixed_size<v2x_msg::msg::NodeOffsetPointXY>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeXY>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::NodeAttributeSetXY>::value && has_bounded_size<v2x_msg::msg::NodeOffsetPointXY>::value> {};

template<>
struct is_message<v2x_msg::msg::NodeXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_XY__TRAITS_HPP_
