// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_rear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560TyreSurfaceTempRear_inner_rr
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_inner_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear inner_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_inner_rr_type arg)
  {
    msg_.inner_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_center_rr
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_center_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempRear_inner_rr center_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_center_rr_type arg)
  {
    msg_.center_rr = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_inner_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_outer_rr
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_outer_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempRear_center_rr outer_rr(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_outer_rr_type arg)
  {
    msg_.outer_rr = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_center_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_inner_rl
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_inner_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempRear_outer_rr inner_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_inner_rl_type arg)
  {
    msg_.inner_rl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_outer_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_center_rl
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_center_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempRear_inner_rl center_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_center_rl_type arg)
  {
    msg_.center_rl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_inner_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_outer_rl
{
public:
  explicit Init_Badenia560TyreSurfaceTempRear_outer_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560TyreSurfaceTempRear_center_rl outer_rl(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_outer_rl_type arg)
  {
    msg_.outer_rl = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_center_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

class Init_Badenia560TyreSurfaceTempRear_header
{
public:
  Init_Badenia560TyreSurfaceTempRear_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560TyreSurfaceTempRear_outer_rl header(::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560TyreSurfaceTempRear_outer_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560TyreSurfaceTempRear>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560TyreSurfaceTempRear_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_TYRE_SURFACE_TEMP_REAR__BUILDER_HPP_
