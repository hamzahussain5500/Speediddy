// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_front__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560TyreSurfaceTempFront_inner_fr
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_inner_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront inner_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_inner_fr_type arg)
  {
    msg_.inner_fr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_center_fr
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_center_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempFront_inner_fr center_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_center_fr_type arg)
  {
    msg_.center_fr = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_inner_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_outer_fr
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_outer_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempFront_center_fr outer_fr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_outer_fr_type arg)
  {
    msg_.outer_fr = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_center_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_inner_fl
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_inner_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempFront_outer_fr inner_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_inner_fl_type arg)
  {
    msg_.inner_fl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_outer_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_center_fl
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_center_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempFront_inner_fl center_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_center_fl_type arg)
  {
    msg_.center_fl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_inner_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_outer_fl
{
public:
  explicit Init_Badenia560TyreSurfaceTempFront_outer_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempFront_center_fl outer_fl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_outer_fl_type arg)
  {
    msg_.outer_fl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_center_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

class Init_Badenia560TyreSurfaceTempFront_header
{
public:
  Init_Badenia560TyreSurfaceTempFront_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560TyreSurfaceTempFront_outer_fl header(::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560TyreSurfaceTempFront_outer_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560TyreSurfaceTempFront>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560TyreSurfaceTempFront_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_FRONT__BUILDER_HPP_
