// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeLL24B.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL24_B__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_LL24_B__TRAITS_HPP_

#include "v2x_msg/msg/detail/node_ll24_b__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NodeLL24B & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::NodeLL24B & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::NodeLL24B>()
{
  return "v2x_msg::msg::NodeLL24B";
}

template<>
inline const char * name<v2x_msg::msg::NodeLL24B>()
{
  return "v2x_msg/msg/NodeLL24B";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeLL24B>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeLL24B>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::NodeLL24B>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL24_B__TRAITS_HPP_
