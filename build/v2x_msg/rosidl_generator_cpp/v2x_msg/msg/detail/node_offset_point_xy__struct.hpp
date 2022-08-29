// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nodexy1'
#include "v2x_msg/msg/detail/node_xy22b__struct.hpp"
// Member 'nodexy2'
#include "v2x_msg/msg/detail/node_xy24b__struct.hpp"
// Member 'nodexy3'
#include "v2x_msg/msg/detail/node_xy26b__struct.hpp"
// Member 'nodexy4'
#include "v2x_msg/msg/detail/node_xy28b__struct.hpp"
// Member 'nodexy5'
#include "v2x_msg/msg/detail/node_xy32b__struct.hpp"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NodeOffsetPointXY __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NodeOffsetPointXY __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeOffsetPointXY_
{
  using Type = NodeOffsetPointXY_<ContainerAllocator>;

  explicit NodeOffsetPointXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodexy1(_init),
    nodexy2(_init),
    nodexy3(_init),
    nodexy4(_init),
    nodexy5(_init),
    nodelatlon(_init)
  {
    (void)_init;
  }

  explicit NodeOffsetPointXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodexy1(_alloc, _init),
    nodexy2(_alloc, _init),
    nodexy3(_alloc, _init),
    nodexy4(_alloc, _init),
    nodexy5(_alloc, _init),
    nodelatlon(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nodexy1_type =
    v2x_msg::msg::NodeXY22b_<ContainerAllocator>;
  _nodexy1_type nodexy1;
  using _nodexy2_type =
    v2x_msg::msg::NodeXY24b_<ContainerAllocator>;
  _nodexy2_type nodexy2;
  using _nodexy3_type =
    v2x_msg::msg::NodeXY26b_<ContainerAllocator>;
  _nodexy3_type nodexy3;
  using _nodexy4_type =
    v2x_msg::msg::NodeXY28b_<ContainerAllocator>;
  _nodexy4_type nodexy4;
  using _nodexy5_type =
    v2x_msg::msg::NodeXY32b_<ContainerAllocator>;
  _nodexy5_type nodexy5;
  using _nodelatlon_type =
    v2x_msg::msg::Nodellmd64b_<ContainerAllocator>;
  _nodelatlon_type nodelatlon;

  // setters for named parameter idiom
  Type & set__nodexy1(
    const v2x_msg::msg::NodeXY22b_<ContainerAllocator> & _arg)
  {
    this->nodexy1 = _arg;
    return *this;
  }
  Type & set__nodexy2(
    const v2x_msg::msg::NodeXY24b_<ContainerAllocator> & _arg)
  {
    this->nodexy2 = _arg;
    return *this;
  }
  Type & set__nodexy3(
    const v2x_msg::msg::NodeXY26b_<ContainerAllocator> & _arg)
  {
    this->nodexy3 = _arg;
    return *this;
  }
  Type & set__nodexy4(
    const v2x_msg::msg::NodeXY28b_<ContainerAllocator> & _arg)
  {
    this->nodexy4 = _arg;
    return *this;
  }
  Type & set__nodexy5(
    const v2x_msg::msg::NodeXY32b_<ContainerAllocator> & _arg)
  {
    this->nodexy5 = _arg;
    return *this;
  }
  Type & set__nodelatlon(
    const v2x_msg::msg::Nodellmd64b_<ContainerAllocator> & _arg)
  {
    this->nodelatlon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NodeOffsetPointXY
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NodeOffsetPointXY
    std::shared_ptr<v2x_msg::msg::NodeOffsetPointXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeOffsetPointXY_ & other) const
  {
    if (this->nodexy1 != other.nodexy1) {
      return false;
    }
    if (this->nodexy2 != other.nodexy2) {
      return false;
    }
    if (this->nodexy3 != other.nodexy3) {
      return false;
    }
    if (this->nodexy4 != other.nodexy4) {
      return false;
    }
    if (this->nodexy5 != other.nodexy5) {
      return false;
    }
    if (this->nodelatlon != other.nodelatlon) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeOffsetPointXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeOffsetPointXY_

// alias to use template instance with default allocator
using NodeOffsetPointXY =
  v2x_msg::msg::NodeOffsetPointXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
