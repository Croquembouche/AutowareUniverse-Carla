// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ITISSpeedLimitcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__TRAITS_HPP_

#include "v2x_msg/msg/detail/itis_speed_limitcontent__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ITISSpeedLimitcontent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: itis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itis: ";
    value_to_yaml(msg.itis, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ITISSpeedLimitcontent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ITISSpeedLimitcontent>()
{
  return "v2x_msg::msg::ITISSpeedLimitcontent";
}

template<>
inline const char * name<v2x_msg::msg::ITISSpeedLimitcontent>()
{
  return "v2x_msg/msg/ITISSpeedLimitcontent";
}

template<>
struct has_fixed_size<v2x_msg::msg::ITISSpeedLimitcontent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::ITISSpeedLimitcontent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::ITISSpeedLimitcontent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMITCONTENT__TRAITS_HPP_
