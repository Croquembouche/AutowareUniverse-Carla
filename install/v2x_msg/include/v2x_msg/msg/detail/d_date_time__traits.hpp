// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_

#include "v2x_msg/msg/detail/d_date_time__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::DDateTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month: ";
    value_to_yaml(msg.month, out);
    out << "\n";
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    value_to_yaml(msg.day, out);
    out << "\n";
  }

  // member: hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hour: ";
    value_to_yaml(msg.hour, out);
    out << "\n";
  }

  // member: minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minute: ";
    value_to_yaml(msg.minute, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    value_to_yaml(msg.second, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    value_to_yaml(msg.offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::DDateTime & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::DDateTime>()
{
  return "v2x_msg::msg::DDateTime";
}

template<>
inline const char * name<v2x_msg::msg::DDateTime>()
{
  return "v2x_msg/msg/DDateTime";
}

template<>
struct has_fixed_size<v2x_msg::msg::DDateTime>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::DDateTime>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::DDateTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
