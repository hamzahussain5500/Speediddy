// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560RideFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560RideFront __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560RideFront __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560RideFront_
{
  using Type = Badenia560RideFront_<ContainerAllocator>;

  explicit Badenia560RideFront_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ride_height_front = 0.0;
      this->damper_stroke_f3rd = 0.0;
      this->damper_stroke_fl = 0.0;
      this->damper_stroke_fr = 0.0;
    }
  }

  explicit Badenia560RideFront_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ride_height_front = 0.0;
      this->damper_stroke_f3rd = 0.0;
      this->damper_stroke_fl = 0.0;
      this->damper_stroke_fr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ride_height_front_type =
    double;
  _ride_height_front_type ride_height_front;
  using _damper_stroke_f3rd_type =
    double;
  _damper_stroke_f3rd_type damper_stroke_f3rd;
  using _damper_stroke_fl_type =
    double;
  _damper_stroke_fl_type damper_stroke_fl;
  using _damper_stroke_fr_type =
    double;
  _damper_stroke_fr_type damper_stroke_fr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ride_height_front(
    const double & _arg)
  {
    this->ride_height_front = _arg;
    return *this;
  }
  Type & set__damper_stroke_f3rd(
    const double & _arg)
  {
    this->damper_stroke_f3rd = _arg;
    return *this;
  }
  Type & set__damper_stroke_fl(
    const double & _arg)
  {
    this->damper_stroke_fl = _arg;
    return *this;
  }
  Type & set__damper_stroke_fr(
    const double & _arg)
  {
    this->damper_stroke_fr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560RideFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560RideFront
    std::shared_ptr<sd_can_msgs::msg::Badenia560RideFront_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560RideFront_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ride_height_front != other.ride_height_front) {
      return false;
    }
    if (this->damper_stroke_f3rd != other.damper_stroke_f3rd) {
      return false;
    }
    if (this->damper_stroke_fl != other.damper_stroke_fl) {
      return false;
    }
    if (this->damper_stroke_fr != other.damper_stroke_fr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560RideFront_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560RideFront_

// alias to use template instance with default allocator
using Badenia560RideFront =
  sd_can_msgs::msg::Badenia560RideFront_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_HPP_
