// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RTCMheader.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTC_MHEADER__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RTC_MHEADER__TRAITS_HPP_

#include "v2x_msg/msg/detail/rtc_mheader__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'offsetset'
#include "v2x_msg/msg/detail/antenna_offset_set__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RTCMheader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: offsetset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsetset:\n";
    to_yaml(msg.offsetset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RTCMheader & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RTCMheader>()
{
  return "v2x_msg::msg::RTCMheader";
}

template<>
inline const char * name<v2x_msg::msg::RTCMheader>()
{
  return "v2x_msg/msg/RTCMheader";
}

template<>
struct has_fixed_size<v2x_msg::msg::RTCMheader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RTCMheader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RTCMheader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__RTC_MHEADER__TRAITS_HPP_
