// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_

#include "v2x_msg/msg/detail/data_parameters__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::DataParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: processmethod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processmethod: ";
    value_to_yaml(msg.processmethod, out);
    out << "\n";
  }

  // member: processagency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processagency: ";
    value_to_yaml(msg.processagency, out);
    out << "\n";
  }

  // member: lastcheckeddate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lastcheckeddate: ";
    value_to_yaml(msg.lastcheckeddate, out);
    out << "\n";
  }

  // member: geoidused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geoidused: ";
    value_to_yaml(msg.geoidused, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::DataParameters & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::DataParameters>()
{
  return "v2x_msg::msg::DataParameters";
}

template<>
inline const char * name<v2x_msg::msg::DataParameters>()
{
  return "v2x_msg/msg/DataParameters";
}

template<>
struct has_fixed_size<v2x_msg::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::DataParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
