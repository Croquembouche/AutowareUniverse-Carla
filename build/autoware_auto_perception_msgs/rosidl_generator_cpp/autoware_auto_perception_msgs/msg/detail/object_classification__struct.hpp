// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__ObjectClassification __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__ObjectClassification __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectClassification_
{
  using Type = ObjectClassification_<ContainerAllocator>;

  explicit ObjectClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->probability = 0.0f;
    }
  }

  explicit ObjectClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->probability = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    uint8_t;
  _label_type label;
  using _probability_type =
    float;
  _probability_type probability;

  // setters for named parameter idiom
  Type & set__label(
    const uint8_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CAR =
    1u;
  static constexpr uint8_t TRUCK =
    2u;
  static constexpr uint8_t BUS =
    3u;
  static constexpr uint8_t TRAILER =
    4u;
  static constexpr uint8_t MOTORCYCLE =
    5u;
  static constexpr uint8_t BICYCLE =
    6u;
  static constexpr uint8_t PEDESTRIAN =
    7u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__ObjectClassification
    std::shared_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__ObjectClassification
    std::shared_ptr<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectClassification_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectClassification_

// alias to use template instance with default allocator
using ObjectClassification =
  autoware_auto_perception_msgs::msg::ObjectClassification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_
