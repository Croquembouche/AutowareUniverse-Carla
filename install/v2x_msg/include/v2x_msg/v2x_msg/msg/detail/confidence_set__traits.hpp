// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/confidence_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'accelconfidence'
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__traits.hpp"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfidenceSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: accelconfidence
  {
    out << "accelconfidence: ";
    to_flow_style_yaml(msg.accelconfidence, out);
    out << ", ";
  }

  // member: speedconfidence
  {
    out << "speedconfidence: ";
    to_flow_style_yaml(msg.speedconfidence, out);
    out << ", ";
  }

  // member: timeconfidence
  {
    out << "timeconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.timeconfidence, out);
    out << ", ";
  }

  // member: posconfidence
  {
    out << "posconfidence: ";
    to_flow_style_yaml(msg.posconfidence, out);
    out << ", ";
  }

  // member: steerconfidence
  {
    out << "steerconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.steerconfidence, out);
    out << ", ";
  }

  // member: headingconfidence
  {
    out << "headingconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.headingconfidence, out);
    out << ", ";
  }

  // member: throttleconfidence
  {
    out << "throttleconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.throttleconfidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accelconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelconfidence:\n";
    to_block_style_yaml(msg.accelconfidence, out, indentation + 2);
  }

  // member: speedconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedconfidence:\n";
    to_block_style_yaml(msg.speedconfidence, out, indentation + 2);
  }

  // member: timeconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.timeconfidence, out);
    out << "\n";
  }

  // member: posconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posconfidence:\n";
    to_block_style_yaml(msg.posconfidence, out, indentation + 2);
  }

  // member: steerconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steerconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.steerconfidence, out);
    out << "\n";
  }

  // member: headingconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headingconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.headingconfidence, out);
    out << "\n";
  }

  // member: throttleconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttleconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.throttleconfidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfidenceSet & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ConfidenceSet & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
