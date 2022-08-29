// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONTENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONTENT__TRAITS_HPP_

#include "v2x_msg/msg/detail/content__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'advisory'
#include "v2x_msg/msg/detail/iti_scodesandtext__traits.hpp"
// Member 'workzone'
#include "v2x_msg/msg/detail/work_zone__traits.hpp"
// Member 'genericsign'
#include "v2x_msg/msg/detail/generic_signage__traits.hpp"
// Member 'speedlimit'
#include "v2x_msg/msg/detail/itis_speed_limit__traits.hpp"
// Member 'exitservice'
#include "v2x_msg/msg/detail/exit_service__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::Content & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: advisory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.advisory.size() == 0) {
      out << "advisory: []\n";
    } else {
      out << "advisory:\n";
      for (auto item : msg.advisory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: workzone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.workzone.size() == 0) {
      out << "workzone: []\n";
    } else {
      out << "workzone:\n";
      for (auto item : msg.workzone) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: genericsign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.genericsign.size() == 0) {
      out << "genericsign: []\n";
    } else {
      out << "genericsign:\n";
      for (auto item : msg.genericsign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: speedlimit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speedlimit.size() == 0) {
      out << "speedlimit: []\n";
    } else {
      out << "speedlimit:\n";
      for (auto item : msg.speedlimit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: exitservice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exitservice.size() == 0) {
      out << "exitservice: []\n";
    } else {
      out << "exitservice:\n";
      for (auto item : msg.exitservice) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::Content & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::Content>()
{
  return "v2x_msg::msg::Content";
}

template<>
inline const char * name<v2x_msg::msg::Content>()
{
  return "v2x_msg/msg/Content";
}

template<>
struct has_fixed_size<v2x_msg::msg::Content>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::Content>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::Content>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CONTENT__TRAITS_HPP_
