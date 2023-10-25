// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONTENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONTENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/content__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Content & msg,
  std::ostream & out)
{
  out << "{";
  // member: advisory
  {
    if (msg.advisory.size() == 0) {
      out << "advisory: []";
    } else {
      out << "advisory: [";
      size_t pending_items = msg.advisory.size();
      for (auto item : msg.advisory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: workzone
  {
    if (msg.workzone.size() == 0) {
      out << "workzone: []";
    } else {
      out << "workzone: [";
      size_t pending_items = msg.workzone.size();
      for (auto item : msg.workzone) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: genericsign
  {
    if (msg.genericsign.size() == 0) {
      out << "genericsign: []";
    } else {
      out << "genericsign: [";
      size_t pending_items = msg.genericsign.size();
      for (auto item : msg.genericsign) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speedlimit
  {
    if (msg.speedlimit.size() == 0) {
      out << "speedlimit: []";
    } else {
      out << "speedlimit: [";
      size_t pending_items = msg.speedlimit.size();
      for (auto item : msg.speedlimit) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: exitservice
  {
    if (msg.exitservice.size() == 0) {
      out << "exitservice: []";
    } else {
      out << "exitservice: [";
      size_t pending_items = msg.exitservice.size();
      for (auto item : msg.exitservice) {
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
  const Content & msg,
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Content & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::Content & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::Content & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
