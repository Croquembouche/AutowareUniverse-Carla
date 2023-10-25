// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PVD__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PVD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'probeid'
#include "v2x_msg/msg/detail/vehicle_ident__struct.hpp"
// Member 'startvector'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
// Member 'vehicletype'
#include "v2x_msg/msg/detail/vehicle_classification__struct.hpp"
// Member 'snapshots'
#include "v2x_msg/msg/detail/snapshot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PVD __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PVD __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PVD_
{
  using Type = PVD_<ContainerAllocator>;

  explicit PVD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : probeid(_init),
    startvector(_init),
    vehicletype(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timstamp = 0ll;
      this->segnum = 0ll;
    }
  }

  explicit PVD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : probeid(_alloc, _init),
    startvector(_alloc, _init),
    vehicletype(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timstamp = 0ll;
      this->segnum = 0ll;
    }
  }

  // field types and members
  using _timstamp_type =
    int64_t;
  _timstamp_type timstamp;
  using _segnum_type =
    int64_t;
  _segnum_type segnum;
  using _probeid_type =
    v2x_msg::msg::VehicleIdent_<ContainerAllocator>;
  _probeid_type probeid;
  using _startvector_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _startvector_type startvector;
  using _vehicletype_type =
    v2x_msg::msg::VehicleClassification_<ContainerAllocator>;
  _vehicletype_type vehicletype;
  using _snapshots_type =
    std::vector<v2x_msg::msg::Snapshot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::Snapshot_<ContainerAllocator>>>;
  _snapshots_type snapshots;

  // setters for named parameter idiom
  Type & set__timstamp(
    const int64_t & _arg)
  {
    this->timstamp = _arg;
    return *this;
  }
  Type & set__segnum(
    const int64_t & _arg)
  {
    this->segnum = _arg;
    return *this;
  }
  Type & set__probeid(
    const v2x_msg::msg::VehicleIdent_<ContainerAllocator> & _arg)
  {
    this->probeid = _arg;
    return *this;
  }
  Type & set__startvector(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->startvector = _arg;
    return *this;
  }
  Type & set__vehicletype(
    const v2x_msg::msg::VehicleClassification_<ContainerAllocator> & _arg)
  {
    this->vehicletype = _arg;
    return *this;
  }
  Type & set__snapshots(
    const std::vector<v2x_msg::msg::Snapshot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::Snapshot_<ContainerAllocator>>> & _arg)
  {
    this->snapshots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PVD_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PVD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PVD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PVD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PVD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PVD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PVD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PVD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PVD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PVD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PVD
    std::shared_ptr<v2x_msg::msg::PVD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PVD
    std::shared_ptr<v2x_msg::msg::PVD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PVD_ & other) const
  {
    if (this->timstamp != other.timstamp) {
      return false;
    }
    if (this->segnum != other.segnum) {
      return false;
    }
    if (this->probeid != other.probeid) {
      return false;
    }
    if (this->startvector != other.startvector) {
      return false;
    }
    if (this->vehicletype != other.vehicletype) {
      return false;
    }
    if (this->snapshots != other.snapshots) {
      return false;
    }
    return true;
  }
  bool operator!=(const PVD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PVD_

// alias to use template instance with default allocator
using PVD =
  v2x_msg::msg::PVD_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PVD__STRUCT_HPP_
