// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ShapePointSet __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ShapePointSet __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShapePointSet_
{
  using Type = ShapePointSet_<ContainerAllocator>;

  explicit ShapePointSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : anchor(_init),
    nodelist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanewidth = 0ll;
      this->directionality = 0ll;
    }
  }

  explicit ShapePointSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : anchor(_alloc, _init),
    nodelist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanewidth = 0ll;
      this->directionality = 0ll;
    }
  }

  // field types and members
  using _anchor_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _anchor_type anchor;
  using _lanewidth_type =
    int64_t;
  _lanewidth_type lanewidth;
  using _directionality_type =
    int64_t;
  _directionality_type directionality;
  using _nodelist_type =
    v2x_msg::msg::NodeListXY_<ContainerAllocator>;
  _nodelist_type nodelist;

  // setters for named parameter idiom
  Type & set__anchor(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->anchor = _arg;
    return *this;
  }
  Type & set__lanewidth(
    const int64_t & _arg)
  {
    this->lanewidth = _arg;
    return *this;
  }
  Type & set__directionality(
    const int64_t & _arg)
  {
    this->directionality = _arg;
    return *this;
  }
  Type & set__nodelist(
    const v2x_msg::msg::NodeListXY_<ContainerAllocator> & _arg)
  {
    this->nodelist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ShapePointSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ShapePointSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ShapePointSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ShapePointSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ShapePointSet
    std::shared_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ShapePointSet
    std::shared_ptr<v2x_msg::msg::ShapePointSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShapePointSet_ & other) const
  {
    if (this->anchor != other.anchor) {
      return false;
    }
    if (this->lanewidth != other.lanewidth) {
      return false;
    }
    if (this->directionality != other.directionality) {
      return false;
    }
    if (this->nodelist != other.nodelist) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShapePointSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShapePointSet_

// alias to use template instance with default allocator
using ShapePointSet =
  v2x_msg::msg::ShapePointSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_HPP_
