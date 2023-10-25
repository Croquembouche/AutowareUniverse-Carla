// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapSegment __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapSegment __declspec(deprecated)
#endif

namespace autoware_auto_mapping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HADMapSegment_
{
  using Type = HADMapSegment_<ContainerAllocator>;

  explicit HADMapSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preferred_primitive_id = 0ll;
    }
  }

  explicit HADMapSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preferred_primitive_id = 0ll;
    }
  }

  // field types and members
  using _primitives_type =
    std::vector<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>>;
  _primitives_type primitives;
  using _preferred_primitive_id_type =
    int64_t;
  _preferred_primitive_id_type preferred_primitive_id;

  // setters for named parameter idiom
  Type & set__primitives(
    const std::vector<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__preferred_primitive_id(
    const int64_t & _arg)
  {
    this->preferred_primitive_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapSegment
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_mapping_msgs__msg__HADMapSegment
    std::shared_ptr<autoware_auto_mapping_msgs::msg::HADMapSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HADMapSegment_ & other) const
  {
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->preferred_primitive_id != other.preferred_primitive_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const HADMapSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HADMapSegment_

// alias to use template instance with default allocator
using HADMapSegment =
  autoware_auto_mapping_msgs::msg::HADMapSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__STRUCT_HPP_
