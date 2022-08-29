// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_

#include "v2x_msg/msg/detail/accel_sets__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'angle'
#include "v2x_msg/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'confidenceset'
#include "v2x_msg/msg/detail/confidence_set__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::AccelSets & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_yaml(msg.angle, out, indentation + 2);
  }

  // member: certaccelthres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "certaccelthres: ";
    value_to_yaml(msg.certaccelthres, out);
    out << "\n";
  }

  // member: yawratecon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawratecon: ";
    value_to_yaml(msg.yawratecon, out);
    out << "\n";
  }

  // member: hozaccelcon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hozaccelcon: ";
    value_to_yaml(msg.hozaccelcon, out);
    out << "\n";
  }

  // member: confidenceset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidenceset:\n";
    to_yaml(msg.confidenceset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::AccelSets & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::AccelSets>()
{
  return "v2x_msg::msg::AccelSets";
}

template<>
inline const char * name<v2x_msg::msg::AccelSets>()
{
  return "v2x_msg/msg/AccelSets";
}

template<>
struct has_fixed_size<v2x_msg::msg::AccelSets>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::AccelerationSet4Way>::value && has_fixed_size<v2x_msg::msg::ConfidenceSet>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::AccelSets>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::AccelerationSet4Way>::value && has_bounded_size<v2x_msg::msg::ConfidenceSet>::value> {};

template<>
struct is_message<v2x_msg::msg::AccelSets>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_
