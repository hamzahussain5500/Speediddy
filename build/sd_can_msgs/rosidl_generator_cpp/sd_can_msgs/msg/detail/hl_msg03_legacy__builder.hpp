// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg03Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg03_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg03Legacy_hl_crancking_by_pass
{
public:
  explicit Init_HLMsg03Legacy_hl_crancking_by_pass(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg03Legacy hl_crancking_by_pass(::sd_can_msgs::msg::HLMsg03Legacy::_hl_crancking_by_pass_type arg)
  {
    msg_.hl_crancking_by_pass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_ice_start_fuel_level_l
{
public:
  explicit Init_HLMsg03Legacy_ice_start_fuel_level_l(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_crancking_by_pass ice_start_fuel_level_l(::sd_can_msgs::msg::HLMsg03Legacy::_ice_start_fuel_level_l_type arg)
  {
    msg_.ice_start_fuel_level_l = std::move(arg);
    return Init_HLMsg03Legacy_hl_crancking_by_pass(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_radar_l
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_radar_l(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_ice_start_fuel_level_l hl_pdu1_activate_radar_l(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_radar_l_type arg)
  {
    msg_.hl_pdu1_activate_radar_l = std::move(arg);
    return Init_HLMsg03Legacy_ice_start_fuel_level_l(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_radar_r
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_radar_r(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_radar_l hl_pdu1_activate_radar_r(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_radar_r_type arg)
  {
    msg_.hl_pdu1_activate_radar_r = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_radar_l(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_radar_cn
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_radar_cn(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_radar_r hl_pdu1_activate_radar_cn(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_radar_cn_type arg)
  {
    msg_.hl_pdu1_activate_radar_cn = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_radar_r(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_radar_rear
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_radar_rear(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_radar_cn hl_pdu1_activate_radar_rear(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_radar_rear_type arg)
  {
    msg_.hl_pdu1_activate_radar_rear = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_radar_cn(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_lidar_l
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_lidar_l(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_radar_rear hl_pdu1_activate_lidar_l(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_lidar_l_type arg)
  {
    msg_.hl_pdu1_activate_lidar_l = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_radar_rear(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_lidar_cn
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_lidar_cn(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_lidar_l hl_pdu1_activate_lidar_cn(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_lidar_cn_type arg)
  {
    msg_.hl_pdu1_activate_lidar_cn = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_lidar_l(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_lidar_r
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_lidar_r(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_lidar_cn hl_pdu1_activate_lidar_r(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_lidar_r_type arg)
  {
    msg_.hl_pdu1_activate_lidar_r = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_lidar_cn(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_ice_enable
{
public:
  explicit Init_HLMsg03Legacy_hl_ice_enable(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_lidar_r hl_ice_enable(::sd_can_msgs::msg::HLMsg03Legacy::_hl_ice_enable_type arg)
  {
    msg_.hl_ice_enable = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_lidar_r(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_oss
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_oss(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_ice_enable hl_pdu1_activate_oss(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_oss_type arg)
  {
    msg_.hl_pdu1_activate_oss = std::move(arg);
    return Init_HLMsg03Legacy_hl_ice_enable(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_pdu1_activate_gnss
{
public:
  explicit Init_HLMsg03Legacy_hl_pdu1_activate_gnss(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_oss hl_pdu1_activate_gnss(::sd_can_msgs::msg::HLMsg03Legacy::_hl_pdu1_activate_gnss_type arg)
  {
    msg_.hl_pdu1_activate_gnss = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_oss(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_push_to_pass_on
{
public:
  explicit Init_HLMsg03Legacy_hl_push_to_pass_on(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_pdu1_activate_gnss hl_push_to_pass_on(::sd_can_msgs::msg::HLMsg03Legacy::_hl_push_to_pass_on_type arg)
  {
    msg_.hl_push_to_pass_on = std::move(arg);
    return Init_HLMsg03Legacy_hl_pdu1_activate_gnss(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_dbw_enable
{
public:
  explicit Init_HLMsg03Legacy_hl_dbw_enable(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_push_to_pass_on hl_dbw_enable(::sd_can_msgs::msg::HLMsg03Legacy::_hl_dbw_enable_type arg)
  {
    msg_.hl_dbw_enable = std::move(arg);
    return Init_HLMsg03Legacy_hl_push_to_pass_on(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_hl_alive_03
{
public:
  explicit Init_HLMsg03Legacy_hl_alive_03(::sd_can_msgs::msg::HLMsg03Legacy & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Legacy_hl_dbw_enable hl_alive_03(::sd_can_msgs::msg::HLMsg03Legacy::_hl_alive_03_type arg)
  {
    msg_.hl_alive_03 = std::move(arg);
    return Init_HLMsg03Legacy_hl_dbw_enable(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

class Init_HLMsg03Legacy_header
{
public:
  Init_HLMsg03Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg03Legacy_hl_alive_03 header(::sd_can_msgs::msg::HLMsg03Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg03Legacy_hl_alive_03(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg03Legacy>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg03Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__BUILDER_HPP_
