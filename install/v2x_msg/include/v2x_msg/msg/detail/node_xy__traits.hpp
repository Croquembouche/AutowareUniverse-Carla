// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_XY__TRAITS_HPP_

#include "v2x_msg/msg/detail/node_xy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'delta'
#include "v2x_msg/msg/detail/node_offset_point_xy__traits.hpp"
// Member 'attributes'
#include "v2x_msg/msg/detail/node_attribute_set_xy__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NodeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta:\n";
    to_yaml(msg.delta, out, indentation + 2);
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attributes:\n";
    to_yaml(msg.attributes, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::NodeXY & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
