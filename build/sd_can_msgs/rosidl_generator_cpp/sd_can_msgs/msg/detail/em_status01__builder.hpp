// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/EMStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/em_status01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_EMStatus01_emb_tank_pressure_bar_legacy
{
public:
  explicit Init_EMStatus01_emb_tank_pressure_bar_legacy(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::EMStatus01 emb_tank_pressure_bar_legacy(::sd_can_msgs::msg::EMStatus01::_emb_tank_pressure_bar_legacy_type arg)
  {
    msg_.emb_tank_pressure_bar_legacy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_emb_line_pressure_bar_legacy
{
public:
  explicit Init_EMStatus01_emb_line_pressure_bar_legacy(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_emb_tank_pressure_bar_legacy emb_line_pressure_bar_legacy(::sd_can_msgs::msg::EMStatus01::_emb_line_pressure_bar_legacy_type arg)
  {
    msg_.emb_line_pressure_bar_legacy = std::move(arg);
    return Init_EMStatus01_emb_tank_pressure_bar_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_hl_stop_time_to_dec_2
{
public:
  explicit Init_EMStatus01_hl_stop_time_to_dec_2(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_emb_line_pressure_bar_legacy hl_stop_time_to_dec_2(::sd_can_msgs::msg::EMStatus01::_hl_stop_time_to_dec_2_type arg)
  {
    msg_.hl_stop_time_to_dec_2 = std::move(arg);
    return Init_EMStatus01_emb_line_pressure_bar_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_hl_stop_time_to_dec_1
{
public:
  explicit Init_EMStatus01_hl_stop_time_to_dec_1(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_hl_stop_time_to_dec_2 hl_stop_time_to_dec_1(::sd_can_msgs::msg::EMStatus01::_hl_stop_time_to_dec_1_type arg)
  {
    msg_.hl_stop_time_to_dec_1 = std::move(arg);
    return Init_EMStatus01_hl_stop_time_to_dec_2(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_hl_stop_deceleration_2
{
public:
  explicit Init_EMStatus01_hl_stop_deceleration_2(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_hl_stop_time_to_dec_1 hl_stop_deceleration_2(::sd_can_msgs::msg::EMStatus01::_hl_stop_deceleration_2_type arg)
  {
    msg_.hl_stop_deceleration_2 = std::move(arg);
    return Init_EMStatus01_hl_stop_time_to_dec_1(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_hl_stop_deceleration_1
{
public:
  explicit Init_EMStatus01_hl_stop_deceleration_1(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_hl_stop_deceleration_2 hl_stop_deceleration_1(::sd_can_msgs::msg::EMStatus01::_hl_stop_deceleration_1_type arg)
  {
    msg_.hl_stop_deceleration_1 = std::move(arg);
    return Init_EMStatus01_hl_stop_deceleration_2(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_em_status
{
public:
  explicit Init_EMStatus01_em_status(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_hl_stop_deceleration_1 em_status(::sd_can_msgs::msg::EMStatus01::_em_status_type arg)
  {
    msg_.em_status = std::move(arg);
    return Init_EMStatus01_hl_stop_deceleration_1(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_dcdc4812_voltage_v
{
public:
  explicit Init_EMStatus01_dcdc4812_voltage_v(::sd_can_msgs::msg::EMStatus01 & msg)
  : msg_(msg)
  {}
  Init_EMStatus01_em_status dcdc4812_voltage_v(::sd_can_msgs::msg::EMStatus01::_dcdc4812_voltage_v_type arg)
  {
    msg_.dcdc4812_voltage_v = std::move(arg);
    return Init_EMStatus01_em_status(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

class Init_EMStatus01_header
{
public:
  Init_EMStatus01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EMStatus01_dcdc4812_voltage_v header(::sd_can_msgs::msg::EMStatus01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EMStatus01_dcdc4812_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::EMStatus01>()
{
  return sd_can_msgs::msg::builder::Init_EMStatus01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__BUILDER_HPP_
