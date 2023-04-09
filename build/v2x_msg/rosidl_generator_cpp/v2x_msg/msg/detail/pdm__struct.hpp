// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PDM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PDM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sample'
#include "v2x_msg/msg/detail/sample__struct.hpp"
// Member 'snapshottime'
#include "v2x_msg/msg/detail/snapshot_time__struct.hpp"
// Member 'snapshotdistance'
#include "v2x_msg/msg/detail/snapshot_distance__struct.hpp"
// Member 'dataelements'
#include "v2x_msg/msg/detail/vehicle_status_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PDM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PDM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PDM_
{
  using Type = PDM_<ContainerAllocator>;

  explicit PDM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sample(_init),
    snapshottime(_init),
    snapshotdistance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->directions = "";
      this->termtime = 0ll;
      this->termdistance = 0ll;
      this->txinterval = 0ll;
    }
  }

  explicit PDM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sample(_alloc, _init),
    directions(_alloc),
    snapshottime(_alloc, _init),
    snapshotdistance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->directions = "";
      this->termtime = 0ll;
      this->termdistance = 0ll;
      this->txinterval = 0ll;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _sample_type =
    v2x_msg::msg::Sample_<ContainerAllocator>;
  _sample_type sample;
  using _directions_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _directions_type directions;
  using _termtime_type =
    int64_t;
  _termtime_type termtime;
  using _termdistance_type =
    int64_t;
  _termdistance_type termdistance;
  using _snapshottime_type =
    v2x_msg::msg::SnapshotTime_<ContainerAllocator>;
  _snapshottime_type snapshottime;
  using _snapshotdistance_type =
    v2x_msg::msg::SnapshotDistance_<ContainerAllocator>;
  _snapshotdistance_type snapshotdistance;
  using _txinterval_type =
    int64_t;
  _txinterval_type txinterval;
  using _dataelements_type =
    std::vector<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>>;
  _dataelements_type dataelements;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__sample(
    const v2x_msg::msg::Sample_<ContainerAllocator> & _arg)
  {
    this->sample = _arg;
    return *this;
  }
  Type & set__directions(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->directions = _arg;
    return *this;
  }
  Type & set__termtime(
    const int64_t & _arg)
  {
    this->termtime = _arg;
    return *this;
  }
  Type & set__termdistance(
    const int64_t & _arg)
  {
    this->termdistance = _arg;
    return *this;
  }
  Type & set__snapshottime(
    const v2x_msg::msg::SnapshotTime_<ContainerAllocator> & _arg)
  {
    this->snapshottime = _arg;
    return *this;
  }
  Type & set__snapshotdistance(
    const v2x_msg::msg::SnapshotDistance_<ContainerAllocator> & _arg)
  {
    this->snapshotdistance = _arg;
    return *this;
  }
  Type & set__txinterval(
    const int64_t & _arg)
  {
    this->txinterval = _arg;
    return *this;
  }
  Type & set__dataelements(
    const std::vector<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::VehicleStatusRequest_<ContainerAllocator>>> & _arg)
  {
    this->dataelements = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PDM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PDM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PDM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PDM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PDM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PDM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PDM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PDM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PDM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PDM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PDM
    std::shared_ptr<v2x_msg::msg::PDM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PDM
    std::shared_ptr<v2x_msg::msg::PDM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PDM_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->sample != other.sample) {
      return false;
    }
    if (this->directions != other.directions) {
      return false;
    }
    if (this->termtime != other.termtime) {
      return false;
    }
    if (this->termdistance != other.termdistance) {
      return false;
    }
    if (this->snapshottime != other.snapshottime) {
      return false;
    }
    if (this->snapshotdistance != other.snapshotdistance) {
      return false;
    }
    if (this->txinterval != other.txinterval) {
      return false;
    }
    if (this->dataelements != other.dataelements) {
      return false;
    }
    return true;
  }
  bool operator!=(const PDM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PDM_

// alias to use template instance with default allocator
using PDM =
  v2x_msg::msg::PDM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PDM__STRUCT_HPP_
