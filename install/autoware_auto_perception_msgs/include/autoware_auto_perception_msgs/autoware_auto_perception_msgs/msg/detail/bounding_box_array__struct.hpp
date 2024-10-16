// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'boxes'
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBoxArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBoxArray __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxArray_
{
  using Type = BoundingBoxArray_<ContainerAllocator>;

  explicit BoundingBoxArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit BoundingBoxArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _boxes_type =
    rosidl_runtime_cpp::BoundedVector<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>, 256, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>>;
  _boxes_type boxes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__boxes(
    const rosidl_runtime_cpp::BoundedVector<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>, 256, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>> & _arg)
  {
    this->boxes = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAPACITY =
    256u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBoxArray
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBoxArray
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBoxArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->boxes != other.boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxArray_

// alias to use template instance with default allocator
using BoundingBoxArray =
  autoware_auto_perception_msgs::msg::BoundingBoxArray_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBoxArray_<ContainerAllocator>::CAPACITY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__STRUCT_HPP_
