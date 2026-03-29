// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560TyreSurfaceTempRear_
{
  using Type = Badenia560TyreSurfaceTempRear_<ContainerAllocator>;

  explicit Badenia560TyreSurfaceTempRear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outer_rl = 0.0;
      this->center_rl = 0.0;
      this->inner_rl = 0.0;
      this->outer_rr = 0.0;
      this->center_rr = 0.0;
      this->inner_rr = 0.0;
    }
  }

  explicit Badenia560TyreSurfaceTempRear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outer_rl = 0.0;
      this->center_rl = 0.0;
      this->inner_rl = 0.0;
      this->outer_rr = 0.0;
      this->center_rr = 0.0;
      this->inner_rr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _outer_rl_type =
    double;
  _outer_rl_type outer_rl;
  using _center_rl_type =
    double;
  _center_rl_type center_rl;
  using _inner_rl_type =
    double;
  _inner_rl_type inner_rl;
  using _outer_rr_type =
    double;
  _outer_rr_type outer_rr;
  using _center_rr_type =
    double;
  _center_rr_type center_rr;
  using _inner_rr_type =
    double;
  _inner_rr_type inner_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__outer_rl(
    const double & _arg)
  {
    this->outer_rl = _arg;
    return *this;
  }
  Type & set__center_rl(
    const double & _arg)
  {
    this->center_rl = _arg;
    return *this;
  }
  Type & set__inner_rl(
    const double & _arg)
  {
    this->inner_rl = _arg;
    return *this;
  }
  Type & set__outer_rr(
    const double & _arg)
  {
    this->outer_rr = _arg;
    return *this;
  }
  Type & set__center_rr(
    const double & _arg)
  {
    this->center_rr = _arg;
    return *this;
  }
  Type & set__inner_rr(
    const double & _arg)
  {
    this->inner_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560TyreSurfaceTempRear_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->outer_rl != other.outer_rl) {
      return false;
    }
    if (this->center_rl != other.center_rl) {
      return false;
    }
    if (this->inner_rl != other.inner_rl) {
      return false;
    }
    if (this->outer_rr != other.outer_rr) {
      return false;
    }
    if (this->center_rr != other.center_rr) {
      return false;
    }
    if (this->inner_rr != other.inner_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560TyreSurfaceTempRear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560TyreSurfaceTempRear_

// alias to use template instance with default allocator
using Badenia560TyreSurfaceTempRear =
  sd_can_msgs::msg::Badenia560TyreSurfaceTempRear_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__STRUCT_HPP_
