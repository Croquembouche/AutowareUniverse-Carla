// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.hpp"
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrackedObject __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrackedObject __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObject_
{
  using Type = TrackedObject_<ContainerAllocator>;

  explicit TrackedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_init),
    kinematics(_init),
    shape(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->existence_probability = 0.0f;
    }
  }

  explicit TrackedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc, _init),
    kinematics(_alloc, _init),
    shape(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->existence_probability = 0.0f;
    }
  }

  // field types and members
  using _object_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _object_id_type object_id;
  using _existence_probability_type =
    float;
  _existence_probability_type existence_probability;
  using _classification_type =
    std::vector<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>>;
  _classification_type classification;
  using _kinematics_type =
    autoware_auto_perception_msgs::msg::TrackedObjectKinematics_<ContainerAllocator>;
  _kinematics_type kinematics;
  using _shape_type =
    autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>;
  _shape_type shape;

  // setters for named parameter idiom
  Type & set__object_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__existence_probability(
    const float & _arg)
  {
    this->existence_probability = _arg;
    return *this;
  }
  Type & set__classification(
    const std::vector<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__kinematics(
    const autoware_auto_perception_msgs::msg::TrackedObjectKinematics_<ContainerAllocator> & _arg)
  {
    this->kinematics = _arg;
    return *this;
  }
  Type & set__shape(
    const autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrackedObject
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrackedObject
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrackedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObject_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->existence_probability != other.existence_probability) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->kinematics != other.kinematics) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObject_

// alias to use template instance with default allocator
using TrackedObject =
  autoware_auto_perception_msgs::msg::TrackedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
