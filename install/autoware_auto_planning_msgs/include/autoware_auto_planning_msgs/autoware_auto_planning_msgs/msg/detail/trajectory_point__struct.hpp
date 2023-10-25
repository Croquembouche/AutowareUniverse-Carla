// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__TrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__TrajectoryPoint __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPoint_
{
  using Type = TrajectoryPoint_<ContainerAllocator>;

  explicit TrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->acceleration_mps2 = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->acceleration_mps2 = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    }
  }

  explicit TrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->acceleration_mps2 = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->longitudinal_velocity_mps = 0.0f;
      this->lateral_velocity_mps = 0.0f;
      this->acceleration_mps2 = 0.0f;
      this->heading_rate_rps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    }
  }

  // field types and members
  using _time_from_start_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _longitudinal_velocity_mps_type =
    float;
  _longitudinal_velocity_mps_type longitudinal_velocity_mps;
  using _lateral_velocity_mps_type =
    float;
  _lateral_velocity_mps_type lateral_velocity_mps;
  using _acceleration_mps2_type =
    float;
  _acceleration_mps2_type acceleration_mps2;
  using _heading_rate_rps_type =
    float;
  _heading_rate_rps_type heading_rate_rps;
  using _front_wheel_angle_rad_type =
    float;
  _front_wheel_angle_rad_type front_wheel_angle_rad;
  using _rear_wheel_angle_rad_type =
    float;
  _rear_wheel_angle_rad_type rear_wheel_angle_rad;

  // setters for named parameter idiom
  Type & set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }
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
  Type & set__acceleration_mps2(
    const float & _arg)
  {
    this->acceleration_mps2 = _arg;
    return *this;
  }
  Type & set__heading_rate_rps(
    const float & _arg)
  {
    this->heading_rate_rps = _arg;
    return *this;
  }
  Type & set__front_wheel_angle_rad(
    const float & _arg)
  {
    this->front_wheel_angle_rad = _arg;
    return *this;
  }
  Type & set__rear_wheel_angle_rad(
    const float & _arg)
  {
    this->rear_wheel_angle_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__TrajectoryPoint
    std::shared_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__TrajectoryPoint
    std::shared_ptr<autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPoint_ & other) const
  {
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->longitudinal_velocity_mps != other.longitudinal_velocity_mps) {
      return false;
    }
    if (this->lateral_velocity_mps != other.lateral_velocity_mps) {
      return false;
    }
    if (this->acceleration_mps2 != other.acceleration_mps2) {
      return false;
    }
    if (this->heading_rate_rps != other.heading_rate_rps) {
      return false;
    }
    if (this->front_wheel_angle_rad != other.front_wheel_angle_rad) {
      return false;
    }
    if (this->rear_wheel_angle_rad != other.rear_wheel_angle_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPoint_

// alias to use template instance with default allocator
using TrajectoryPoint =
  autoware_auto_planning_msgs::msg::TrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
