// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__TRAITS_HPP_

#include "v2x_msg/msg/detail/signal_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"
// Member 'inboundlane'
// Member 'outboundlane'
#include "v2x_msg/msg/detail/intersection_access_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SignalRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: requestid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requestid: ";
    value_to_yaml(msg.requestid, out);
    out << "\n";
  }

  // member: requesttype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requesttype: ";
    value_to_yaml(msg.requesttype, out);
    out << "\n";
  }

  // member: inboundlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inboundlane:\n";
    to_yaml(msg.inboundlane, out, indentation + 2);
  }

  // member: outboundlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outboundlane:\n";
    to_yaml(msg.outboundlane, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SignalRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SignalRequest>()
{
  return "v2x_msg::msg::SignalRequest";
}

template<>
inline const char * name<v2x_msg::msg::SignalRequest>()
{
  return "v2x_msg/msg/SignalRequest";
}

template<>
struct has_fixed_size<v2x_msg::msg::SignalRequest>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::IntersectionAccessPoint>::value && has_fixed_size<v2x_msg::msg::IntersectionReferenceID>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::SignalRequest>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::IntersectionAccessPoint>::value && has_bounded_size<v2x_msg::msg::IntersectionReferenceID>::value> {};

template<>
struct is_message<v2x_msg::msg::SignalRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__TRAITS_HPP_
