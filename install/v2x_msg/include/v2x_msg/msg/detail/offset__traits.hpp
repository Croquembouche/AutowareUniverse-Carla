// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET__TRAITS_HPP_

#include "v2x_msg/msg/detail/offset__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'xy'
#include "v2x_msg/msg/detail/node_list_xy__traits.hpp"
// Member 'nodes'
#include "v2x_msg/msg/detail/node_ll__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Offset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy:\n";
    to_yaml(msg.xy, out, indentation + 2);
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
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Offset & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
