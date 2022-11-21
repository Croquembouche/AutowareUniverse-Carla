// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__TRAITS_HPP_

#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PositionalAccuracy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: semimajor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semimajor: ";
    value_to_yaml(msg.semimajor, out);
    out << "\n";
  }

  // member: semiminor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semiminor: ";
    value_to_yaml(msg.semiminor, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PositionalAccuracy & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PositionalAccuracy>()
{
  return "v2x_msg::msg::PositionalAccuracy";
}

template<>
inline const char * name<v2x_msg::msg::PositionalAccuracy>()
{
  return "v2x_msg/msg/PositionalAccuracy";
}

template<>
struct has_fixed_size<v2x_msg::msg::PositionalAccuracy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::PositionalAccuracy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::PositionalAccuracy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__TRAITS_HPP_
