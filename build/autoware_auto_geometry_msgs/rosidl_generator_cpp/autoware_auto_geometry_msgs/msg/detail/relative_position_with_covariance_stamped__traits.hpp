// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace autoware_auto_geometry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelativePositionWithCovarianceStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: child_frame_id
  {
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RelativePositionWithCovarianceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelativePositionWithCovarianceStamped & msg, bool use_flow_style = false)
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

}  // namespace autoware_auto_geometry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_geometry_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_geometry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_geometry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped & msg)
{
  return autoware_auto_geometry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>()
{
  return "autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped";
}

template<>
inline const char * name<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>()
{
  return "autoware_auto_geometry_msgs/msg/RelativePositionWithCovarianceStamped";
}

template<>
struct has_fixed_size<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
