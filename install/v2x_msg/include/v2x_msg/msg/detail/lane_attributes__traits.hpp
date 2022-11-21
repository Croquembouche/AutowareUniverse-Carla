// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_

#include "v2x_msg/msg/detail/lane_attributes__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::LaneAttributes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: directionaluse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directionaluse: ";
    value_to_yaml(msg.directionaluse, out);
    out << "\n";
  }

  // member: sharedwith
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sharedwith: ";
    value_to_yaml(msg.sharedwith, out);
    out << "\n";
  }

  // member: lanetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanetype: ";
    value_to_yaml(msg.lanetype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::LaneAttributes & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::LaneAttributes>()
{
  return "v2x_msg::msg::LaneAttributes";
}

template<>
inline const char * name<v2x_msg::msg::LaneAttributes>()
{
  return "v2x_msg/msg/LaneAttributes";
}

template<>
struct has_fixed_size<v2x_msg::msg::LaneAttributes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::LaneAttributes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::LaneAttributes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
