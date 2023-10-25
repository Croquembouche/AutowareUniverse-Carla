// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/signal_request_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'signalrequest'
#include "v2x_msg/msg/detail/signal_request__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SignalRequestPackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: signalrequest
  {
    out << "signalrequest: ";
    to_flow_style_yaml(msg.signalrequest, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SignalRequestPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signalrequest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalrequest:\n";
    to_block_style_yaml(msg.signalrequest, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SignalRequestPackage & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::SignalRequestPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::SignalRequestPackage & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::SignalRequestPackage>()
{
  return "v2x_msg::msg::SignalRequestPackage";
}

template<>
inline const char * name<v2x_msg::msg::SignalRequestPackage>()
{
  return "v2x_msg/msg/SignalRequestPackage";
}

template<>
struct has_fixed_size<v2x_msg::msg::SignalRequestPackage>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::SignalRequest>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::SignalRequestPackage>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::SignalRequest>::value> {};

template<>
struct is_message<v2x_msg::msg::SignalRequestPackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__TRAITS_HPP_
