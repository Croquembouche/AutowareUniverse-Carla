// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityFactor_
{
  using Type = VelocityFactor_<ContainerAllocator>;

  explicit VelocityFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->type = 0;
      this->status = 0;
      this->detail = "";
    }
  }

  explicit VelocityFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->type = 0;
      this->status = 0;
      this->detail = "";
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _distance_type =
    float;
  _distance_type distance;
  using _type_type =
    uint16_t;
  _type_type type;
  using _status_type =
    uint16_t;
  _status_type status;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNKNOWN =
    0u;
  static constexpr uint16_t SURROUNDING_OBSTACLE =
    1u;
  static constexpr uint16_t ROUTE_OBSTACLE =
    2u;
  static constexpr uint16_t INTERSECTION =
    3u;
  static constexpr uint16_t CROSSWALK =
    4u;
  static constexpr uint16_t REAR_CHECK =
    5u;
  static constexpr uint16_t USER_DEFINED_DETECTION_AREA =
    6u;
  static constexpr uint16_t NO_STOPPING_AREA =
    7u;
  static constexpr uint16_t STOP_SIGN =
    8u;
  static constexpr uint16_t TRAFFIC_SIGNAL =
    9u;
  static constexpr uint16_t V2I_GATE_CONTROL_ENTER =
    10u;
  static constexpr uint16_t V2I_GATE_CONTROL_LEAVE =
    11u;
  static constexpr uint16_t MERGE =
    12u;
  static constexpr uint16_t SIDEWALK =
    13u;
  static constexpr uint16_t LANE_CHANGE =
    14u;
  static constexpr uint16_t AVOIDANCE =
    15u;
  static constexpr uint16_t EMERGENCY_STOP_OPERATION =
    16u;
  static constexpr uint16_t APPROACHING =
    1u;
  static constexpr uint16_t STOPPED =
    2u;

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VelocityFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VelocityFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityFactor_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityFactor_

// alias to use template instance with default allocator
using VelocityFactor =
  autoware_adapi_v1_msgs::msg::VelocityFactor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::SURROUNDING_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::ROUTE_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::INTERSECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::CROSSWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::REAR_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::USER_DEFINED_DETECTION_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::NO_STOPPING_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::STOP_SIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::TRAFFIC_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::V2I_GATE_CONTROL_ENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::V2I_GATE_CONTROL_LEAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::MERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::SIDEWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::LANE_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::AVOIDANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::EMERGENCY_STOP_OPERATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::APPROACHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VelocityFactor_<ContainerAllocator>::STOPPED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_HPP_
