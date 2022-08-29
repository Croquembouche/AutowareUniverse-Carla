// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_

#include "v2x_msg/msg/detail/brake_system_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::BrakeSystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheelbrakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelbrakes: ";
    value_to_yaml(msg.wheelbrakes, out);
    out << "\n";
  }

  // member: traction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traction: ";
    value_to_yaml(msg.traction, out);
    out << "\n";
  }

  // member: abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs: ";
    value_to_yaml(msg.abs, out);
    out << "\n";
  }

  // member: scs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scs: ";
    value_to_yaml(msg.scs, out);
    out << "\n";
  }

  // member: brakeboost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakeboost: ";
    value_to_yaml(msg.brakeboost, out);
    out << "\n";
  }

  // member: auxbrakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auxbrakes: ";
    value_to_yaml(msg.auxbrakes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::BrakeSystemStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::BrakeSystemStatus>()
{
  return "v2x_msg::msg::BrakeSystemStatus";
}

template<>
inline const char * name<v2x_msg::msg::BrakeSystemStatus>()
{
  return "v2x_msg/msg/BrakeSystemStatus";
}

template<>
struct has_fixed_size<v2x_msg::msg::BrakeSystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::BrakeSystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::BrakeSystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
