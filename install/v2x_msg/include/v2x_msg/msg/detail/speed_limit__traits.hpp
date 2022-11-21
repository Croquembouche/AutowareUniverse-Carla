// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_

#include "v2x_msg/msg/detail/speed_limit__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SpeedLimit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SpeedLimit & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SpeedLimit>()
{
  return "v2x_msg::msg::SpeedLimit";
}

template<>
inline const char * name<v2x_msg::msg::SpeedLimit>()
{
  return "v2x_msg/msg/SpeedLimit";
}

template<>
struct has_fixed_size<v2x_msg::msg::SpeedLimit>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::SpeedLimit>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::SpeedLimit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_
