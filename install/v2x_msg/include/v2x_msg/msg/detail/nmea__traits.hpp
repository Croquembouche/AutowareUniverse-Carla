// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NMEA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NMEA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NMEA__TRAITS_HPP_

#include "v2x_msg/msg/detail/nmea__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NMEA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rev: ";
    value_to_yaml(msg.rev, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: wdcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wdcount: ";
    value_to_yaml(msg.wdcount, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload: ";
    value_to_yaml(msg.payload, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::NMEA & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::NMEA>()
{
  return "v2x_msg::msg::NMEA";
}

template<>
inline const char * name<v2x_msg::msg::NMEA>()
{
  return "v2x_msg/msg/NMEA";
}

template<>
struct has_fixed_size<v2x_msg::msg::NMEA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::NMEA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::NMEA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NMEA__TRAITS_HPP_
