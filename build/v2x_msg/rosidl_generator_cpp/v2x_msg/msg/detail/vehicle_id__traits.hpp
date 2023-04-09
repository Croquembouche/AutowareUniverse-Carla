// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_ID__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleID & msg,
  std::ostream & out)
{
  out << "{";
  // member: entityid
  {
    out << "entityid: ";
    rosidl_generator_traits::value_to_yaml(msg.entityid, out);
    out << ", ";
  }

  // member: stationid
  {
    out << "stationid: ";
    rosidl_generator_traits::value_to_yaml(msg.stationid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entityid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entityid: ";
    rosidl_generator_traits::value_to_yaml(msg.entityid, out);
    out << "\n";
  }

  // member: stationid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stationid: ";
    rosidl_generator_traits::value_to_yaml(msg.stationid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleID & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::VehicleID & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::VehicleID & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleID>()
{
  return "v2x_msg::msg::VehicleID";
}

template<>
inline const char * name<v2x_msg::msg::VehicleID>()
{
  return "v2x_msg/msg/VehicleID";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::VehicleID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_ID__TRAITS_HPP_
