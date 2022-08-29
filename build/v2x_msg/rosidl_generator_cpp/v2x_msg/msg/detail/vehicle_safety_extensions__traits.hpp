// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_safety_extensions__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__traits.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleSafetyExtensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicleeventflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicleeventflags: ";
    value_to_yaml(msg.vehicleeventflags, out);
    out << "\n";
  }

  // member: pathhistory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathhistory:\n";
    to_yaml(msg.pathhistory, out, indentation + 2);
  }

  // member: pathprediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathprediction:\n";
    to_yaml(msg.pathprediction, out, indentation + 2);
  }

  // member: texteriorlights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "texteriorlights: ";
    value_to_yaml(msg.texteriorlights, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleSafetyExtensions & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleSafetyExtensions>()
{
  return "v2x_msg::msg::VehicleSafetyExtensions";
}

template<>
inline const char * name<v2x_msg::msg::VehicleSafetyExtensions>()
{
  return "v2x_msg/msg/VehicleSafetyExtensions";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::VehicleSafetyExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
