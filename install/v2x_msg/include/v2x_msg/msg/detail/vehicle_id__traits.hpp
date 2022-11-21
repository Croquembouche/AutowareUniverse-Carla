// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_ID__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_ID__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entityid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entityid: ";
    value_to_yaml(msg.entityid, out);
    out << "\n";
  }

  // member: stationid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stationid: ";
    value_to_yaml(msg.stationid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
