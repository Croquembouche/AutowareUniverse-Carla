// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__TRAITS_HPP_

#include "v2x_msg/msg/detail/signal_status_package__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'requester'
#include "v2x_msg/msg/detail/signal_requester_info__traits.hpp"
// Member 'inboundon'
// Member 'outboundon'
#include "v2x_msg/msg/detail/intersection_access_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SignalStatusPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requester
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester:\n";
    to_yaml(msg.requester, out, indentation + 2);
  }

  // member: inboundon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inboundon:\n";
    to_yaml(msg.inboundon, out, indentation + 2);
  }

  // member: outboundon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outboundon:\n";
    to_yaml(msg.outboundon, out, indentation + 2);
  }

  // member: minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minute: ";
    value_to_yaml(msg.minute, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    value_to_yaml(msg.second, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SignalStatusPackage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SignalStatusPackage>()
{
  return "v2x_msg::msg::SignalStatusPackage";
}

template<>
inline const char * name<v2x_msg::msg::SignalStatusPackage>()
{
  return "v2x_msg/msg/SignalStatusPackage";
}

template<>
struct has_fixed_size<v2x_msg::msg::SignalStatusPackage>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::IntersectionAccessPoint>::value && has_fixed_size<v2x_msg::msg::SignalRequesterInfo>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::SignalStatusPackage>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::IntersectionAccessPoint>::value && has_bounded_size<v2x_msg::msg::SignalRequesterInfo>::value> {};

template<>
struct is_message<v2x_msg::msg::SignalStatusPackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__TRAITS_HPP_
