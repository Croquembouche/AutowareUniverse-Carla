// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__TRAITS_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_auto_mapping_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: primitive_type
  {
    out << "primitive_type: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: primitive_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primitive_type: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapPrimitive & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_mapping_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_mapping_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_mapping_msgs::msg::MapPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_mapping_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_mapping_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_mapping_msgs::msg::MapPrimitive & msg)
{
  return autoware_auto_mapping_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::msg::MapPrimitive>()
{
  return "autoware_auto_mapping_msgs::msg::MapPrimitive";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::msg::MapPrimitive>()
{
  return "autoware_auto_mapping_msgs/msg/MapPrimitive";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::msg::MapPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::msg::MapPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_mapping_msgs::msg::MapPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__TRAITS_HPP_
