// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/signal_status_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'requester'
#include "v2x_msg/msg/detail/signal_requester_info__traits.hpp"
// Member 'inboundon'
// Member 'outboundon'
#include "v2x_msg/msg/detail/intersection_access_point__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SignalStatusPackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: requester
  {
    out << "requester: ";
    to_flow_style_yaml(msg.requester, out);
    out << ", ";
  }

  // member: inboundon
  {
    out << "inboundon: ";
    to_flow_style_yaml(msg.inboundon, out);
    out << ", ";
  }

  // member: outboundon
  {
    out << "outboundon: ";
    to_flow_style_yaml(msg.outboundon, out);
    out << ", ";
  }

  // member: minute
  {
    out << "minute: ";
    rosidl_generator_traits::value_to_yaml(msg.minute, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SignalStatusPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requester
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester:\n";
    to_block_style_yaml(msg.requester, out, indentation + 2);
  }

  // member: inboundon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inboundon:\n";
    to_block_style_yaml(msg.inboundon, out, indentation + 2);
  }

  // member: outboundon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outboundon:\n";
    to_block_style_yaml(msg.outboundon, out, indentation + 2);
  }

  // member: minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minute: ";
    rosidl_generator_traits::value_to_yaml(msg.minute, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SignalStatusPackage & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::SignalStatusPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::SignalStatusPackage & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
