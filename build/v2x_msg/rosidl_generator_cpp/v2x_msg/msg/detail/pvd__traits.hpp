// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PVD__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PVD__TRAITS_HPP_

#include "v2x_msg/msg/detail/pvd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'probeid'
#include "v2x_msg/msg/detail/vehicle_ident__traits.hpp"
// Member 'startvector'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"
// Member 'vehicletype'
#include "v2x_msg/msg/detail/vehicle_classification__traits.hpp"
// Member 'snapshots'
#include "v2x_msg/msg/detail/snapshot__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PVD & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timstamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timstamp: ";
    value_to_yaml(msg.timstamp, out);
    out << "\n";
  }

  // member: segnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segnum: ";
    value_to_yaml(msg.segnum, out);
    out << "\n";
  }

  // member: probeid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probeid:\n";
    to_yaml(msg.probeid, out, indentation + 2);
  }

  // member: startvector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startvector:\n";
    to_yaml(msg.startvector, out, indentation + 2);
  }

  // member: vehicletype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicletype:\n";
    to_yaml(msg.vehicletype, out, indentation + 2);
  }

  // member: snapshots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.snapshots.size() == 0) {
      out << "snapshots: []\n";
    } else {
      out << "snapshots:\n";
      for (auto item : msg.snapshots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PVD & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PVD>()
{
  return "v2x_msg::msg::PVD";
}

template<>
inline const char * name<v2x_msg::msg::PVD>()
{
  return "v2x_msg/msg/PVD";
}

template<>
struct has_fixed_size<v2x_msg::msg::PVD>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::PVD>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::PVD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PVD__TRAITS_HPP_
