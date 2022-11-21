// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_classification__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: keytype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keytype: ";
    value_to_yaml(msg.keytype, out);
    out << "\n";
  }

  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    value_to_yaml(msg.role, out);
    out << "\n";
  }

  // member: iso3883
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iso3883: ";
    value_to_yaml(msg.iso3883, out);
    out << "\n";
  }

  // member: hpmstype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpmstype: ";
    value_to_yaml(msg.hpmstype, out);
    out << "\n";
  }

  // member: vehicletype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicletype: ";
    value_to_yaml(msg.vehicletype, out);
    out << "\n";
  }

  // member: responseequip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responseequip: ";
    value_to_yaml(msg.responseequip, out);
    out << "\n";
  }

  // member: respondertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respondertype: ";
    value_to_yaml(msg.respondertype, out);
    out << "\n";
  }

  // member: fueltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fueltype: ";
    value_to_yaml(msg.fueltype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleClassification & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleClassification>()
{
  return "v2x_msg::msg::VehicleClassification";
}

template<>
inline const char * name<v2x_msg::msg::VehicleClassification>()
{
  return "v2x_msg/msg/VehicleClassification";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::VehicleClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
