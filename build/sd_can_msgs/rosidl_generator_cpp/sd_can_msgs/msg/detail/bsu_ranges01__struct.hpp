// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/BSURanges01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__BSURanges01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__BSURanges01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSURanges01_
{
  using Type = BSURanges01_<ContainerAllocator>;

  explicit BSURanges01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_min_pressure_fl_pa = 0.0;
      this->cba_max_pressure_fl_pa = 0.0;
      this->cba_min_pressure_fr_pa = 0.0;
      this->cba_max_pressure_fr_pa = 0.0;
      this->cba_min_pressure_rl_pa = 0.0;
      this->cba_max_pressure_rl_pa = 0.0;
      this->cba_min_pressure_rr_pa = 0.0;
      this->cba_max_pressure_rr_pa = 0.0;
      this->ice_max_throttle = 0.0;
      this->ice_min_throttle = 0.0;
    }
  }

  explicit BSURanges01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cba_min_pressure_fl_pa = 0.0;
      this->cba_max_pressure_fl_pa = 0.0;
      this->cba_min_pressure_fr_pa = 0.0;
      this->cba_max_pressure_fr_pa = 0.0;
      this->cba_min_pressure_rl_pa = 0.0;
      this->cba_max_pressure_rl_pa = 0.0;
      this->cba_min_pressure_rr_pa = 0.0;
      this->cba_max_pressure_rr_pa = 0.0;
      this->ice_max_throttle = 0.0;
      this->ice_min_throttle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cba_min_pressure_fl_pa_type =
    double;
  _cba_min_pressure_fl_pa_type cba_min_pressure_fl_pa;
  using _cba_max_pressure_fl_pa_type =
    double;
  _cba_max_pressure_fl_pa_type cba_max_pressure_fl_pa;
  using _cba_min_pressure_fr_pa_type =
    double;
  _cba_min_pressure_fr_pa_type cba_min_pressure_fr_pa;
  using _cba_max_pressure_fr_pa_type =
    double;
  _cba_max_pressure_fr_pa_type cba_max_pressure_fr_pa;
  using _cba_min_pressure_rl_pa_type =
    double;
  _cba_min_pressure_rl_pa_type cba_min_pressure_rl_pa;
  using _cba_max_pressure_rl_pa_type =
    double;
  _cba_max_pressure_rl_pa_type cba_max_pressure_rl_pa;
  using _cba_min_pressure_rr_pa_type =
    double;
  _cba_min_pressure_rr_pa_type cba_min_pressure_rr_pa;
  using _cba_max_pressure_rr_pa_type =
    double;
  _cba_max_pressure_rr_pa_type cba_max_pressure_rr_pa;
  using _ice_max_throttle_type =
    double;
  _ice_max_throttle_type ice_max_throttle;
  using _ice_min_throttle_type =
    double;
  _ice_min_throttle_type ice_min_throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cba_min_pressure_fl_pa(
    const double & _arg)
  {
    this->cba_min_pressure_fl_pa = _arg;
    return *this;
  }
  Type & set__cba_max_pressure_fl_pa(
    const double & _arg)
  {
    this->cba_max_pressure_fl_pa = _arg;
    return *this;
  }
  Type & set__cba_min_pressure_fr_pa(
    const double & _arg)
  {
    this->cba_min_pressure_fr_pa = _arg;
    return *this;
  }
  Type & set__cba_max_pressure_fr_pa(
    const double & _arg)
  {
    this->cba_max_pressure_fr_pa = _arg;
    return *this;
  }
  Type & set__cba_min_pressure_rl_pa(
    const double & _arg)
  {
    this->cba_min_pressure_rl_pa = _arg;
    return *this;
  }
  Type & set__cba_max_pressure_rl_pa(
    const double & _arg)
  {
    this->cba_max_pressure_rl_pa = _arg;
    return *this;
  }
  Type & set__cba_min_pressure_rr_pa(
    const double & _arg)
  {
    this->cba_min_pressure_rr_pa = _arg;
    return *this;
  }
  Type & set__cba_max_pressure_rr_pa(
    const double & _arg)
  {
    this->cba_max_pressure_rr_pa = _arg;
    return *this;
  }
  Type & set__ice_max_throttle(
    const double & _arg)
  {
    this->ice_max_throttle = _arg;
    return *this;
  }
  Type & set__ice_min_throttle(
    const double & _arg)
  {
    this->ice_min_throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::BSURanges01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::BSURanges01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSURanges01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::BSURanges01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__BSURanges01
    std::shared_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__BSURanges01
    std::shared_ptr<sd_can_msgs::msg::BSURanges01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSURanges01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cba_min_pressure_fl_pa != other.cba_min_pressure_fl_pa) {
      return false;
    }
    if (this->cba_max_pressure_fl_pa != other.cba_max_pressure_fl_pa) {
      return false;
    }
    if (this->cba_min_pressure_fr_pa != other.cba_min_pressure_fr_pa) {
      return false;
    }
    if (this->cba_max_pressure_fr_pa != other.cba_max_pressure_fr_pa) {
      return false;
    }
    if (this->cba_min_pressure_rl_pa != other.cba_min_pressure_rl_pa) {
      return false;
    }
    if (this->cba_max_pressure_rl_pa != other.cba_max_pressure_rl_pa) {
      return false;
    }
    if (this->cba_min_pressure_rr_pa != other.cba_min_pressure_rr_pa) {
      return false;
    }
    if (this->cba_max_pressure_rr_pa != other.cba_max_pressure_rr_pa) {
      return false;
    }
    if (this->ice_max_throttle != other.ice_max_throttle) {
      return false;
    }
    if (this->ice_min_throttle != other.ice_min_throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSURanges01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSURanges01_

// alias to use template instance with default allocator
using BSURanges01 =
  sd_can_msgs::msg::BSURanges01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__STRUCT_HPP_
