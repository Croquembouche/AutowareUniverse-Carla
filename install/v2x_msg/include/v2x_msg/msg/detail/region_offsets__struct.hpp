// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RegionOffsets __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RegionOffsets __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegionOffsets_
{
  using Type = RegionOffsets_<ContainerAllocator>;

  explicit RegionOffsets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0ll;
      this->yoffset = 0ll;
      this->zoffset = 0ll;
    }
  }

  explicit RegionOffsets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xoffset = 0ll;
      this->yoffset = 0ll;
      this->zoffset = 0ll;
    }
  }

  // field types and members
  using _xoffset_type =
    int64_t;
  _xoffset_type xoffset;
  using _yoffset_type =
    int64_t;
  _yoffset_type yoffset;
  using _zoffset_type =
    int64_t;
  _zoffset_type zoffset;

  // setters for named parameter idiom
  Type & set__xoffset(
    const int64_t & _arg)
  {
    this->xoffset = _arg;
    return *this;
  }
  Type & set__yoffset(
    const int64_t & _arg)
  {
    this->yoffset = _arg;
    return *this;
  }
  Type & set__zoffset(
    const int64_t & _arg)
  {
    this->zoffset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RegionOffsets_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RegionOffsets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RegionOffsets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RegionOffsets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RegionOffsets
    std::shared_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RegionOffsets
    std::shared_ptr<v2x_msg::msg::RegionOffsets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegionOffsets_ & other) const
  {
    if (this->xoffset != other.xoffset) {
      return false;
    }
    if (this->yoffset != other.yoffset) {
      return false;
    }
    if (this->zoffset != other.zoffset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegionOffsets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegionOffsets_

// alias to use template instance with default allocator
using RegionOffsets =
  v2x_msg::msg::RegionOffsets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REGION_OFFSETS__STRUCT_HPP_
