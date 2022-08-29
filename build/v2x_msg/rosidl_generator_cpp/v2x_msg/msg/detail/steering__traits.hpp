// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__STEERING__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__STEERING__TRAITS_HPP_

#include "v2x_msg/msg/detail/steering__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Steering & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate: ";
    value_to_yaml(msg.rate, out);
    out << "\n";
  }

  // member: wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel: ";
    value_to_yaml(msg.wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Steering & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Steering>()
{
  return "v2x_msg::msg::Steering";
}

template<>
inline const char * name<v2x_msg::msg::Steering>()
{
  return "v2x_msg/msg/Steering";
}

template<>
struct has_fixed_size<v2x_msg::msg::Steering>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::Steering>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::Steering>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__STEERING__TRAITS_HPP_
