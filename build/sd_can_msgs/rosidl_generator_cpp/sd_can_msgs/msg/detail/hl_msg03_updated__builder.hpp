// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg03Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg03_updated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg03Updated_hl_switch_off_ok
{
public:
  explicit Init_HLMsg03Updated_hl_switch_off_ok(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg03Updated hl_switch_off_ok(::sd_can_msgs::msg::HLMsg03Updated::_hl_switch_off_ok_type arg)
  {
    msg_.hl_switch_off_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_crancking_by_pass
{
public:
  explicit Init_HLMsg03Updated_hl_crancking_by_pass(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_switch_off_ok hl_crancking_by_pass(::sd_can_msgs::msg::HLMsg03Updated::_hl_crancking_by_pass_type arg)
  {
    msg_.hl_crancking_by_pass = std::move(arg);
    return Init_HLMsg03Updated_hl_switch_off_ok(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_ice_start_fuel_level_l
{
public:
  explicit Init_HLMsg03Updated_ice_start_fuel_level_l(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_crancking_by_pass ice_start_fuel_level_l(::sd_can_msgs::msg::HLMsg03Updated::_ice_start_fuel_level_l_type arg)
  {
    msg_.ice_start_fuel_level_l = std::move(arg);
    return Init_HLMsg03Updated_hl_crancking_by_pass(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_pdu12_activate_radar
{
public:
  explicit Init_HLMsg03Updated_hl_pdu12_activate_radar(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_ice_start_fuel_level_l hl_pdu12_activate_radar(::sd_can_msgs::msg::HLMsg03Updated::_hl_pdu12_activate_radar_type arg)
  {
    msg_.hl_pdu12_activate_radar = std::move(arg);
    return Init_HLMsg03Updated_ice_start_fuel_level_l(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_pdu12_activate_lidar
{
public:
  explicit Init_HLMsg03Updated_hl_pdu12_activate_lidar(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_pdu12_activate_radar hl_pdu12_activate_lidar(::sd_can_msgs::msg::HLMsg03Updated::_hl_pdu12_activate_lidar_type arg)
  {
    msg_.hl_pdu12_activate_lidar = std::move(arg);
    return Init_HLMsg03Updated_hl_pdu12_activate_radar(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_ice_enable
{
public:
  explicit Init_HLMsg03Updated_hl_ice_enable(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_pdu12_activate_lidar hl_ice_enable(::sd_can_msgs::msg::HLMsg03Updated::_hl_ice_enable_type arg)
  {
    msg_.hl_ice_enable = std::move(arg);
    return Init_HLMsg03Updated_hl_pdu12_activate_lidar(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_pdu12_activate_oss
{
public:
  explicit Init_HLMsg03Updated_hl_pdu12_activate_oss(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_ice_enable hl_pdu12_activate_oss(::sd_can_msgs::msg::HLMsg03Updated::_hl_pdu12_activate_oss_type arg)
  {
    msg_.hl_pdu12_activate_oss = std::move(arg);
    return Init_HLMsg03Updated_hl_ice_enable(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_pdu12_activate_gnss
{
public:
  explicit Init_HLMsg03Updated_hl_pdu12_activate_gnss(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_pdu12_activate_oss hl_pdu12_activate_gnss(::sd_can_msgs::msg::HLMsg03Updated::_hl_pdu12_activate_gnss_type arg)
  {
    msg_.hl_pdu12_activate_gnss = std::move(arg);
    return Init_HLMsg03Updated_hl_pdu12_activate_oss(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_push_to_pass_on
{
public:
  explicit Init_HLMsg03Updated_hl_push_to_pass_on(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_pdu12_activate_gnss hl_push_to_pass_on(::sd_can_msgs::msg::HLMsg03Updated::_hl_push_to_pass_on_type arg)
  {
    msg_.hl_push_to_pass_on = std::move(arg);
    return Init_HLMsg03Updated_hl_pdu12_activate_gnss(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_dbw_enable
{
public:
  explicit Init_HLMsg03Updated_hl_dbw_enable(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_push_to_pass_on hl_dbw_enable(::sd_can_msgs::msg::HLMsg03Updated::_hl_dbw_enable_type arg)
  {
    msg_.hl_dbw_enable = std::move(arg);
    return Init_HLMsg03Updated_hl_push_to_pass_on(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_hl_alive_03
{
public:
  explicit Init_HLMsg03Updated_hl_alive_03(::sd_can_msgs::msg::HLMsg03Updated & msg)
  : msg_(msg)
  {}
  Init_HLMsg03Updated_hl_dbw_enable hl_alive_03(::sd_can_msgs::msg::HLMsg03Updated::_hl_alive_03_type arg)
  {
    msg_.hl_alive_03 = std::move(arg);
    return Init_HLMsg03Updated_hl_dbw_enable(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

class Init_HLMsg03Updated_header
{
public:
  Init_HLMsg03Updated_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg03Updated_hl_alive_03 header(::sd_can_msgs::msg::HLMsg03Updated::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg03Updated_hl_alive_03(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg03Updated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg03Updated>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg03Updated_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_UPDATED__BUILDER_HPP_
