// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/OrderMovement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__OrderMovement __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__OrderMovement __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrderMovement_
{
  using Type = OrderMovement_<ContainerAllocator>;

  explicit OrderMovement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->order_movement = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->order_movement = 0;
    }
  }

  explicit OrderMovement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->order_movement = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->order_movement = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _order_movement_type =
    uint8_t;
  _order_movement_type order_movement;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__order_movement(
    const uint8_t & _arg)
  {
    this->order_movement = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOTSET =
    0u;
  static constexpr uint8_t STOP =
    1u;
  static constexpr uint8_t GO =
    2u;
  static constexpr uint8_t SLOWDOWN =
    3u;

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__OrderMovement
    std::shared_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__OrderMovement
    std::shared_ptr<autoware_auto_planning_msgs::msg::OrderMovement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderMovement_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->order_movement != other.order_movement) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderMovement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderMovement_

// alias to use template instance with default allocator
using OrderMovement =
  autoware_auto_planning_msgs::msg::OrderMovement_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrderMovement_<ContainerAllocator>::NOTSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrderMovement_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrderMovement_<ContainerAllocator>::GO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrderMovement_<ContainerAllocator>::SLOWDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_HPP_
