// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/tire_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TireData & msg,
  std::ostream & out)
{
  out << "{";
  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: wheelsensorstatus
  {
    out << "wheelsensorstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelsensorstatus, out);
    out << ", ";
  }

  // member: wheelendelectfault
  {
    out << "wheelendelectfault: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelendelectfault, out);
    out << ", ";
  }

  // member: leakagerate
  {
    out << "leakagerate: ";
    rosidl_generator_traits::value_to_yaml(msg.leakagerate, out);
    out << ", ";
  }

  // member: detection
  {
    out << "detection: ";
    rosidl_generator_traits::value_to_yaml(msg.detection, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TireData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: wheelsensorstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelsensorstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelsensorstatus, out);
    out << "\n";
  }

  // member: wheelendelectfault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelendelectfault: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelendelectfault, out);
    out << "\n";
  }

  // member: leakagerate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leakagerate: ";
    rosidl_generator_traits::value_to_yaml(msg.leakagerate, out);
    out << "\n";
  }

  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection: ";
    rosidl_generator_traits::value_to_yaml(msg.detection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TireData & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::TireData & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::TireData & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::TireData>()
{
  return "v2x_msg::msg::TireData";
}

template<>
inline const char * name<v2x_msg::msg::TireData>()
{
  return "v2x_msg/msg/TireData";
}

template<>
struct has_fixed_size<v2x_msg::msg::TireData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::TireData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::TireData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_
