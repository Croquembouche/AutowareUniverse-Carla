// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AxleWeight.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__TRAITS_HPP_

#include "v2x_msg/msg/detail/axle_weight__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::AxleWeight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::AxleWeight & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::AxleWeight>()
{
  return "v2x_msg::msg::AxleWeight";
}

template<>
inline const char * name<v2x_msg::msg::AxleWeight>()
{
  return "v2x_msg/msg/AxleWeight";
}

template<>
struct has_fixed_size<v2x_msg::msg::AxleWeight>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::AxleWeight>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::AxleWeight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__TRAITS_HPP_
