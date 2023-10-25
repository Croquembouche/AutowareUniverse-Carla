// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->is_final = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->is_final = false;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->is_final = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->is_final = false;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _longitudinal_velocity_mps_type =
    float;
  _longitudinal_velocity_mps_type longitudinal_velocity_mps;
  using _lateral_velocity_mps_type =
    float;
  _lateral_velocity_mps_type lateral_velocity_mps;
  using _heading_rate_rps_type =
    float;
  _heading_rate_rps_type heading_rate_rps;
  using _is_final_type =
    bool;
  _is_final_type is_final;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__longitudinal_velocity_mps(
    const float & _arg)
  {
    this->longitudinal_velocity_mps = _arg;
    return *this;
  }
  Type & set__lateral_velocity_mps(
    const float & _arg)
  {
    this->lateral_velocity_mps = _arg;
    return *this;
  }
  Type & set__heading_rate_rps(
    const float & _arg)
  {
    this->heading_rate_rps = _arg;
    return *this;
  }
  Type & set__is_final(
    const bool & _arg)
  {
    this->is_final = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathPoint
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathPoint
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->longitudinal_velocity_mps != other.longitudinal_velocity_mps) {
      return false;
    }
    if (this->lateral_velocity_mps != other.lateral_velocity_mps) {
      return false;
    }
    if (this->heading_rate_rps != other.heading_rate_rps) {
      return false;
    }
    if (this->is_final != other.is_final) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  autoware_auto_planning_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
