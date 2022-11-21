// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_

#include "v2x_msg/msg/detail/privileged_events__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PrivilegedEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: notused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused: ";
    value_to_yaml(msg.notused, out);
    out << "\n";
  }

  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    value_to_yaml(msg.event, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PrivilegedEvents & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PrivilegedEvents>()
{
  return "v2x_msg::msg::PrivilegedEvents";
}

template<>
inline const char * name<v2x_msg::msg::PrivilegedEvents>()
{
  return "v2x_msg/msg/PrivilegedEvents";
}

template<>
struct has_fixed_size<v2x_msg::msg::PrivilegedEvents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::PrivilegedEvents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::PrivilegedEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_
