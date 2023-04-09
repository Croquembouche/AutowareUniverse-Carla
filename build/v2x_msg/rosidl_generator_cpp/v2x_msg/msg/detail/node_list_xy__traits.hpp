// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/node_list_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "v2x_msg/msg/detail/node_xy__traits.hpp"
// Member 'computed'
#include "v2x_msg/msg/detail/computed_lane__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeListXY & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: computed
  {
    out << "computed: ";
    to_flow_style_yaml(msg.computed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeListXY & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: computed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computed:\n";
    to_block_style_yaml(msg.computed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeListXY & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::NodeListXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::NodeListXY & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::NodeListXY>()
{
  return "v2x_msg::msg::NodeListXY";
}

template<>
inline const char * name<v2x_msg::msg::NodeListXY>()
{
  return "v2x_msg/msg/NodeListXY";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeListXY>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeListXY>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::NodeListXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_
