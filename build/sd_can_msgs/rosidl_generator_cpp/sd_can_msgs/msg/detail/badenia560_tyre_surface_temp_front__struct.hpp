// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560TyreSurfaceTempFront_
{
  using Type = Badenia560TyreSurfaceTempFront_<ContainerAllocator>;

  explicit Badenia560TyreSurfaceTempFront_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outer_fl = 0.0;
      this->center_fl = 0.0;
      this->inner_fl = 0.0;
      this->outer_fr = 0.0;
      this->center_fr = 0.0;
      this->inner_fr = 0.0;
    }
  }

  explicit Badenia560TyreSurfaceTempFront_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outer_fl = 0.0;
      this->center_fl = 0.0;
      this->inner_fl = 0.0;
      this->outer_fr = 0.0;
      this->center_fr = 0.0;
      this->inner_fr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _outer_fl_type =
    double;
  _outer_fl_type outer_fl;
  using _center_fl_type =
    double;
  _center_fl_type center_fl;
  using _inner_fl_type =
    double;
  _inner_fl_type inner_fl;
  using _outer_fr_type =
    double;
  _outer_fr_type outer_fr;
  using _center_fr_type =
    double;
  _center_fr_type center_fr;
  using _inner_fr_type =
    double;
  _inner_fr_type inner_fr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__outer_fl(
    const double & _arg)
  {
    this->outer_fl = _arg;
    return *this;
  }
  Type & set__center_fl(
    const double & _arg)
  {
    this->center_fl = _arg;
    return *this;
  }
  Type & set__inner_fl(
    const double & _arg)
  {
    this->inner_fl = _arg;
    return *this;
  }
  Type & set__outer_fr(
    const double & _arg)
  {
    this->outer_fr = _arg;
    return *this;
  }
  Type & set__center_fr(
    const double & _arg)
  {
    this->center_fr = _arg;
    return *this;
  }
  Type & set__inner_fr(
    const double & _arg)
  {
    this->inner_fr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TyreSurfaceTempFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560TyreSurfaceTempFront_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->outer_fl != other.outer_fl) {
      return false;
    }
    if (this->center_fl != other.center_fl) {
      return false;
    }
    if (this->inner_fl != other.inner_fl) {
      return false;
    }
    if (this->outer_fr != other.outer_fr) {
      return false;
    }
    if (this->center_fr != other.center_fr) {
      return false;
    }
    if (this->inner_fr != other.inner_fr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560TyreSurfaceTempFront_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560TyreSurfaceTempFront_

// alias to use template instance with default allocator
using Badenia560TyreSurfaceTempFront =
  sd_can_msgs::msg::Badenia560TyreSurfaceTempFront_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__STRUCT_HPP_
