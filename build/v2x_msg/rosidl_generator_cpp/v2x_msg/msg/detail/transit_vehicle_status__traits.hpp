// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__TRAITS_HPP_

#include "v2x_msg/msg/detail/transit_vehicle_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::TransitVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loading: ";
    value_to_yaml(msg.loading, out);
    out << "\n";
  }

  // member: anadause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anadause: ";
    value_to_yaml(msg.anadause, out);
    out << "\n";
  }

  // member: abikeload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abikeload: ";
    value_to_yaml(msg.abikeload, out);
    out << "\n";
  }

  // member: dooropen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dooropen: ";
    value_to_yaml(msg.dooropen, out);
    out << "\n";
  }

  // member: charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging: ";
    value_to_yaml(msg.charging, out);
    out << "\n";
  }

  // member: atstopline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atstopline: ";
    value_to_yaml(msg.atstopline, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::TransitVehicleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
