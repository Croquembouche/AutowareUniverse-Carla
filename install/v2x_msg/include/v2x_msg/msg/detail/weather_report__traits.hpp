// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_

#include "v2x_msg/msg/detail/weather_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::WeatherReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: israining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "israining: ";
    value_to_yaml(msg.israining, out);
    out << "\n";
  }

  // member: rainrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rainrate: ";
    value_to_yaml(msg.rainrate, out);
    out << "\n";
  }

  // member: precipsituation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipsituation: ";
    value_to_yaml(msg.precipsituation, out);
    out << "\n";
  }

  // member: solarradiation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solarradiation: ";
    value_to_yaml(msg.solarradiation, out);
    out << "\n";
  }

  // member: friction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction: ";
    value_to_yaml(msg.friction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::WeatherReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::WeatherReport>()
{
  return "v2x_msg::msg::WeatherReport";
}

template<>
inline const char * name<v2x_msg::msg::WeatherReport>()
{
  return "v2x_msg/msg/WeatherReport";
}

template<>
struct has_fixed_size<v2x_msg::msg::WeatherReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::WeatherReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::WeatherReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
