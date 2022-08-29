// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_ident__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__traits.hpp"
// Member 'vehicleclass'
#include "v2x_msg/msg/detail/vehicle_class__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleIdent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin: ";
    value_to_yaml(msg.vin, out);
    out << "\n";
  }

  // member: ownercode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ownercode: ";
    value_to_yaml(msg.ownercode, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
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

  // member: vehicleclass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicleclass:\n";
    to_yaml(msg.vehicleclass, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleIdent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleIdent>()
{
  return "v2x_msg::msg::VehicleIdent";
}

template<>
inline const char * name<v2x_msg::msg::VehicleIdent>()
{
  return "v2x_msg/msg/VehicleIdent";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleIdent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleIdent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::VehicleIdent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_
