// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__TRAITS_HPP_

#include "v2x_msg/msg/detail/node_offset_point_ll__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'nodell1'
#include "v2x_msg/msg/detail/node_ll24_b__traits.hpp"
// Member 'nodell2'
#include "v2x_msg/msg/detail/node_ll28_b__traits.hpp"
// Member 'nodell3'
#include "v2x_msg/msg/detail/node_ll32_b__traits.hpp"
// Member 'nodell4'
#include "v2x_msg/msg/detail/node_ll36_b__traits.hpp"
// Member 'nodell5'
#include "v2x_msg/msg/detail/node_ll44_b__traits.hpp"
// Member 'nodell6'
#include "v2x_msg/msg/detail/node_ll48_b__traits.hpp"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NodeOffsetPointLL & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodell1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell1:\n";
    to_yaml(msg.nodell1, out, indentation + 2);
  }

  // member: nodell2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell2:\n";
    to_yaml(msg.nodell2, out, indentation + 2);
  }

  // member: nodell3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell3:\n";
    to_yaml(msg.nodell3, out, indentation + 2);
  }

  // member: nodell4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell4:\n";
    to_yaml(msg.nodell4, out, indentation + 2);
  }

  // member: nodell5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell5:\n";
    to_yaml(msg.nodell5, out, indentation + 2);
  }

  // member: nodell6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodell6:\n";
    to_yaml(msg.nodell6, out, indentation + 2);
  }

  // member: nodelatlon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodelatlon:\n";
    to_yaml(msg.nodelatlon, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::NodeOffsetPointLL & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::NodeOffsetPointLL>()
{
  return "v2x_msg::msg::NodeOffsetPointLL";
}

template<>
inline const char * name<v2x_msg::msg::NodeOffsetPointLL>()
{
  return "v2x_msg/msg/NodeOffsetPointLL";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeOffsetPointLL>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::NodeLL24B>::value && has_fixed_size<v2x_msg::msg::NodeLL28B>::value && has_fixed_size<v2x_msg::msg::NodeLL32B>::value && has_fixed_size<v2x_msg::msg::NodeLL36B>::value && has_fixed_size<v2x_msg::msg::NodeLL44B>::value && has_fixed_size<v2x_msg::msg::NodeLL48B>::value && has_fixed_size<v2x_msg::msg::Nodellmd64b>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeOffsetPointLL>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::NodeLL24B>::value && has_bounded_size<v2x_msg::msg::NodeLL28B>::value && has_bounded_size<v2x_msg::msg::NodeLL32B>::value && has_bounded_size<v2x_msg::msg::NodeLL36B>::value && has_bounded_size<v2x_msg::msg::NodeLL44B>::value && has_bounded_size<v2x_msg::msg::NodeLL48B>::value && has_bounded_size<v2x_msg::msg::Nodellmd64b>::value> {};

template<>
struct is_message<v2x_msg::msg::NodeOffsetPointLL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__TRAITS_HPP_
