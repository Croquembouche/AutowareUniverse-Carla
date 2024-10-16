// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__DetectedObjectKinematics __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__DetectedObjectKinematics __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectKinematics_
{
  using Type = DetectedObjectKinematics_<ContainerAllocator>;

  explicit DetectedObjectKinematics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_init),
    twist_with_covariance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_position_covariance = false;
      this->orientation_availability = 0;
      this->has_twist = false;
      this->has_twist_covariance = false;
    }
  }

  explicit DetectedObjectKinematics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_alloc, _init),
    twist_with_covariance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_position_covariance = false;
      this->orientation_availability = 0;
      this->has_twist = false;
      this->has_twist_covariance = false;
    }
  }

  // field types and members
  using _pose_with_covariance_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_with_covariance_type pose_with_covariance;
  using _has_position_covariance_type =
    bool;
  _has_position_covariance_type has_position_covariance;
  using _orientation_availability_type =
    uint8_t;
  _orientation_availability_type orientation_availability;
  using _twist_with_covariance_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_with_covariance_type twist_with_covariance;
  using _has_twist_type =
    bool;
  _has_twist_type has_twist;
  using _has_twist_covariance_type =
    bool;
  _has_twist_covariance_type has_twist_covariance;

  // setters for named parameter idiom
  Type & set__pose_with_covariance(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose_with_covariance = _arg;
    return *this;
  }
  Type & set__has_position_covariance(
    const bool & _arg)
  {
    this->has_position_covariance = _arg;
    return *this;
  }
  Type & set__orientation_availability(
    const uint8_t & _arg)
  {
    this->orientation_availability = _arg;
    return *this;
  }
  Type & set__twist_with_covariance(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist_with_covariance = _arg;
    return *this;
  }
  Type & set__has_twist(
    const bool & _arg)
  {
    this->has_twist = _arg;
    return *this;
  }
  Type & set__has_twist_covariance(
    const bool & _arg)
  {
    this->has_twist_covariance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SIGN_UNKNOWN =
    1u;
  static constexpr uint8_t AVAILABLE =
    2u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__DetectedObjectKinematics
    std::shared_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__DetectedObjectKinematics
    std::shared_ptr<autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectKinematics_ & other) const
  {
    if (this->pose_with_covariance != other.pose_with_covariance) {
      return false;
    }
    if (this->has_position_covariance != other.has_position_covariance) {
      return false;
    }
    if (this->orientation_availability != other.orientation_availability) {
      return false;
    }
    if (this->twist_with_covariance != other.twist_with_covariance) {
      return false;
    }
    if (this->has_twist != other.has_twist) {
      return false;
    }
    if (this->has_twist_covariance != other.has_twist_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectKinematics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectKinematics_

// alias to use template instance with default allocator
using DetectedObjectKinematics =
  autoware_auto_perception_msgs::msg::DetectedObjectKinematics_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectKinematics_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectKinematics_<ContainerAllocator>::SIGN_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectKinematics_<ContainerAllocator>::AVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__STRUCT_HPP_
