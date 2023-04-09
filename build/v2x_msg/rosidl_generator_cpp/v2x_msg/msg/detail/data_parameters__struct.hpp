// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__DataParameters __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__DataParameters __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataParameters_
{
  using Type = DataParameters_<ContainerAllocator>;

  explicit DataParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->processmethod = "";
      this->processagency = "";
      this->lastcheckeddate = "";
      this->geoidused = "";
    }
  }

  explicit DataParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : processmethod(_alloc),
    processagency(_alloc),
    lastcheckeddate(_alloc),
    geoidused(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->processmethod = "";
      this->processagency = "";
      this->lastcheckeddate = "";
      this->geoidused = "";
    }
  }

  // field types and members
  using _processmethod_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _processmethod_type processmethod;
  using _processagency_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _processagency_type processagency;
  using _lastcheckeddate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lastcheckeddate_type lastcheckeddate;
  using _geoidused_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _geoidused_type geoidused;

  // setters for named parameter idiom
  Type & set__processmethod(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->processmethod = _arg;
    return *this;
  }
  Type & set__processagency(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->processagency = _arg;
    return *this;
  }
  Type & set__lastcheckeddate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lastcheckeddate = _arg;
    return *this;
  }
  Type & set__geoidused(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->geoidused = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::DataParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::DataParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::DataParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::DataParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__DataParameters
    std::shared_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__DataParameters
    std::shared_ptr<v2x_msg::msg::DataParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataParameters_ & other) const
  {
    if (this->processmethod != other.processmethod) {
      return false;
    }
    if (this->processagency != other.processagency) {
      return false;
    }
    if (this->lastcheckeddate != other.lastcheckeddate) {
      return false;
    }
    if (this->geoidused != other.geoidused) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataParameters_

// alias to use template instance with default allocator
using DataParameters =
  v2x_msg::msg::DataParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_HPP_
