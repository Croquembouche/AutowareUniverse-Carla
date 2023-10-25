// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/transit_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransitVehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: loading
  {
    out << "loading: ";
    rosidl_generator_traits::value_to_yaml(msg.loading, out);
    out << ", ";
  }

  // member: anadause
  {
    out << "anadause: ";
    rosidl_generator_traits::value_to_yaml(msg.anadause, out);
    out << ", ";
  }

  // member: abikeload
  {
    out << "abikeload: ";
    rosidl_generator_traits::value_to_yaml(msg.abikeload, out);
    out << ", ";
  }

  // member: dooropen
  {
    out << "dooropen: ";
    rosidl_generator_traits::value_to_yaml(msg.dooropen, out);
    out << ", ";
  }

  // member: charging
  {
    out << "charging: ";
    rosidl_generator_traits::value_to_yaml(msg.charging, out);
    out << ", ";
  }

  // member: atstopline
  {
    out << "atstopline: ";
    rosidl_generator_traits::value_to_yaml(msg.atstopline, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TransitVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loading: ";
    rosidl_generator_traits::value_to_yaml(msg.loading, out);
    out << "\n";
  }

  // member: anadause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anadause: ";
    rosidl_generator_traits::value_to_yaml(msg.anadause, out);
    out << "\n";
  }

  // member: abikeload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abikeload: ";
    rosidl_generator_traits::value_to_yaml(msg.abikeload, out);
    out << "\n";
  }

  // member: dooropen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dooropen: ";
    rosidl_generator_traits::value_to_yaml(msg.dooropen, out);
    out << "\n";
  }

  // member: charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging: ";
    rosidl_generator_traits::value_to_yaml(msg.charging, out);
    out << "\n";
  }

  // member: atstopline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atstopline: ";
    rosidl_generator_traits::value_to_yaml(msg.atstopline, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransitVehicleStatus & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::TransitVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::TransitVehicleStatus & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::TransitVehicleStatus>()
{
  return "v2x_msg::msg::TransitVehicleStatus";
}

template<>
inline const char * name<v2x_msg::msg::TransitVehicleStatus>()
{
  return "v2x_msg/msg/TransitVehicleStatus";
}

template<>
struct has_fixed_size<v2x_msg::msg::TransitVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::TransitVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::TransitVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__TRAITS_HPP_
