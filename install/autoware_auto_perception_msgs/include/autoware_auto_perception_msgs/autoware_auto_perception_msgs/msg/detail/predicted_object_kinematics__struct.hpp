// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'initial_pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'initial_twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'initial_acceleration_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"
// Member 'predicted_paths'
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__PredictedObjectKinematics __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__PredictedObjectKinematics __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PredictedObjectKinematics_
{
  using Type = PredictedObjectKinematics_<ContainerAllocator>;

  explicit PredictedObjectKinematics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pose_with_covariance(_init),
    initial_twist_with_covariance(_init),
    initial_acceleration_with_covariance(_init)
  {
    (void)_init;
  }

  explicit PredictedObjectKinematics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pose_with_covariance(_alloc, _init),
    initial_twist_with_covariance(_alloc, _init),
    initial_acceleration_with_covariance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _initial_pose_with_covariance_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _initial_pose_with_covariance_type initial_pose_with_covariance;
  using _initial_twist_with_covariance_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _initial_twist_with_covariance_type initial_twist_with_covariance;
  using _initial_acceleration_with_covariance_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _initial_acceleration_with_covariance_type initial_acceleration_with_covariance;
  using _predicted_paths_type =
    rosidl_runtime_cpp::BoundedVector<autoware_auto_perception_msgs::msg::PredictedPath_<ContainerAllocator>, 100, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::PredictedPath_<ContainerAllocator>>>;
  _predicted_paths_type predicted_paths;

  // setters for named parameter idiom
  Type & set__initial_pose_with_covariance(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->initial_pose_with_covariance = _arg;
    return *this;
  }
  Type & set__initial_twist_with_covariance(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->initial_twist_with_covariance = _arg;
    return *this;
  }
  Type & set__initial_acceleration_with_covariance(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->initial_acceleration_with_covariance = _arg;
    return *this;
  }
  Type & set__predicted_paths(
    const rosidl_runtime_cpp::BoundedVector<autoware_auto_perception_msgs::msg::PredictedPath_<ContainerAllocator>, 100, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::PredictedPath_<ContainerAllocator>>> & _arg)
  {
    this->predicted_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__PredictedObjectKinematics
    std::shared_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__PredictedObjectKinematics
    std::shared_ptr<autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PredictedObjectKinematics_ & other) const
  {
    if (this->initial_pose_with_covariance != other.initial_pose_with_covariance) {
      return false;
    }
    if (this->initial_twist_with_covariance != other.initial_twist_with_covariance) {
      return false;
    }
    if (this->initial_acceleration_with_covariance != other.initial_acceleration_with_covariance) {
      return false;
    }
    if (this->predicted_paths != other.predicted_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const PredictedObjectKinematics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PredictedObjectKinematics_

// alias to use template instance with default allocator
using PredictedObjectKinematics =
  autoware_auto_perception_msgs::msg::PredictedObjectKinematics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__STRUCT_HPP_
