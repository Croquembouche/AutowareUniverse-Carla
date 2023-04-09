// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPAT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SPAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SPAT __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SPAT __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SPAT_
{
  using Type = SPAT_<ContainerAllocator>;

  explicit SPAT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->name = "";
    }
  }

  explicit SPAT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->name = "";
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _intersections_type =
    std::vector<v2x_msg::msg::IntersectionState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::IntersectionState_<ContainerAllocator>>>;
  _intersections_type intersections;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__intersections(
    const std::vector<v2x_msg::msg::IntersectionState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::IntersectionState_<ContainerAllocator>>> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SPAT_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SPAT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SPAT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SPAT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SPAT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SPAT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SPAT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SPAT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SPAT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SPAT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SPAT
    std::shared_ptr<v2x_msg::msg::SPAT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SPAT
    std::shared_ptr<v2x_msg::msg::SPAT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SPAT_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    return true;
  }
  bool operator!=(const SPAT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SPAT_

// alias to use template instance with default allocator
using SPAT =
  v2x_msg::msg::SPAT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPAT__STRUCT_HPP_
