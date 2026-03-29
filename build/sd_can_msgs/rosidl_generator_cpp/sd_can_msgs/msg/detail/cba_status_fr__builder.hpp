// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/CbaStatusFr.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/cba_status_fr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_CbaStatusFr_cba_voltage_fr_v
{
public:
  explicit Init_CbaStatusFr_cba_voltage_fr_v(::sd_can_msgs::msg::CbaStatusFr & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::CbaStatusFr cba_voltage_fr_v(::sd_can_msgs::msg::CbaStatusFr::_cba_voltage_fr_v_type arg)
  {
    msg_.cba_voltage_fr_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

class Init_CbaStatusFr_cba_actual_current_fr_a
{
public:
  explicit Init_CbaStatusFr_cba_actual_current_fr_a(::sd_can_msgs::msg::CbaStatusFr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFr_cba_voltage_fr_v cba_actual_current_fr_a(::sd_can_msgs::msg::CbaStatusFr::_cba_actual_current_fr_a_type arg)
  {
    msg_.cba_actual_current_fr_a = std::move(arg);
    return Init_CbaStatusFr_cba_voltage_fr_v(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

class Init_CbaStatusFr_cba_target_pressure_fr_ack
{
public:
  explicit Init_CbaStatusFr_cba_target_pressure_fr_ack(::sd_can_msgs::msg::CbaStatusFr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFr_cba_actual_current_fr_a cba_target_pressure_fr_ack(::sd_can_msgs::msg::CbaStatusFr::_cba_target_pressure_fr_ack_type arg)
  {
    msg_.cba_target_pressure_fr_ack = std::move(arg);
    return Init_CbaStatusFr_cba_actual_current_fr_a(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

class Init_CbaStatusFr_cba_actual_pressure_fr
{
public:
  explicit Init_CbaStatusFr_cba_actual_pressure_fr(::sd_can_msgs::msg::CbaStatusFr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFr_cba_target_pressure_fr_ack cba_actual_pressure_fr(::sd_can_msgs::msg::CbaStatusFr::_cba_actual_pressure_fr_type arg)
  {
    msg_.cba_actual_pressure_fr = std::move(arg);
    return Init_CbaStatusFr_cba_target_pressure_fr_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

class Init_CbaStatusFr_cba_actual_pressure_fr_pa
{
public:
  explicit Init_CbaStatusFr_cba_actual_pressure_fr_pa(::sd_can_msgs::msg::CbaStatusFr & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFr_cba_actual_pressure_fr cba_actual_pressure_fr_pa(::sd_can_msgs::msg::CbaStatusFr::_cba_actual_pressure_fr_pa_type arg)
  {
    msg_.cba_actual_pressure_fr_pa = std::move(arg);
    return Init_CbaStatusFr_cba_actual_pressure_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

class Init_CbaStatusFr_header
{
public:
  Init_CbaStatusFr_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CbaStatusFr_cba_actual_pressure_fr_pa header(::sd_can_msgs::msg::CbaStatusFr::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CbaStatusFr_cba_actual_pressure_fr_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::CbaStatusFr>()
{
  return sd_can_msgs::msg::builder::Init_CbaStatusFr_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__BUILDER_HPP_
