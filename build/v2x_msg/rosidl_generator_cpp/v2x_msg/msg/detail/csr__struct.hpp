// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CSR__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CSR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'requests'
#include "v2x_msg/msg/detail/requested_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__CSR __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__CSR __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CSR_
{
  using Type = CSR_<ContainerAllocator>;

  explicit CSR_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msgcnt = 0ll;
      this->id = "";
    }
  }

  explicit CSR_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msgcnt = 0ll;
      this->id = "";
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _requests_type =
    std::vector<v2x_msg::msg::RequestedItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RequestedItem_<ContainerAllocator>>>;
  _requests_type requests;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__msgcnt(
    const int64_t & _arg)
  {
    this->msgcnt = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__requests(
    const std::vector<v2x_msg::msg::RequestedItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RequestedItem_<ContainerAllocator>>> & _arg)
  {
    this->requests = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::CSR_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::CSR_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::CSR_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::CSR_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::CSR_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::CSR_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::CSR_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::CSR_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::CSR_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::CSR_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__CSR
    std::shared_ptr<v2x_msg::msg::CSR_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__CSR
    std::shared_ptr<v2x_msg::msg::CSR_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CSR_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->requests != other.requests) {
      return false;
    }
    return true;
  }
  bool operator!=(const CSR_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CSR_

// alias to use template instance with default allocator
using CSR =
  v2x_msg::msg::CSR_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CSR__STRUCT_HPP_
