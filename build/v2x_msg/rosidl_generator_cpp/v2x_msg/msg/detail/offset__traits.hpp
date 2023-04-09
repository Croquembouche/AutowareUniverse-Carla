// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/offset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'xy'
#include "v2x_msg/msg/detail/node_list_xy__traits.hpp"
// Member 'nodes'
#include "v2x_msg/msg/detail/node_ll__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Offset & msg,
  std::ostream & out)
{
  out << "{";
  // member: xy
  {
    out << "xy: ";
    to_flow_style_yaml(msg.xy, out);
    out << ", ";
  }

  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy:\n";
    to_block_style_yaml(msg.xy, out, indentation + 2);
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offset & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::Offset & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::Offset & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::Offset>()
{
  return "v2x_msg::msg::Offset";
}

template<>
inline const char * name<v2x_msg::msg::Offset>()
{
  return "v2x_msg/msg/Offset";
}

template<>
struct has_fixed_size<v2x_msg::msg::Offset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::Offset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::Offset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__OFFSET__TRAITS_HPP_
