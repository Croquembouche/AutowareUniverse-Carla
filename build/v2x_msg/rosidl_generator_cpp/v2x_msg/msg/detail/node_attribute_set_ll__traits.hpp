// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/NodeAttributeSetLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__TRAITS_HPP_

#include "v2x_msg/msg/detail/node_attribute_set_ll__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "v2x_msg/msg/detail/lane_data_attribute__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::NodeAttributeSetLL & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: localnode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.localnode.size() == 0) {
      out << "localnode: []\n";
    } else {
      out << "localnode:\n";
      for (auto item : msg.localnode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disabled.size() == 0) {
      out << "disabled: []\n";
    } else {
      out << "disabled:\n";
      for (auto item : msg.disabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled.size() == 0) {
      out << "enabled: []\n";
    } else {
      out << "enabled:\n";
      for (auto item : msg.enabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: dwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dwidth: ";
    value_to_yaml(msg.dwidth, out);
    out << "\n";
  }

  // member: delevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delevation: ";
    value_to_yaml(msg.delevation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::NodeAttributeSetLL & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::NodeAttributeSetLL>()
{
  return "v2x_msg::msg::NodeAttributeSetLL";
}

template<>
inline const char * name<v2x_msg::msg::NodeAttributeSetLL>()
{
  return "v2x_msg/msg/NodeAttributeSetLL";
}

template<>
struct has_fixed_size<v2x_msg::msg::NodeAttributeSetLL>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::NodeAttributeSetLL>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::NodeAttributeSetLL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__TRAITS_HPP_
