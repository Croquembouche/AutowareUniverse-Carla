// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'path'
#include "v2x_msg/msg/detail/offset_system__struct.hpp"
// Member 'geometry'
#include "v2x_msg/msg/detail/geometric_projection__struct.hpp"
// Member 'oldregion'
#include "v2x_msg/msg/detail/valid_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Description __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Description __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Description_
{
  using Type = Description_<ContainerAllocator>;

  explicit Description_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init),
    geometry(_init),
    oldregion(_init)
  {
    (void)_init;
  }

  explicit Description_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    geometry(_alloc, _init),
    oldregion(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_type =
    v2x_msg::msg::OffsetSystem_<ContainerAllocator>;
  _path_type path;
  using _geometry_type =
    v2x_msg::msg::GeometricProjection_<ContainerAllocator>;
  _geometry_type geometry;
  using _oldregion_type =
    v2x_msg::msg::ValidRegion_<ContainerAllocator>;
  _oldregion_type oldregion;

  // setters for named parameter idiom
  Type & set__path(
    const v2x_msg::msg::OffsetSystem_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__geometry(
    const v2x_msg::msg::GeometricProjection_<ContainerAllocator> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }
  Type & set__oldregion(
    const v2x_msg::msg::ValidRegion_<ContainerAllocator> & _arg)
  {
    this->oldregion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Description_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Description_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Description_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Description_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Description_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Description_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Description_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Description_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Description_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Description_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Description
    std::shared_ptr<v2x_msg::msg::Description_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Description
    std::shared_ptr<v2x_msg::msg::Description_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Description_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->geometry != other.geometry) {
      return false;
    }
    if (this->oldregion != other.oldregion) {
      return false;
    }
    return true;
  }
  bool operator!=(const Description_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Description_

// alias to use template instance with default allocator
using Description =
  v2x_msg::msg::Description_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_
