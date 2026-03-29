// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg05.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__HLMsg05 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg05 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg05_
{
  using Type = HLMsg05_<ContainerAllocator>;

  explicit HLMsg05_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_height = 0.0;
      this->hl_vel_east = 0.0;
      this->hl_vel_north = 0.0;
      this->hl_vel_up = 0.0;
    }
  }

  explicit HLMsg05_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_height = 0.0;
      this->hl_vel_east = 0.0;
      this->hl_vel_north = 0.0;
      this->hl_vel_up = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hl_height_type =
    double;
  _hl_height_type hl_height;
  using _hl_vel_east_type =
    double;
  _hl_vel_east_type hl_vel_east;
  using _hl_vel_north_type =
    double;
  _hl_vel_north_type hl_vel_north;
  using _hl_vel_up_type =
    double;
  _hl_vel_up_type hl_vel_up;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hl_height(
    const double & _arg)
  {
    this->hl_height = _arg;
    return *this;
  }
  Type & set__hl_vel_east(
    const double & _arg)
  {
    this->hl_vel_east = _arg;
    return *this;
  }
  Type & set__hl_vel_north(
    const double & _arg)
  {
    this->hl_vel_north = _arg;
    return *this;
  }
  Type & set__hl_vel_up(
    const double & _arg)
  {
    this->hl_vel_up = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg05_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg05_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg05_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg05_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg05
    std::shared_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg05
    std::shared_ptr<sd_can_msgs::msg::HLMsg05_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg05_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hl_height != other.hl_height) {
      return false;
    }
    if (this->hl_vel_east != other.hl_vel_east) {
      return false;
    }
    if (this->hl_vel_north != other.hl_vel_north) {
      return false;
    }
    if (this->hl_vel_up != other.hl_vel_up) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg05_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg05_

// alias to use template instance with default allocator
using HLMsg05 =
  sd_can_msgs::msg::HLMsg05_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__STRUCT_HPP_
