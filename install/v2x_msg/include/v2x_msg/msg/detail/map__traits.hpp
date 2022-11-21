// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MAP__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__MAP__TRAITS_HPP_

#include "v2x_msg/msg/detail/map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_geometry__traits.hpp"
// Member 'roadsegments'
#include "v2x_msg/msg/detail/road_segment__traits.hpp"
// Member 'dataparameters'
#include "v2x_msg/msg/detail/data_parameters__traits.hpp"
// Member 'restrictionlist'
#include "v2x_msg/msg/detail/restriction_class_assignment__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::MAP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: msgissuerevision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgissuerevision: ";
    value_to_yaml(msg.msgissuerevision, out);
    out << "\n";
  }

  // member: layertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layertype: ";
    value_to_yaml(msg.layertype, out);
    out << "\n";
  }

  // member: layerid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layerid: ";
    value_to_yaml(msg.layerid, out);
    out << "\n";
  }

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersections.size() == 0) {
      out << "intersections: []\n";
    } else {
      out << "intersections:\n";
      for (auto item : msg.intersections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: roadsegments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roadsegments.size() == 0) {
      out << "roadsegments: []\n";
    } else {
      out << "roadsegments:\n";
      for (auto item : msg.roadsegments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: dataparameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dataparameters:\n";
    to_yaml(msg.dataparameters, out, indentation + 2);
  }

  // member: restrictionlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.restrictionlist.size() == 0) {
      out << "restrictionlist: []\n";
    } else {
      out << "restrictionlist:\n";
      for (auto item : msg.restrictionlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::MAP & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::MAP>()
{
  return "v2x_msg::msg::MAP";
}

template<>
inline const char * name<v2x_msg::msg::MAP>()
{
  return "v2x_msg/msg/MAP";
}

template<>
struct has_fixed_size<v2x_msg::msg::MAP>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::MAP>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::MAP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__MAP__TRAITS_HPP_
