// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_

#include "v2x_msg/msg/detail/node_offset_point_xy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'nodexy1'
#include "v2x_msg/msg/detail/node_xy22b__traits.hpp"
// Member 'nodexy2'
#include "v2x_msg/msg/detail/node_xy24b__traits.hpp"
// Member 'nodexy3'
#include "v2x_msg/msg/detail/node_xy26b__traits.hpp"
// Member 'nodexy4'
#include "v2x_msg/msg/detail/node_xy28b__traits.hpp"
// Member 'nodexy5'
#include "v2x_msg/msg/detail/node_xy32b__traits.hpp"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NodeOffsetPointXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodexy1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodexy1:\n";
    to_yaml(msg.nodexy1, out, indentation + 2);
  }

  // member: nodexy2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodexy2:\n";
    to_yaml(msg.nodexy2, out, indentation + 2);
  }

  // member: nodexy3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodexy3:\n";
    to_yaml(msg.nodexy3, out, indentation + 2);
  }

  // member: nodexy4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodexy4:\n";
    to_yaml(msg.nodexy4, out, indentation + 2);
  }

  // member: nodexy5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodexy5:\n";
    to_yaml(msg.nodexy5, out, indentation + 2);
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

inline std::string to_yaml(const v2x_msg::msg::NodeOffsetPointXY & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::NodeOffsetPointXY>()
{
  return "v2x_msg::msg::NodeOffsetPointXY";
}

template<>
inline const char * name<v2x_msg::msg::NodeOffsetPointXY>()
{
  return "v2x_msg/msg/NodeOffsetPointXY";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::NodeXY22b>::value && has_fixed_size<v2x_msg::msg::NodeXY24b>::value && has_fixed_size<v2x_msg::msg::NodeXY26b>::value && has_fixed_size<v2x_msg::msg::NodeXY28b>::value && has_fixed_size<v2x_msg::msg::NodeXY32b>::value && has_fixed_size<v2x_msg::msg::Nodellmd64b>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::NodeXY22b>::value && has_bounded_size<v2x_msg::msg::NodeXY24b>::value && has_bounded_size<v2x_msg::msg::NodeXY26b>::value && has_bounded_size<v2x_msg::msg::NodeXY28b>::value && has_bounded_size<v2x_msg::msg::NodeXY32b>::value && has_bounded_size<v2x_msg::msg::Nodellmd64b>::value> {};

template<>
struct is_message<v2x_msg::msg::NodeOffsetPointXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
