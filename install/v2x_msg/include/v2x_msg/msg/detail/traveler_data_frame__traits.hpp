// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_

#include "v2x_msg/msg/detail/traveler_data_frame__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'msgid'
#include "v2x_msg/msg/detail/msg_id__traits.hpp"
// Member 'regions'
#include "v2x_msg/msg/detail/geographical_path__traits.hpp"
// Member 'content'
#include "v2x_msg/msg/detail/content__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::TravelerDataFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: notused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused: ";
    value_to_yaml(msg.notused, out);
    out << "\n";
  }

  // member: frametype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frametype: ";
    value_to_yaml(msg.frametype, out);
    out << "\n";
  }

  // member: msgid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgid:\n";
    to_yaml(msg.msgid, out, indentation + 2);
  }

  // member: startyear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startyear: ";
    value_to_yaml(msg.startyear, out);
    out << "\n";
  }

  // member: starttime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starttime: ";
    value_to_yaml(msg.starttime, out);
    out << "\n";
  }

  // member: durationtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "durationtime: ";
    value_to_yaml(msg.durationtime, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: notused1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused1: ";
    value_to_yaml(msg.notused1, out);
    out << "\n";
  }

  // member: regions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.regions.size() == 0) {
      out << "regions: []\n";
    } else {
      out << "regions:\n";
      for (auto item : msg.regions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: notused2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused2: ";
    value_to_yaml(msg.notused2, out);
    out << "\n";
  }

  // member: notused3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused3: ";
    value_to_yaml(msg.notused3, out);
    out << "\n";
  }

  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content:\n";
    to_yaml(msg.content, out, indentation + 2);
  }

  // member: url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url: ";
    value_to_yaml(msg.url, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::TravelerDataFrame & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::TravelerDataFrame>()
{
  return "v2x_msg::msg::TravelerDataFrame";
}

template<>
inline const char * name<v2x_msg::msg::TravelerDataFrame>()
{
  return "v2x_msg/msg/TravelerDataFrame";
}

template<>
struct has_fixed_size<v2x_msg::msg::TravelerDataFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::TravelerDataFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::TravelerDataFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_
