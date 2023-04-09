// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AREA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'shapepointset'
#include "v2x_msg/msg/detail/shape_point_set__struct.hpp"
// Member 'cirle'
#include "v2x_msg/msg/detail/circle__struct.hpp"
// Member 'regionpointset'
#include "v2x_msg/msg/detail/region_point_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Area __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Area __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Area_
{
  using Type = Area_<ContainerAllocator>;

  explicit Area_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shapepointset(_init),
    cirle(_init),
    regionpointset(_init)
  {
    (void)_init;
  }

  explicit Area_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shapepointset(_alloc, _init),
    cirle(_alloc, _init),
    regionpointset(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _shapepointset_type =
    v2x_msg::msg::ShapePointSet_<ContainerAllocator>;
  _shapepointset_type shapepointset;
  using _cirle_type =
    v2x_msg::msg::Circle_<ContainerAllocator>;
  _cirle_type cirle;
  using _regionpointset_type =
    v2x_msg::msg::RegionPointSet_<ContainerAllocator>;
  _regionpointset_type regionpointset;

  // setters for named parameter idiom
  Type & set__shapepointset(
    const v2x_msg::msg::ShapePointSet_<ContainerAllocator> & _arg)
  {
    this->shapepointset = _arg;
    return *this;
  }
  Type & set__cirle(
    const v2x_msg::msg::Circle_<ContainerAllocator> & _arg)
  {
    this->cirle = _arg;
    return *this;
  }
  Type & set__regionpointset(
    const v2x_msg::msg::RegionPointSet_<ContainerAllocator> & _arg)
  {
    this->regionpointset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Area_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Area_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Area_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Area_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Area_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Area_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Area_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Area_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Area_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Area_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Area
    std::shared_ptr<v2x_msg::msg::Area_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Area
    std::shared_ptr<v2x_msg::msg::Area_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_ & other) const
  {
    if (this->shapepointset != other.shapepointset) {
      return false;
    }
    if (this->cirle != other.cirle) {
      return false;
    }
    if (this->regionpointset != other.regionpointset) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_

// alias to use template instance with default allocator
using Area =
  v2x_msg::msg::Area_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__AREA__STRUCT_HPP_
