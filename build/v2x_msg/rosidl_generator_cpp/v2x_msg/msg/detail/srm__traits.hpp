// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SRM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SRM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SRM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/srm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'requests'
#include "v2x_msg/msg/detail/signal_request_package__traits.hpp"
// Member 'requestor'
#include "v2x_msg/msg/detail/requestor_description__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SRM & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << ", ";
  }

  // member: sequencenumber
  {
    out << "sequencenumber: ";
    rosidl_generator_traits::value_to_yaml(msg.sequencenumber, out);
    out << ", ";
  }

  // member: requests
  {
    out << "requests: ";
    to_flow_style_yaml(msg.requests, out);
    out << ", ";
  }

  // member: requestor
  {
    out << "requestor: ";
    to_flow_style_yaml(msg.requestor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SRM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
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

  // member: sequencenumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequencenumber: ";
    rosidl_generator_traits::value_to_yaml(msg.sequencenumber, out);
    out << "\n";
  }

  // member: requests
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requests:\n";
    to_block_style_yaml(msg.requests, out, indentation + 2);
  }

  // member: requestor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requestor:\n";
    to_block_style_yaml(msg.requestor, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SRM & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::SRM & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::SRM & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::SRM>()
{
  return "v2x_msg::msg::SRM";
}

template<>
inline const char * name<v2x_msg::msg::SRM>()
{
  return "v2x_msg/msg/SRM";
}

template<>
struct has_fixed_size<v2x_msg::msg::SRM>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::RequestorDescription>::value && has_fixed_size<v2x_msg::msg::SignalRequestPackage>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::SRM>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::RequestorDescription>::value && has_bounded_size<v2x_msg::msg::SignalRequestPackage>::value> {};

template<>
struct is_message<v2x_msg::msg::SRM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SRM__TRAITS_HPP_
