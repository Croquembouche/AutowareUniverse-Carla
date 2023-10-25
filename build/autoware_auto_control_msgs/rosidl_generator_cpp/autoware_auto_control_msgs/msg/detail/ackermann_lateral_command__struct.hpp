// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_control_msgs__msg__AckermannLateralCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_control_msgs__msg__AckermannLateralCommand __declspec(deprecated)
#endif

namespace autoware_auto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AckermannLateralCommand_
{
  using Type = AckermannLateralCommand_<ContainerAllocator>;

  explicit AckermannLateralCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->steering_tire_angle = 0.0f;
      this->steering_tire_rotation_rate = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->steering_tire_angle = 0.0f;
      this->steering_tire_rotation_rate = 0.0f;
    }
  }

  explicit AckermannLateralCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->steering_tire_angle = 0.0f;
      this->steering_tire_rotation_rate = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->steering_tire_angle = 0.0f;
      this->steering_tire_rotation_rate = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _steering_tire_angle_type =
    float;
  _steering_tire_angle_type steering_tire_angle;
  using _steering_tire_rotation_rate_type =
    float;
  _steering_tire_rotation_rate_type steering_tire_rotation_rate;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__steering_tire_angle(
    const float & _arg)
  {
    this->steering_tire_angle = _arg;
    return *this;
  }
  Type & set__steering_tire_rotation_rate(
    const float & _arg)
  {
    this->steering_tire_rotation_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_control_msgs__msg__AckermannLateralCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_control_msgs__msg__AckermannLateralCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AckermannLateralCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->steering_tire_angle != other.steering_tire_angle) {
      return false;
    }
    if (this->steering_tire_rotation_rate != other.steering_tire_rotation_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const AckermannLateralCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AckermannLateralCommand_

// alias to use template instance with default allocator
using AckermannLateralCommand =
  autoware_auto_control_msgs::msg::AckermannLateralCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_HPP_
