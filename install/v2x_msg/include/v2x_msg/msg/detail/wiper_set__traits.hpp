// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/WiperSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__WIPER_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/wiper_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::WiperSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: statusfront
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statusfront: ";
    value_to_yaml(msg.statusfront, out);
    out << "\n";
  }

  // member: ratefront
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ratefront: ";
    value_to_yaml(msg.ratefront, out);
    out << "\n";
  }

  // member: statusrear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statusrear: ";
    value_to_yaml(msg.statusrear, out);
    out << "\n";
  }

  // member: raterear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raterear: ";
    value_to_yaml(msg.raterear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::WiperSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::WiperSet>()
{
  return "v2x_msg::msg::WiperSet";
}

template<>
inline const char * name<v2x_msg::msg::WiperSet>()
{
  return "v2x_msg/msg/WiperSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::WiperSet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::WiperSet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::WiperSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
