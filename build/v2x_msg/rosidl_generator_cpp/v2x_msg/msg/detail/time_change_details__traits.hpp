// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_

#include "v2x_msg/msg/detail/time_change_details__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::TimeChangeDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: startime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startime: ";
    value_to_yaml(msg.startime, out);
    out << "\n";
  }

  // member: minendtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minendtime: ";
    value_to_yaml(msg.minendtime, out);
    out << "\n";
  }

  // member: maxendtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxendtime: ";
    value_to_yaml(msg.maxendtime, out);
    out << "\n";
  }

  // member: likelytime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "likelytime: ";
    value_to_yaml(msg.likelytime, out);
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

  // member: nexttime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nexttime: ";
    value_to_yaml(msg.nexttime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::TimeChangeDetails & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::TimeChangeDetails>()
{
  return "v2x_msg::msg::TimeChangeDetails";
}

template<>
inline const char * name<v2x_msg::msg::TimeChangeDetails>()
{
  return "v2x_msg/msg/TimeChangeDetails";
}

template<>
struct has_fixed_size<v2x_msg::msg::TimeChangeDetails>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::TimeChangeDetails>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::TimeChangeDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_
