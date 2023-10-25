// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignalWithJudge & msg,
  std::ostream & out)
{
  out << "{";
  // member: judge
  {
    out << "judge: ";
    rosidl_generator_traits::value_to_yaml(msg.judge, out);
    out << ", ";
  }

  // member: has_state
  {
    out << "has_state: ";
    rosidl_generator_traits::value_to_yaml(msg.has_state, out);
    out << ", ";
  }

  // member: signal
  {
    out << "signal: ";
    to_flow_style_yaml(msg.signal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignalWithJudge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: judge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "judge: ";
    rosidl_generator_traits::value_to_yaml(msg.judge, out);
    out << "\n";
  }

  // member: has_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_state: ";
    rosidl_generator_traits::value_to_yaml(msg.has_state, out);
    out << "\n";
  }

  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal:\n";
    to_block_style_yaml(msg.signal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignalWithJudge & msg, bool use_flow_style = false)
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
  const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>()
{
  return "autoware_auto_perception_msgs::msg::TrafficSignalWithJudge";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>()
{
  return "autoware_auto_perception_msgs/msg/TrafficSignalWithJudge";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_
