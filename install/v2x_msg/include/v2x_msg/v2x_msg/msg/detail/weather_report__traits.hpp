// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/weather_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const WeatherReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: israining
  {
    out << "israining: ";
    rosidl_generator_traits::value_to_yaml(msg.israining, out);
    out << ", ";
  }

  // member: rainrate
  {
    out << "rainrate: ";
    rosidl_generator_traits::value_to_yaml(msg.rainrate, out);
    out << ", ";
  }

  // member: precipsituation
  {
    out << "precipsituation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipsituation, out);
    out << ", ";
  }

  // member: solarradiation
  {
    out << "solarradiation: ";
    rosidl_generator_traits::value_to_yaml(msg.solarradiation, out);
    out << ", ";
  }

  // member: friction
  {
    out << "friction: ";
    rosidl_generator_traits::value_to_yaml(msg.friction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WeatherReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: israining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "israining: ";
    rosidl_generator_traits::value_to_yaml(msg.israining, out);
    out << "\n";
  }

  // member: rainrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rainrate: ";
    rosidl_generator_traits::value_to_yaml(msg.rainrate, out);
    out << "\n";
  }

  // member: precipsituation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipsituation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipsituation, out);
    out << "\n";
  }

  // member: solarradiation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solarradiation: ";
    rosidl_generator_traits::value_to_yaml(msg.solarradiation, out);
    out << "\n";
  }

  // member: friction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction: ";
    rosidl_generator_traits::value_to_yaml(msg.friction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WeatherReport & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace v2x_msg

namespace rosidl_generator_traits
{

[[deprecated("use v2x_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_msg::msg::WeatherReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::WeatherReport & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
