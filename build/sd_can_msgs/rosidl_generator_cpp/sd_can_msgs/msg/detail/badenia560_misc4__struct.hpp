// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560Misc4.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560Misc4 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560Misc4 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560Misc4_
{
  using Type = Badenia560Misc4_<ContainerAllocator>;

  explicit Badenia560Misc4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bad_tpms_check_fl = 0;
      this->bad_tpms_check_fr = 0;
      this->bad_tpms_check_rl = 0;
      this->bad_tpms_check_rr = 0;
      this->bad_tpms_tx_count_fl = 0;
      this->bad_tpms_tx_count_fr = 0;
      this->bad_tpms_tx_count_rl = 0;
      this->bad_tpms_tx_count_rr = 0;
    }
  }

  explicit Badenia560Misc4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bad_tpms_check_fl = 0;
      this->bad_tpms_check_fr = 0;
      this->bad_tpms_check_rl = 0;
      this->bad_tpms_check_rr = 0;
      this->bad_tpms_tx_count_fl = 0;
      this->bad_tpms_tx_count_fr = 0;
      this->bad_tpms_tx_count_rl = 0;
      this->bad_tpms_tx_count_rr = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bad_tpms_check_fl_type =
    uint8_t;
  _bad_tpms_check_fl_type bad_tpms_check_fl;
  using _bad_tpms_check_fr_type =
    uint8_t;
  _bad_tpms_check_fr_type bad_tpms_check_fr;
  using _bad_tpms_check_rl_type =
    uint8_t;
  _bad_tpms_check_rl_type bad_tpms_check_rl;
  using _bad_tpms_check_rr_type =
    uint8_t;
  _bad_tpms_check_rr_type bad_tpms_check_rr;
  using _bad_tpms_tx_count_fl_type =
    uint8_t;
  _bad_tpms_tx_count_fl_type bad_tpms_tx_count_fl;
  using _bad_tpms_tx_count_fr_type =
    uint8_t;
  _bad_tpms_tx_count_fr_type bad_tpms_tx_count_fr;
  using _bad_tpms_tx_count_rl_type =
    uint8_t;
  _bad_tpms_tx_count_rl_type bad_tpms_tx_count_rl;
  using _bad_tpms_tx_count_rr_type =
    uint8_t;
  _bad_tpms_tx_count_rr_type bad_tpms_tx_count_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bad_tpms_check_fl(
    const uint8_t & _arg)
  {
    this->bad_tpms_check_fl = _arg;
    return *this;
  }
  Type & set__bad_tpms_check_fr(
    const uint8_t & _arg)
  {
    this->bad_tpms_check_fr = _arg;
    return *this;
  }
  Type & set__bad_tpms_check_rl(
    const uint8_t & _arg)
  {
    this->bad_tpms_check_rl = _arg;
    return *this;
  }
  Type & set__bad_tpms_check_rr(
    const uint8_t & _arg)
  {
    this->bad_tpms_check_rr = _arg;
    return *this;
  }
  Type & set__bad_tpms_tx_count_fl(
    const uint8_t & _arg)
  {
    this->bad_tpms_tx_count_fl = _arg;
    return *this;
  }
  Type & set__bad_tpms_tx_count_fr(
    const uint8_t & _arg)
  {
    this->bad_tpms_tx_count_fr = _arg;
    return *this;
  }
  Type & set__bad_tpms_tx_count_rl(
    const uint8_t & _arg)
  {
    this->bad_tpms_tx_count_rl = _arg;
    return *this;
  }
  Type & set__bad_tpms_tx_count_rr(
    const uint8_t & _arg)
  {
    this->bad_tpms_tx_count_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560Misc4
    std::shared_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560Misc4
    std::shared_ptr<sd_can_msgs::msg::Badenia560Misc4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560Misc4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bad_tpms_check_fl != other.bad_tpms_check_fl) {
      return false;
    }
    if (this->bad_tpms_check_fr != other.bad_tpms_check_fr) {
      return false;
    }
    if (this->bad_tpms_check_rl != other.bad_tpms_check_rl) {
      return false;
    }
    if (this->bad_tpms_check_rr != other.bad_tpms_check_rr) {
      return false;
    }
    if (this->bad_tpms_tx_count_fl != other.bad_tpms_tx_count_fl) {
      return false;
    }
    if (this->bad_tpms_tx_count_fr != other.bad_tpms_tx_count_fr) {
      return false;
    }
    if (this->bad_tpms_tx_count_rl != other.bad_tpms_tx_count_rl) {
      return false;
    }
    if (this->bad_tpms_tx_count_rr != other.bad_tpms_tx_count_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560Misc4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560Misc4_

// alias to use template instance with default allocator
using Badenia560Misc4 =
  sd_can_msgs::msg::Badenia560Misc4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__STRUCT_HPP_
