// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/route_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'preferred'
// Member 'alternatives'
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: preferred
  {
    out << "preferred: ";
    to_flow_style_yaml(msg.preferred, out);
    out << ", ";
  }

  // member: alternatives
  {
    if (msg.alternatives.size() == 0) {
      out << "alternatives: []";
    } else {
      out << "alternatives: [";
      size_t pending_items = msg.alternatives.size();
      for (auto item : msg.alternatives) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RouteSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preferred
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred:\n";
    to_block_style_yaml(msg.preferred, out, indentation + 2);
  }

  // member: alternatives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alternatives.size() == 0) {
      out << "alternatives: []\n";
    } else {
      out << "alternatives:\n";
      for (auto item : msg.alternatives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteSegment & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::RouteSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::RouteSegment & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::RouteSegment>()
{
  return "autoware_adapi_v1_msgs::msg::RouteSegment";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::RouteSegment>()
{
  return "autoware_adapi_v1_msgs/msg/RouteSegment";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::RouteSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::RouteSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::RouteSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_
