// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Legacy __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Legacy __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticWord02Legacy_
{
  using Type = DiagnosticWord02Legacy_<ContainerAllocator>;

  explicit DiagnosticWord02Legacy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_force_race_mode = false;
      this->rc_beacon_time_out = false;
    }
  }

  explicit DiagnosticWord02Legacy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_force_race_mode = false;
      this->rc_beacon_time_out = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rc_force_race_mode_type =
    bool;
  _rc_force_race_mode_type rc_force_race_mode;
  using _rc_beacon_time_out_type =
    bool;
  _rc_beacon_time_out_type rc_beacon_time_out;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rc_force_race_mode(
    const bool & _arg)
  {
    this->rc_force_race_mode = _arg;
    return *this;
  }
  Type & set__rc_beacon_time_out(
    const bool & _arg)
  {
    this->rc_beacon_time_out = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Legacy
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__DiagnosticWord02Legacy
    std::shared_ptr<sd_can_msgs::msg::DiagnosticWord02Legacy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticWord02Legacy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rc_force_race_mode != other.rc_force_race_mode) {
      return false;
    }
    if (this->rc_beacon_time_out != other.rc_beacon_time_out) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticWord02Legacy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticWord02Legacy_

// alias to use template instance with default allocator
using DiagnosticWord02Legacy =
  sd_can_msgs::msg::DiagnosticWord02Legacy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__STRUCT_HPP_
