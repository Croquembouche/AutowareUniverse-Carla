// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/position_confidence_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PositionConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos: ";
    value_to_yaml(msg.pos, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    value_to_yaml(msg.elevation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PositionConfidenceSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PositionConfidenceSet>()
{
  return "v2x_msg::msg::PositionConfidenceSet";
}

template<>
inline const char * name<v2x_msg::msg::PositionConfidenceSet>()
{
  return "v2x_msg/msg/PositionConfidenceSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::PositionConfidenceSet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::PositionConfidenceSet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::PositionConfidenceSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
