// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PDM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PDM__TRAITS_HPP_

#include "v2x_msg/msg/detail/pdm__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'sample'
#include "v2x_msg/msg/detail/sample__traits.hpp"
// Member 'snapshottime'
#include "v2x_msg/msg/detail/snapshot_time__traits.hpp"
// Member 'snapshotdistance'
#include "v2x_msg/msg/detail/snapshot_distance__traits.hpp"
// Member 'dataelements'
#include "v2x_msg/msg/detail/vehicle_status_request__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PDM & msg,
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

  // member: sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample:\n";
    to_yaml(msg.sample, out, indentation + 2);
  }

  // member: directions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directions: ";
    value_to_yaml(msg.directions, out);
    out << "\n";
  }

  // member: termtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "termtime: ";
    value_to_yaml(msg.termtime, out);
    out << "\n";
  }

  // member: termdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "termdistance: ";
    value_to_yaml(msg.termdistance, out);
    out << "\n";
  }

  // member: snapshottime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snapshottime:\n";
    to_yaml(msg.snapshottime, out, indentation + 2);
  }

  // member: snapshotdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snapshotdistance:\n";
    to_yaml(msg.snapshotdistance, out, indentation + 2);
  }

  // member: txinterval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "txinterval: ";
    value_to_yaml(msg.txinterval, out);
    out << "\n";
  }

  // member: dataelements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dataelements.size() == 0) {
      out << "dataelements: []\n";
    } else {
      out << "dataelements:\n";
      for (auto item : msg.dataelements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PDM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PDM>()
{
  return "v2x_msg::msg::PDM";
}

template<>
inline const char * name<v2x_msg::msg::PDM>()
{
  return "v2x_msg/msg/PDM";
}

template<>
struct has_fixed_size<v2x_msg::msg::PDM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::PDM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::PDM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PDM__TRAITS_HPP_
