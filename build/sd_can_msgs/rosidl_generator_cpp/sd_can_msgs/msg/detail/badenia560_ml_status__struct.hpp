// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560MLStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560MLStatus __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560MLStatus __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560MLStatus_
{
  using Type = Badenia560MLStatus_<ContainerAllocator>;

  explicit Badenia560MLStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_prefill_req_fl = 0;
      this->bsu_prefill_req_fr = 0;
      this->bsu_prefill_req_rl = 0;
      this->bsu_prefill_req_rr = 0;
    }
  }

  explicit Badenia560MLStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bsu_prefill_req_fl = 0;
      this->bsu_prefill_req_fr = 0;
      this->bsu_prefill_req_rl = 0;
      this->bsu_prefill_req_rr = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bsu_prefill_req_fl_type =
    uint8_t;
  _bsu_prefill_req_fl_type bsu_prefill_req_fl;
  using _bsu_prefill_req_fr_type =
    uint8_t;
  _bsu_prefill_req_fr_type bsu_prefill_req_fr;
  using _bsu_prefill_req_rl_type =
    uint8_t;
  _bsu_prefill_req_rl_type bsu_prefill_req_rl;
  using _bsu_prefill_req_rr_type =
    uint8_t;
  _bsu_prefill_req_rr_type bsu_prefill_req_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bsu_prefill_req_fl(
    const uint8_t & _arg)
  {
    this->bsu_prefill_req_fl = _arg;
    return *this;
  }
  Type & set__bsu_prefill_req_fr(
    const uint8_t & _arg)
  {
    this->bsu_prefill_req_fr = _arg;
    return *this;
  }
  Type & set__bsu_prefill_req_rl(
    const uint8_t & _arg)
  {
    this->bsu_prefill_req_rl = _arg;
    return *this;
  }
  Type & set__bsu_prefill_req_rr(
    const uint8_t & _arg)
  {
    this->bsu_prefill_req_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560MLStatus
    std::shared_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560MLStatus
    std::shared_ptr<sd_can_msgs::msg::Badenia560MLStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560MLStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bsu_prefill_req_fl != other.bsu_prefill_req_fl) {
      return false;
    }
    if (this->bsu_prefill_req_fr != other.bsu_prefill_req_fr) {
      return false;
    }
    if (this->bsu_prefill_req_rl != other.bsu_prefill_req_rl) {
      return false;
    }
    if (this->bsu_prefill_req_rr != other.bsu_prefill_req_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560MLStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560MLStatus_

// alias to use template instance with default allocator
using Badenia560MLStatus =
  sd_can_msgs::msg::Badenia560MLStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__STRUCT_HPP_
