// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AREA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__AREA__TRAITS_HPP_

#include "v2x_msg/msg/detail/area__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'shapepointset'
#include "v2x_msg/msg/detail/shape_point_set__traits.hpp"
// Member 'cirle'
#include "v2x_msg/msg/detail/circle__traits.hpp"
// Member 'regionpointset'
#include "v2x_msg/msg/detail/region_point_set__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shapepointset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shapepointset:\n";
    to_yaml(msg.shapepointset, out, indentation + 2);
  }

  // member: cirle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cirle:\n";
    to_yaml(msg.cirle, out, indentation + 2);
  }

  // member: regionpointset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regionpointset:\n";
    to_yaml(msg.regionpointset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Area & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Area>()
{
  return "v2x_msg::msg::Area";
}

template<>
inline const char * name<v2x_msg::msg::Area>()
{
  return "v2x_msg/msg/Area";
}

template<>
struct has_fixed_size<v2x_msg::msg::Area>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::Circle>::value && has_fixed_size<v2x_msg::msg::RegionPointSet>::value && has_fixed_size<v2x_msg::msg::ShapePointSet>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Area>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::Circle>::value && has_bounded_size<v2x_msg::msg::RegionPointSet>::value && has_bounded_size<v2x_msg::msg::ShapePointSet>::value> {};

template<>
struct is_message<v2x_msg::msg::Area>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__AREA__TRAITS_HPP_
