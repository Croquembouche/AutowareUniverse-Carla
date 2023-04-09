// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_PREDICTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_PREDICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/path_prediction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPrediction & msg,
  std::ostream & out)
{
  out << "{";
  // member: radiusofcurve
  {
    out << "radiusofcurve: ";
    rosidl_generator_traits::value_to_yaml(msg.radiusofcurve, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: radiusofcurve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radiusofcurve: ";
    rosidl_generator_traits::value_to_yaml(msg.radiusofcurve, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPrediction & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::PathPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::PathPrediction & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::PathPrediction>()
{
  return "v2x_msg::msg::PathPrediction";
}

template<>
inline const char * name<v2x_msg::msg::PathPrediction>()
{
  return "v2x_msg/msg/PathPrediction";
}

template<>
struct has_fixed_size<v2x_msg::msg::PathPrediction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::PathPrediction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::PathPrediction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PATH_PREDICTION__TRAITS_HPP_
