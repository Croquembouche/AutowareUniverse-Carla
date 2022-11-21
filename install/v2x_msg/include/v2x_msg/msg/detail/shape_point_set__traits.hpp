// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/shape_point_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ShapePointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: anchor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor:\n";
    to_yaml(msg.anchor, out, indentation + 2);
  }

  // member: lanewidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanewidth: ";
    value_to_yaml(msg.lanewidth, out);
    out << "\n";
  }

  // member: directionality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directionality: ";
    value_to_yaml(msg.directionality, out);
    out << "\n";
  }

  // member: nodelist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodelist:\n";
    to_yaml(msg.nodelist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ShapePointSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ShapePointSet>()
{
  return "v2x_msg::msg::ShapePointSet";
}

template<>
inline const char * name<v2x_msg::msg::ShapePointSet>()
{
  return "v2x_msg/msg/ShapePointSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::ShapePointSet>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::NodeListXY>::value && has_fixed_size<v2x_msg::msg::Position3D>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::ShapePointSet>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::NodeListXY>::value && has_bounded_size<v2x_msg::msg::Position3D>::value> {};

template<>
struct is_message<v2x_msg::msg::ShapePointSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__TRAITS_HPP_
