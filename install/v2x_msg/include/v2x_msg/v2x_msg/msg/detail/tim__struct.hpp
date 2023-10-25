// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TIM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dataframes'
#include "v2x_msg/msg/detail/traveler_data_frame__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TIM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TIM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TIM_
{
  using Type = TIM_<ContainerAllocator>;

  explicit TIM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->timestamp = 0ll;
      this->packetid = 0ll;
      this->urlb = "";
    }
  }

  explicit TIM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : urlb(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->timestamp = 0ll;
      this->packetid = 0ll;
      this->urlb = "";
    }
  }

  // field types and members
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _packetid_type =
    int64_t;
  _packetid_type packetid;
  using _urlb_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _urlb_type urlb;
  using _dataframes_type =
    std::vector<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>>;
  _dataframes_type dataframes;

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
  Type & set__packetid(
    const int64_t & _arg)
  {
    this->packetid = _arg;
    return *this;
  }
  Type & set__urlb(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->urlb = _arg;
    return *this;
  }
  Type & set__dataframes(
    const std::vector<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::TravelerDataFrame_<ContainerAllocator>>> & _arg)
  {
    this->dataframes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TIM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TIM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TIM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TIM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TIM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TIM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TIM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TIM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TIM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TIM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TIM
    std::shared_ptr<v2x_msg::msg::TIM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TIM
    std::shared_ptr<v2x_msg::msg::TIM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TIM_ & other) const
  {
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->packetid != other.packetid) {
      return false;
    }
    if (this->urlb != other.urlb) {
      return false;
    }
    if (this->dataframes != other.dataframes) {
      return false;
    }
    return true;
  }
  bool operator!=(const TIM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TIM_

// alias to use template instance with default allocator
using TIM =
  v2x_msg::msg::TIM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIM__STRUCT_HPP_
