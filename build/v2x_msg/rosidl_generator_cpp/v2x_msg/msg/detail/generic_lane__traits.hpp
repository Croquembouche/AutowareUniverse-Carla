// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_

#include "v2x_msg/msg/detail/generic_lane__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'maneuvers'
#include "v2x_msg/msg/detail/allowed_maneuvers__traits.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__traits.hpp"
// Member 'connectsto'
#include "v2x_msg/msg/detail/connection__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneid: ";
    value_to_yaml(msg.laneid, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: ingressapproach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ingressapproach: ";
    value_to_yaml(msg.ingressapproach, out);
    out << "\n";
  }

  // member: egressapproach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egressapproach: ";
    value_to_yaml(msg.egressapproach, out);
    out << "\n";
  }

  // member: maneuvers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvers:\n";
    to_yaml(msg.maneuvers, out, indentation + 2);
  }

  // member: nodelist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodelist.size() == 0) {
      out << "nodelist: []\n";
    } else {
      out << "nodelist:\n";
      for (auto item : msg.nodelist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: connectsto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connectsto.size() == 0) {
      out << "connectsto: []\n";
    } else {
      out << "connectsto:\n";
      for (auto item : msg.connectsto) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: overlays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.overlays.size() == 0) {
      out << "overlays: []\n";
    } else {
      out << "overlays:\n";
      for (auto item : msg.overlays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::GenericLane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::GenericLane>()
{
  return "v2x_msg::msg::GenericLane";
}

template<>
inline const char * name<v2x_msg::msg::GenericLane>()
{
  return "v2x_msg/msg/GenericLane";
}

template<>
struct has_fixed_size<v2x_msg::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::GenericLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
