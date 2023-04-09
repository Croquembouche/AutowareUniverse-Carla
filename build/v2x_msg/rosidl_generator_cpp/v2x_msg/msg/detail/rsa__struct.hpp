// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RSA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__RSA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RSA __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RSA __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RSA_
{
  using Type = RSA_<ContainerAllocator>;

  explicit RSA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->timestamp = 0ll;
      this->typeevent = 0ll;
      this->priority = "";
      this->heading = "";
      this->extent = 0ll;
      this->furtherinfoid = "";
    }
  }

  explicit RSA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : priority(_alloc),
    heading(_alloc),
    position(_alloc, _init),
    furtherinfoid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->timestamp = 0ll;
      this->typeevent = 0ll;
      this->priority = "";
      this->heading = "";
      this->extent = 0ll;
      this->furtherinfoid = "";
    }
  }

  // field types and members
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _typeevent_type =
    int64_t;
  _typeevent_type typeevent;
  using _desrciption_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _desrciption_type desrciption;
  using _priority_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _priority_type priority;
  using _heading_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _heading_type heading;
  using _extent_type =
    int64_t;
  _extent_type extent;
  using _position_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _position_type position;
  using _furtherinfoid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _furtherinfoid_type furtherinfoid;

  // setters for named parameter idiom
  Type & set__msgcnt(
    const int64_t & _arg)
  {
    this->msgcnt = _arg;
    return *this;
  }
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__typeevent(
    const int64_t & _arg)
  {
    this->typeevent = _arg;
    return *this;
  }
  Type & set__desrciption(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->desrciption = _arg;
    return *this;
  }
  Type & set__priority(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__heading(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__extent(
    const int64_t & _arg)
  {
    this->extent = _arg;
    return *this;
  }
  Type & set__position(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__furtherinfoid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->furtherinfoid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RSA_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RSA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RSA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RSA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RSA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RSA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RSA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RSA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RSA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RSA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RSA
    std::shared_ptr<v2x_msg::msg::RSA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RSA
    std::shared_ptr<v2x_msg::msg::RSA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RSA_ & other) const
  {
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->typeevent != other.typeevent) {
      return false;
    }
    if (this->desrciption != other.desrciption) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->extent != other.extent) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->furtherinfoid != other.furtherinfoid) {
      return false;
    }
    return true;
  }
  bool operator!=(const RSA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RSA_

// alias to use template instance with default allocator
using RSA =
  v2x_msg::msg::RSA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RSA__STRUCT_HPP_
