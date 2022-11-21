// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_

#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SpeedandHeadingandThrottleConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    value_to_yaml(msg.throttle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SpeedandHeadingandThrottleConfidence & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "v2x_msg::msg::SpeedandHeadingandThrottleConfidence";
}

template<>
inline const char * name<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "v2x_msg/msg/SpeedandHeadingandThrottleConfidence";
}

template<>
struct has_fixed_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
