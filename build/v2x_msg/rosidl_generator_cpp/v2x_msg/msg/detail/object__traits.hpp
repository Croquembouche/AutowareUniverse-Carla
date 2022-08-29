// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "v2x_msg/msg/detail/object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'datetime'
#include "v2x_msg/msg/detail/d_date_time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obdist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obdist: ";
    value_to_yaml(msg.obdist, out);
    out << "\n";
  }

  // member: obdirect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obdirect: ";
    value_to_yaml(msg.obdirect, out);
    out << "\n";
  }

  // member: datetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datetime:\n";
    to_yaml(msg.datetime, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Object & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Object>()
{
  return "v2x_msg::msg::Object";
}

template<>
inline const char * name<v2x_msg::msg::Object>()
{
  return "v2x_msg/msg/Object";
}

template<>
struct has_fixed_size<v2x_msg::msg::Object>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::DDateTime>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Object>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::DDateTime>::value> {};

template<>
struct is_message<v2x_msg::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__OBJECT__TRAITS_HPP_
