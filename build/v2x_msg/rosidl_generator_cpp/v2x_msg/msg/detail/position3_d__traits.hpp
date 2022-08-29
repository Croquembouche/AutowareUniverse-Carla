// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION3_D__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__POSITION3_D__TRAITS_HPP_

#include "v2x_msg/msg/detail/position3_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Position3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    value_to_yaml(msg.elevation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Position3D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Position3D>()
{
  return "v2x_msg::msg::Position3D";
}

template<>
inline const char * name<v2x_msg::msg::Position3D>()
{
  return "v2x_msg/msg/Position3D";
}

template<>
struct has_fixed_size<v2x_msg::msg::Position3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::Position3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::Position3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__POSITION3_D__TRAITS_HPP_
