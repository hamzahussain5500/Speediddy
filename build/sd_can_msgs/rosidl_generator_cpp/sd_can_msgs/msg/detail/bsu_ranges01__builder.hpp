// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/BSURanges01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/bsu_ranges01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_BSURanges01_ice_min_throttle
{
public:
  explicit Init_BSURanges01_ice_min_throttle(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::BSURanges01 ice_min_throttle(::sd_can_msgs::msg::BSURanges01::_ice_min_throttle_type arg)
  {
    msg_.ice_min_throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_ice_max_throttle
{
public:
  explicit Init_BSURanges01_ice_max_throttle(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_ice_min_throttle ice_max_throttle(::sd_can_msgs::msg::BSURanges01::_ice_max_throttle_type arg)
  {
    msg_.ice_max_throttle = std::move(arg);
    return Init_BSURanges01_ice_min_throttle(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_max_pressure_rr_pa
{
public:
  explicit Init_BSURanges01_cba_max_pressure_rr_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_ice_max_throttle cba_max_pressure_rr_pa(::sd_can_msgs::msg::BSURanges01::_cba_max_pressure_rr_pa_type arg)
  {
    msg_.cba_max_pressure_rr_pa = std::move(arg);
    return Init_BSURanges01_ice_max_throttle(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_min_pressure_rr_pa
{
public:
  explicit Init_BSURanges01_cba_min_pressure_rr_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_max_pressure_rr_pa cba_min_pressure_rr_pa(::sd_can_msgs::msg::BSURanges01::_cba_min_pressure_rr_pa_type arg)
  {
    msg_.cba_min_pressure_rr_pa = std::move(arg);
    return Init_BSURanges01_cba_max_pressure_rr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_max_pressure_rl_pa
{
public:
  explicit Init_BSURanges01_cba_max_pressure_rl_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_min_pressure_rr_pa cba_max_pressure_rl_pa(::sd_can_msgs::msg::BSURanges01::_cba_max_pressure_rl_pa_type arg)
  {
    msg_.cba_max_pressure_rl_pa = std::move(arg);
    return Init_BSURanges01_cba_min_pressure_rr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_min_pressure_rl_pa
{
public:
  explicit Init_BSURanges01_cba_min_pressure_rl_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_max_pressure_rl_pa cba_min_pressure_rl_pa(::sd_can_msgs::msg::BSURanges01::_cba_min_pressure_rl_pa_type arg)
  {
    msg_.cba_min_pressure_rl_pa = std::move(arg);
    return Init_BSURanges01_cba_max_pressure_rl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_max_pressure_fr_pa
{
public:
  explicit Init_BSURanges01_cba_max_pressure_fr_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_min_pressure_rl_pa cba_max_pressure_fr_pa(::sd_can_msgs::msg::BSURanges01::_cba_max_pressure_fr_pa_type arg)
  {
    msg_.cba_max_pressure_fr_pa = std::move(arg);
    return Init_BSURanges01_cba_min_pressure_rl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_min_pressure_fr_pa
{
public:
  explicit Init_BSURanges01_cba_min_pressure_fr_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_max_pressure_fr_pa cba_min_pressure_fr_pa(::sd_can_msgs::msg::BSURanges01::_cba_min_pressure_fr_pa_type arg)
  {
    msg_.cba_min_pressure_fr_pa = std::move(arg);
    return Init_BSURanges01_cba_max_pressure_fr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_max_pressure_fl_pa
{
public:
  explicit Init_BSURanges01_cba_max_pressure_fl_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_min_pressure_fr_pa cba_max_pressure_fl_pa(::sd_can_msgs::msg::BSURanges01::_cba_max_pressure_fl_pa_type arg)
  {
    msg_.cba_max_pressure_fl_pa = std::move(arg);
    return Init_BSURanges01_cba_min_pressure_fr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_cba_min_pressure_fl_pa
{
public:
  explicit Init_BSURanges01_cba_min_pressure_fl_pa(::sd_can_msgs::msg::BSURanges01 & msg)
  : msg_(msg)
  {}
  Init_BSURanges01_cba_max_pressure_fl_pa cba_min_pressure_fl_pa(::sd_can_msgs::msg::BSURanges01::_cba_min_pressure_fl_pa_type arg)
  {
    msg_.cba_min_pressure_fl_pa = std::move(arg);
    return Init_BSURanges01_cba_max_pressure_fl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

class Init_BSURanges01_header
{
public:
  Init_BSURanges01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSURanges01_cba_min_pressure_fl_pa header(::sd_can_msgs::msg::BSURanges01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSURanges01_cba_min_pressure_fl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::BSURanges01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::BSURanges01>()
{
  return sd_can_msgs::msg::builder::Init_BSURanges01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__BUILDER_HPP_
