// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_control_msgs:msg/LongitudinalCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_control_msgs__msg__LongitudinalCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_control_msgs__msg__LongitudinalCommand __declspec(deprecated)
#endif

namespace autoware_auto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LongitudinalCommand_
{
  using Type = LongitudinalCommand_<ContainerAllocator>;

  explicit LongitudinalCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->speed = 0.0f;
      this->acceleration = 0.0f;
      this->jerk = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->speed = 0.0f;
      this->acceleration = 0.0f;
      this->jerk = 0.0f;
    }
  }

  explicit LongitudinalCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->speed = 0.0f;
      this->acceleration = 0.0f;
      this->jerk = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->speed = 0.0f;
      this->acceleration = 0.0f;
      this->jerk = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _speed_type =
    float;
  _speed_type speed;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _jerk_type =
    float;
  _jerk_type jerk;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const float & _arg)
  {
    this->jerk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_control_msgs__msg__LongitudinalCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_control_msgs__msg__LongitudinalCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LongitudinalCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    return true;
  }
  bool operator!=(const LongitudinalCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LongitudinalCommand_

// alias to use template instance with default allocator
using LongitudinalCommand =
  autoware_auto_control_msgs::msg::LongitudinalCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL_COMMAND__STRUCT_HPP_
