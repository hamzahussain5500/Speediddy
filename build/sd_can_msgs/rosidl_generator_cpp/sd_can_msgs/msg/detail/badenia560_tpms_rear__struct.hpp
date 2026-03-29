// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560TpmsRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560TpmsRear __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560TpmsRear __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560TpmsRear_
{
  using Type = Badenia560TpmsRear_<ContainerAllocator>;

  explicit Badenia560TpmsRear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tpr4_temp_rl = 0.0;
      this->tpr4_temp_rr = 0.0;
      this->tpr4_abs_press_rl = 0.0;
      this->tpr4_abs_press_rr = 0.0;
    }
  }

  explicit Badenia560TpmsRear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tpr4_temp_rl = 0.0;
      this->tpr4_temp_rr = 0.0;
      this->tpr4_abs_press_rl = 0.0;
      this->tpr4_abs_press_rr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tpr4_temp_rl_type =
    double;
  _tpr4_temp_rl_type tpr4_temp_rl;
  using _tpr4_temp_rr_type =
    double;
  _tpr4_temp_rr_type tpr4_temp_rr;
  using _tpr4_abs_press_rl_type =
    double;
  _tpr4_abs_press_rl_type tpr4_abs_press_rl;
  using _tpr4_abs_press_rr_type =
    double;
  _tpr4_abs_press_rr_type tpr4_abs_press_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tpr4_temp_rl(
    const double & _arg)
  {
    this->tpr4_temp_rl = _arg;
    return *this;
  }
  Type & set__tpr4_temp_rr(
    const double & _arg)
  {
    this->tpr4_temp_rr = _arg;
    return *this;
  }
  Type & set__tpr4_abs_press_rl(
    const double & _arg)
  {
    this->tpr4_abs_press_rl = _arg;
    return *this;
  }
  Type & set__tpr4_abs_press_rr(
    const double & _arg)
  {
    this->tpr4_abs_press_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TpmsRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TpmsRear
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsRear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560TpmsRear_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tpr4_temp_rl != other.tpr4_temp_rl) {
      return false;
    }
    if (this->tpr4_temp_rr != other.tpr4_temp_rr) {
      return false;
    }
    if (this->tpr4_abs_press_rl != other.tpr4_abs_press_rl) {
      return false;
    }
    if (this->tpr4_abs_press_rr != other.tpr4_abs_press_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560TpmsRear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560TpmsRear_

// alias to use template instance with default allocator
using Badenia560TpmsRear =
  sd_can_msgs::msg::Badenia560TpmsRear_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_REAR__STRUCT_HPP_
