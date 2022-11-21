// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT__TRAITS_HPP_

#include "v2x_msg/msg/detail/snapshot__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'theposition'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"
// Member 'safetyext'
#include "v2x_msg/msg/detail/vehicle_safety_extensions__traits.hpp"
// Member 'dataset'
#include "v2x_msg/msg/detail/vehicle_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Snapshot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theposition:\n";
    to_yaml(msg.theposition, out, indentation + 2);
  }

  // member: safetyext
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safetyext:\n";
    to_yaml(msg.safetyext, out, indentation + 2);
  }

  // member: dataset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dataset:\n";
    to_yaml(msg.dataset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Snapshot & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Snapshot>()
{
  return "v2x_msg::msg::Snapshot";
}

template<>
inline const char * name<v2x_msg::msg::Snapshot>()
{
  return "v2x_msg/msg/Snapshot";
}

template<>
struct has_fixed_size<v2x_msg::msg::Snapshot>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::FullPositionVector>::value && has_fixed_size<v2x_msg::msg::VehicleSafetyExtensions>::value && has_fixed_size<v2x_msg::msg::VehicleStatus>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::Snapshot>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::FullPositionVector>::value && has_bounded_size<v2x_msg::msg::VehicleSafetyExtensions>::value && has_bounded_size<v2x_msg::msg::VehicleStatus>::value> {};

template<>
struct is_message<v2x_msg::msg::Snapshot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT__TRAITS_HPP_
