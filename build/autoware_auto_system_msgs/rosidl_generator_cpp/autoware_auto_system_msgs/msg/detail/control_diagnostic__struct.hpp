// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__ControlDiagnostic __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__ControlDiagnostic __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlDiagnostic_
{
  using Type = ControlDiagnostic_<ContainerAllocator>;

  explicit ControlDiagnostic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diag_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_trajectory = false;
      this->trajectory_source = "";
      this->pose_source = "";
      this->lateral_error_m = 0.0f;
      this->longitudinal_error_m = 0.0f;
      this->velocity_error_mps = 0.0f;
      this->acceleration_error_mps2 = 0.0f;
      this->yaw_error_rad = 0.0f;
      this->yaw_rate_error_rps = 0.0f;
    }
  }

  explicit ControlDiagnostic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diag_header(_alloc, _init),
    trajectory_source(_alloc),
    pose_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_trajectory = false;
      this->trajectory_source = "";
      this->pose_source = "";
      this->lateral_error_m = 0.0f;
      this->longitudinal_error_m = 0.0f;
      this->velocity_error_mps = 0.0f;
      this->acceleration_error_mps2 = 0.0f;
      this->yaw_error_rad = 0.0f;
      this->yaw_rate_error_rps = 0.0f;
    }
  }

  // field types and members
  using _diag_header_type =
    autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>;
  _diag_header_type diag_header;
  using _new_trajectory_type =
    bool;
  _new_trajectory_type new_trajectory;
  using _trajectory_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trajectory_source_type trajectory_source;
  using _pose_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_source_type pose_source;
  using _lateral_error_m_type =
    float;
  _lateral_error_m_type lateral_error_m;
  using _longitudinal_error_m_type =
    float;
  _longitudinal_error_m_type longitudinal_error_m;
  using _velocity_error_mps_type =
    float;
  _velocity_error_mps_type velocity_error_mps;
  using _acceleration_error_mps2_type =
    float;
  _acceleration_error_mps2_type acceleration_error_mps2;
  using _yaw_error_rad_type =
    float;
  _yaw_error_rad_type yaw_error_rad;
  using _yaw_rate_error_rps_type =
    float;
  _yaw_rate_error_rps_type yaw_rate_error_rps;

  // setters for named parameter idiom
  Type & set__diag_header(
    const autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> & _arg)
  {
    this->diag_header = _arg;
    return *this;
  }
  Type & set__new_trajectory(
    const bool & _arg)
  {
    this->new_trajectory = _arg;
    return *this;
  }
  Type & set__trajectory_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trajectory_source = _arg;
    return *this;
  }
  Type & set__pose_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose_source = _arg;
    return *this;
  }
  Type & set__lateral_error_m(
    const float & _arg)
  {
    this->lateral_error_m = _arg;
    return *this;
  }
  Type & set__longitudinal_error_m(
    const float & _arg)
  {
    this->longitudinal_error_m = _arg;
    return *this;
  }
  Type & set__velocity_error_mps(
    const float & _arg)
  {
    this->velocity_error_mps = _arg;
    return *this;
  }
  Type & set__acceleration_error_mps2(
    const float & _arg)
  {
    this->acceleration_error_mps2 = _arg;
    return *this;
  }
  Type & set__yaw_error_rad(
    const float & _arg)
  {
    this->yaw_error_rad = _arg;
    return *this;
  }
  Type & set__yaw_rate_error_rps(
    const float & _arg)
  {
    this->yaw_rate_error_rps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__ControlDiagnostic
    std::shared_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__ControlDiagnostic
    std::shared_ptr<autoware_auto_system_msgs::msg::ControlDiagnostic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlDiagnostic_ & other) const
  {
    if (this->diag_header != other.diag_header) {
      return false;
    }
    if (this->new_trajectory != other.new_trajectory) {
      return false;
    }
    if (this->trajectory_source != other.trajectory_source) {
      return false;
    }
    if (this->pose_source != other.pose_source) {
      return false;
    }
    if (this->lateral_error_m != other.lateral_error_m) {
      return false;
    }
    if (this->longitudinal_error_m != other.longitudinal_error_m) {
      return false;
    }
    if (this->velocity_error_mps != other.velocity_error_mps) {
      return false;
    }
    if (this->acceleration_error_mps2 != other.acceleration_error_mps2) {
      return false;
    }
    if (this->yaw_error_rad != other.yaw_error_rad) {
      return false;
    }
    if (this->yaw_rate_error_rps != other.yaw_rate_error_rps) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlDiagnostic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlDiagnostic_

// alias to use template instance with default allocator
using ControlDiagnostic =
  autoware_auto_system_msgs::msg::ControlDiagnostic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_HPP_
