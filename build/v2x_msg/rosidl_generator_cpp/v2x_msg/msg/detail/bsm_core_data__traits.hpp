// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/bsm_core_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__traits.hpp"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'brakes'
#include "v2x_msg/msg/detail/brake_system_status__traits.hpp"
// Member 'size'
#include "v2x_msg/msg/detail/vehicle_size__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSMCoreData & msg,
  std::ostream & out)
{
  out << "{";
  // member: msgcnt
  {
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: secmark
  {
    out << "secmark: ";
    rosidl_generator_traits::value_to_yaml(msg.secmark, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: elev
  {
    out << "elev: ";
    rosidl_generator_traits::value_to_yaml(msg.elev, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    to_flow_style_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: transmission
  {
    out << "transmission: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: accelset
  {
    out << "accelset: ";
    to_flow_style_yaml(msg.accelset, out);
    out << ", ";
  }

  // member: brakes
  {
    out << "brakes: ";
    to_flow_style_yaml(msg.brakes, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSMCoreData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msgcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: secmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secmark: ";
    rosidl_generator_traits::value_to_yaml(msg.secmark, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: elev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elev: ";
    rosidl_generator_traits::value_to_yaml(msg.elev, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_block_style_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: transmission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: accelset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelset:\n";
    to_block_style_yaml(msg.accelset, out, indentation + 2);
  }

  // member: brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakes:\n";
    to_block_style_yaml(msg.brakes, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSMCoreData & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::BSMCoreData & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::BSMCoreData & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::BSMCoreData>()
{
  return "v2x_msg::msg::BSMCoreData";
}

template<>
inline const char * name<v2x_msg::msg::BSMCoreData>()
{
  return "v2x_msg/msg/BSMCoreData";
}

template<>
struct has_fixed_size<v2x_msg::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::BSMCoreData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
