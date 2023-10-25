// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_auto_mapping_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HADMapService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requested_primitives
  {
    if (msg.requested_primitives.size() == 0) {
      out << "requested_primitives: []";
    } else {
      out << "requested_primitives: [";
      size_t pending_items = msg.requested_primitives.size();
      for (auto item : msg.requested_primitives) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: geom_upper_bound
  {
    if (msg.geom_upper_bound.size() == 0) {
      out << "geom_upper_bound: []";
    } else {
      out << "geom_upper_bound: [";
      size_t pending_items = msg.geom_upper_bound.size();
      for (auto item : msg.geom_upper_bound) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: geom_lower_bound
  {
    if (msg.geom_lower_bound.size() == 0) {
      out << "geom_lower_bound: []";
    } else {
      out << "geom_lower_bound: [";
      size_t pending_items = msg.geom_lower_bound.size();
      for (auto item : msg.geom_lower_bound) {
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
  const HADMapService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requested_primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requested_primitives.size() == 0) {
      out << "requested_primitives: []\n";
    } else {
      out << "requested_primitives:\n";
      for (auto item : msg.requested_primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geom_upper_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geom_upper_bound.size() == 0) {
      out << "geom_upper_bound: []\n";
    } else {
      out << "geom_upper_bound:\n";
      for (auto item : msg.geom_upper_bound) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geom_lower_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geom_lower_bound.size() == 0) {
      out << "geom_lower_bound: []\n";
    } else {
      out << "geom_lower_bound:\n";
      for (auto item : msg.geom_lower_bound) {
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

inline std::string to_yaml(const HADMapService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_mapping_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_mapping_msgs::srv::HADMapService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_mapping_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_mapping_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_mapping_msgs::srv::HADMapService_Request & msg)
{
  return autoware_auto_mapping_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Request";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Request";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__traits.hpp"

namespace autoware_auto_mapping_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HADMapService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    to_flow_style_yaml(msg.map, out);
    out << ", ";
  }

  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HADMapService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_block_style_yaml(msg.map, out, indentation + 2);
  }

  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HADMapService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_mapping_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_mapping_msgs::srv::HADMapService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_mapping_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_mapping_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_mapping_msgs::srv::HADMapService_Response & msg)
{
  return autoware_auto_mapping_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Response";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Response";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_
