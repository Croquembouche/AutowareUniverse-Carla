// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lights'
#include "autoware_auto_perception_msgs/msg/detail/traffic_light__traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_primitive_id
  {
    out << "map_primitive_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_primitive_id, out);
    out << ", ";
  }

  // member: lights
  {
    if (msg.lights.size() == 0) {
      out << "lights: []";
    } else {
      out << "lights: [";
      size_t pending_items = msg.lights.size();
      for (auto item : msg.lights) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_primitive_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_primitive_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_primitive_id, out);
    out << "\n";
  }

  // member: lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lights.size() == 0) {
      out << "lights: []\n";
    } else {
      out << "lights:\n";
      for (auto item : msg.lights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignal & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_perception_msgs::msg::TrafficSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrafficSignal & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficSignal>()
{
  return "autoware_auto_perception_msgs::msg::TrafficSignal";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficSignal>()
{
  return "autoware_auto_perception_msgs/msg/TrafficSignal";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignal>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::TrafficLight>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_
