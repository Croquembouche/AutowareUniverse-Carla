// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include "v2x_msg/msg/detail/connection__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'connectinglane'
#include "v2x_msg/msg/detail/connecting_lane__traits.hpp"
// Member 'remoteintersection'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connectinglane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connectinglane:\n";
    to_yaml(msg.connectinglane, out, indentation + 2);
  }

  // member: remoteintersection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remoteintersection:\n";
    to_yaml(msg.remoteintersection, out, indentation + 2);
  }

  // member: signalgroup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalgroup: ";
    value_to_yaml(msg.signalgroup, out);
    out << "\n";
  }

  // member: userclass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "userclass: ";
    value_to_yaml(msg.userclass, out);
    out << "\n";
  }

  // member: laneconnectonid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneconnectonid: ";
    value_to_yaml(msg.laneconnectonid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Connection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Connection>()
{
  return "v2x_msg::msg::Connection";
}

template<>
inline const char * name<v2x_msg::msg::Connection>()
{
  return "v2x_msg/msg/Connection";
}

template<>
struct has_fixed_size<v2x_msg::msg::Connection>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::ConnectingLane>::value && has_fixed_size<v2x_msg::msg::IntersectionReferenceID>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Connection>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::ConnectingLane>::value && has_bounded_size<v2x_msg::msg::IntersectionReferenceID>::value> {};

template<>
struct is_message<v2x_msg::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION__TRAITS_HPP_
