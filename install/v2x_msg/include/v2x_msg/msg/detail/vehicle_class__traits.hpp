// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_class__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleClass & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vgroup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vgroup: ";
    value_to_yaml(msg.vgroup, out);
    out << "\n";
  }

  // member: rgroup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgroup: ";
    value_to_yaml(msg.rgroup, out);
    out << "\n";
  }

  // member: requip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requip: ";
    value_to_yaml(msg.requip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleClass & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleClass>()
{
  return "v2x_msg::msg::VehicleClass";
}

template<>
inline const char * name<v2x_msg::msg::VehicleClass>()
{
  return "v2x_msg/msg/VehicleClass";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleClass>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleClass>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::VehicleClass>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__TRAITS_HPP_
