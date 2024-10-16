// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrafficLight __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLight_
{
  using Type = TrafficLight_<ContainerAllocator>;

  explicit TrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    }
  }

  explicit TrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _shape_type =
    uint8_t;
  _shape_type shape;
  using _status_type =
    uint8_t;
  _status_type status;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__shape(
    const uint8_t & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RED =
    1u;
  static constexpr uint8_t AMBER =
    2u;
  static constexpr uint8_t GREEN =
    3u;
  static constexpr uint8_t WHITE =
    4u;
  static constexpr uint8_t CIRCLE =
    5u;
  static constexpr uint8_t LEFT_ARROW =
    6u;
  static constexpr uint8_t RIGHT_ARROW =
    7u;
  static constexpr uint8_t UP_ARROW =
    8u;
  static constexpr uint8_t DOWN_ARROW =
    9u;
  static constexpr uint8_t DOWN_LEFT_ARROW =
    10u;
  static constexpr uint8_t DOWN_RIGHT_ARROW =
    11u;
  static constexpr uint8_t CROSS =
    12u;
  static constexpr uint8_t SOLID_OFF =
    13u;
  static constexpr uint8_t SOLID_ON =
    14u;
  static constexpr uint8_t FLASHING =
    15u;
  static constexpr uint8_t UNKNOWN =
    16u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrafficLight
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrafficLight
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLight_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLight_

// alias to use template instance with default allocator
using TrafficLight =
  autoware_auto_perception_msgs::msg::TrafficLight_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::AMBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::UP_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::DOWN_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::DOWN_LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::DOWN_RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::CROSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::SOLID_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::SOLID_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::FLASHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLight_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
