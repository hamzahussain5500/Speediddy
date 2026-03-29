// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/PdUsStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/pd_us_status01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_PdUsStatus01_pdu2_total_current_a_legacy
{
public:
  explicit Init_PdUsStatus01_pdu2_total_current_a_legacy(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::PdUsStatus01 pdu2_total_current_a_legacy(::sd_can_msgs::msg::PdUsStatus01::_pdu2_total_current_a_legacy_type arg)
  {
    msg_.pdu2_total_current_a_legacy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu2_power_supply_voltage_v_legacy
{
public:
  explicit Init_PdUsStatus01_pdu2_power_supply_voltage_v_legacy(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu2_total_current_a_legacy pdu2_power_supply_voltage_v_legacy(::sd_can_msgs::msg::PdUsStatus01::_pdu2_power_supply_voltage_v_legacy_type arg)
  {
    msg_.pdu2_power_supply_voltage_v_legacy = std::move(arg);
    return Init_PdUsStatus01_pdu2_total_current_a_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu1_total_current_a_legacy
{
public:
  explicit Init_PdUsStatus01_pdu1_total_current_a_legacy(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu2_power_supply_voltage_v_legacy pdu1_total_current_a_legacy(::sd_can_msgs::msg::PdUsStatus01::_pdu1_total_current_a_legacy_type arg)
  {
    msg_.pdu1_total_current_a_legacy = std::move(arg);
    return Init_PdUsStatus01_pdu2_power_supply_voltage_v_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu1_power_supply_voltage_v_legacy
{
public:
  explicit Init_PdUsStatus01_pdu1_power_supply_voltage_v_legacy(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu1_total_current_a_legacy pdu1_power_supply_voltage_v_legacy(::sd_can_msgs::msg::PdUsStatus01::_pdu1_power_supply_voltage_v_legacy_type arg)
  {
    msg_.pdu1_power_supply_voltage_v_legacy = std::move(arg);
    return Init_PdUsStatus01_pdu1_total_current_a_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu48_total_current_a
{
public:
  explicit Init_PdUsStatus01_pdu48_total_current_a(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu1_power_supply_voltage_v_legacy pdu48_total_current_a(::sd_can_msgs::msg::PdUsStatus01::_pdu48_total_current_a_type arg)
  {
    msg_.pdu48_total_current_a = std::move(arg);
    return Init_PdUsStatus01_pdu1_power_supply_voltage_v_legacy(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu48_power_supply_voltage_v
{
public:
  explicit Init_PdUsStatus01_pdu48_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu48_total_current_a pdu48_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01::_pdu48_power_supply_voltage_v_type arg)
  {
    msg_.pdu48_power_supply_voltage_v = std::move(arg);
    return Init_PdUsStatus01_pdu48_total_current_a(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu12_total_current_a
{
public:
  explicit Init_PdUsStatus01_pdu12_total_current_a(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu48_power_supply_voltage_v pdu12_total_current_a(::sd_can_msgs::msg::PdUsStatus01::_pdu12_total_current_a_type arg)
  {
    msg_.pdu12_total_current_a = std::move(arg);
    return Init_PdUsStatus01_pdu48_power_supply_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_pdu12_power_supply_voltage_v
{
public:
  explicit Init_PdUsStatus01_pdu12_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01 & msg)
  : msg_(msg)
  {}
  Init_PdUsStatus01_pdu12_total_current_a pdu12_power_supply_voltage_v(::sd_can_msgs::msg::PdUsStatus01::_pdu12_power_supply_voltage_v_type arg)
  {
    msg_.pdu12_power_supply_voltage_v = std::move(arg);
    return Init_PdUsStatus01_pdu12_total_current_a(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

class Init_PdUsStatus01_header
{
public:
  Init_PdUsStatus01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PdUsStatus01_pdu12_power_supply_voltage_v header(::sd_can_msgs::msg::PdUsStatus01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PdUsStatus01_pdu12_power_supply_voltage_v(msg_);
  }

private:
  ::sd_can_msgs::msg::PdUsStatus01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::PdUsStatus01>()
{
  return sd_can_msgs::msg::builder::Init_PdUsStatus01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__PD_US_STATUS01__BUILDER_HPP_
