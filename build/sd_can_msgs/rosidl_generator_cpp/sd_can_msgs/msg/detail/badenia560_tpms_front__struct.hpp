// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560TpmsFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560TpmsFront __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560TpmsFront __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560TpmsFront_
{
  using Type = Badenia560TpmsFront_<ContainerAllocator>;

  explicit Badenia560TpmsFront_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tpr4_temp_fl = 0.0;
      this->tpr4_temp_fr = 0.0;
      this->tpr4_abs_press_fr = 0.0;
      this->tpr4_abs_press_fl = 0.0;
    }
  }

  explicit Badenia560TpmsFront_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tpr4_temp_fl = 0.0;
      this->tpr4_temp_fr = 0.0;
      this->tpr4_abs_press_fr = 0.0;
      this->tpr4_abs_press_fl = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tpr4_temp_fl_type =
    double;
  _tpr4_temp_fl_type tpr4_temp_fl;
  using _tpr4_temp_fr_type =
    double;
  _tpr4_temp_fr_type tpr4_temp_fr;
  using _tpr4_abs_press_fr_type =
    double;
  _tpr4_abs_press_fr_type tpr4_abs_press_fr;
  using _tpr4_abs_press_fl_type =
    double;
  _tpr4_abs_press_fl_type tpr4_abs_press_fl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tpr4_temp_fl(
    const double & _arg)
  {
    this->tpr4_temp_fl = _arg;
    return *this;
  }
  Type & set__tpr4_temp_fr(
    const double & _arg)
  {
    this->tpr4_temp_fr = _arg;
    return *this;
  }
  Type & set__tpr4_abs_press_fr(
    const double & _arg)
  {
    this->tpr4_abs_press_fr = _arg;
    return *this;
  }
  Type & set__tpr4_abs_press_fl(
    const double & _arg)
  {
    this->tpr4_abs_press_fl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TpmsFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560TpmsFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560TpmsFront_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560TpmsFront_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tpr4_temp_fl != other.tpr4_temp_fl) {
      return false;
    }
    if (this->tpr4_temp_fr != other.tpr4_temp_fr) {
      return false;
    }
    if (this->tpr4_abs_press_fr != other.tpr4_abs_press_fr) {
      return false;
    }
    if (this->tpr4_abs_press_fl != other.tpr4_abs_press_fl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560TpmsFront_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560TpmsFront_

// alias to use template instance with default allocator
using Badenia560TpmsFront =
  sd_can_msgs::msg::Badenia560TpmsFront_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TPMS_FRONT__STRUCT_HPP_
