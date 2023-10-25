// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_HPP_

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
// Member 'lateral'
#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
// Member 'longitudinal'
#include "autoware_auto_control_msgs/msg/detail/longitudinal_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_control_msgs__msg__AckermannControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_control_msgs__msg__AckermannControlCommand __declspec(deprecated)
#endif

namespace autoware_auto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AckermannControlCommand_
{
  using Type = AckermannControlCommand_<ContainerAllocator>;

  explicit AckermannControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    lateral(_init),
    longitudinal(_init)
  {
    (void)_init;
  }

  explicit AckermannControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    lateral(_alloc, _init),
    longitudinal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _lateral_type =
    autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator>;
  _lateral_type lateral;
  using _longitudinal_type =
    autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator>;
  _longitudinal_type longitudinal;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__lateral(
    const autoware_auto_control_msgs::msg::AckermannLateralCommand_<ContainerAllocator> & _arg)
  {
    this->lateral = _arg;
    return *this;
  }
  Type & set__longitudinal(
    const autoware_auto_control_msgs::msg::LongitudinalCommand_<ContainerAllocator> & _arg)
  {
    this->longitudinal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_control_msgs__msg__AckermannControlCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_control_msgs__msg__AckermannControlCommand
    std::shared_ptr<autoware_auto_control_msgs::msg::AckermannControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AckermannControlCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->lateral != other.lateral) {
      return false;
    }
    if (this->longitudinal != other.longitudinal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AckermannControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AckermannControlCommand_

// alias to use template instance with default allocator
using AckermannControlCommand =
  autoware_auto_control_msgs::msg::AckermannControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_control_msgs

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_HPP_
