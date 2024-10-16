// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__Shape __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__Shape __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shape_
{
  using Type = Shape_<ContainerAllocator>;

  explicit Shape_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_init),
    dimensions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit Shape_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_alloc, _init),
    dimensions(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _footprint_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _footprint_type footprint;
  using _dimensions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _dimensions_type dimensions;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__footprint(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->footprint = _arg;
    return *this;
  }
  Type & set__dimensions(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BOUNDING_BOX =
    0u;
  static constexpr uint8_t CYLINDER =
    1u;
  static constexpr uint8_t POLYGON =
    2u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__Shape
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__Shape
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shape_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->footprint != other.footprint) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shape_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shape_

// alias to use template instance with default allocator
using Shape =
  autoware_auto_perception_msgs::msg::Shape_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shape_<ContainerAllocator>::BOUNDING_BOX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shape_<ContainerAllocator>::CYLINDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shape_<ContainerAllocator>::POLYGON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_
