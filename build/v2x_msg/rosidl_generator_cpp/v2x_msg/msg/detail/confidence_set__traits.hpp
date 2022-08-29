// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/confidence_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'accelconfidence'
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__traits.hpp"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accelconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelconfidence:\n";
    to_yaml(msg.accelconfidence, out, indentation + 2);
  }

  // member: speedconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedconfidence:\n";
    to_yaml(msg.speedconfidence, out, indentation + 2);
  }

  // member: timeconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeconfidence: ";
    value_to_yaml(msg.timeconfidence, out);
    out << "\n";
  }

  // member: posconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posconfidence:\n";
    to_yaml(msg.posconfidence, out, indentation + 2);
  }

  // member: steerconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steerconfidence: ";
    value_to_yaml(msg.steerconfidence, out);
    out << "\n";
  }

  // member: headingconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headingconfidence: ";
    value_to_yaml(msg.headingconfidence, out);
    out << "\n";
  }

  // member: throttleconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttleconfidence: ";
    value_to_yaml(msg.throttleconfidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ConfidenceSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ConfidenceSet>()
{
  return "v2x_msg::msg::ConfidenceSet";
}

template<>
inline const char * name<v2x_msg::msg::ConfidenceSet>()
{
  return "v2x_msg/msg/ConfidenceSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::ConfidenceSet>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::AccelSteerYawRateConfidence>::value && has_fixed_size<v2x_msg::msg::PositionConfidenceSet>::value && has_fixed_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::ConfidenceSet>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::AccelSteerYawRateConfidence>::value && has_bounded_size<v2x_msg::msg::PositionConfidenceSet>::value && has_bounded_size<v2x_msg::msg::SpeedandHeadingandThrottleConfidence>::value> {};

template<>
struct is_message<v2x_msg::msg::ConfidenceSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__TRAITS_HPP_
