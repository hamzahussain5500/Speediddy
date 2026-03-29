// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/CbaStatusFl.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/cba_status_fl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_CbaStatusFl_cba_voltage_fl_v
{
public:
  explicit Init_CbaStatusFl_cba_voltage_fl_v(::sd_can_msgs::msg::CbaStatusFl & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::CbaStatusFl cba_voltage_fl_v(::sd_can_msgs::msg::CbaStatusFl::_cba_voltage_fl_v_type arg)
  {
    msg_.cba_voltage_fl_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

class Init_CbaStatusFl_cba_actual_current_fl_a
{
public:
  explicit Init_CbaStatusFl_cba_actual_current_fl_a(::sd_can_msgs::msg::CbaStatusFl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFl_cba_voltage_fl_v cba_actual_current_fl_a(::sd_can_msgs::msg::CbaStatusFl::_cba_actual_current_fl_a_type arg)
  {
    msg_.cba_actual_current_fl_a = std::move(arg);
    return Init_CbaStatusFl_cba_voltage_fl_v(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

class Init_CbaStatusFl_cba_target_pressure_fl_ack
{
public:
  explicit Init_CbaStatusFl_cba_target_pressure_fl_ack(::sd_can_msgs::msg::CbaStatusFl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFl_cba_actual_current_fl_a cba_target_pressure_fl_ack(::sd_can_msgs::msg::CbaStatusFl::_cba_target_pressure_fl_ack_type arg)
  {
    msg_.cba_target_pressure_fl_ack = std::move(arg);
    return Init_CbaStatusFl_cba_actual_current_fl_a(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

class Init_CbaStatusFl_cba_actual_pressure_fl
{
public:
  explicit Init_CbaStatusFl_cba_actual_pressure_fl(::sd_can_msgs::msg::CbaStatusFl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFl_cba_target_pressure_fl_ack cba_actual_pressure_fl(::sd_can_msgs::msg::CbaStatusFl::_cba_actual_pressure_fl_type arg)
  {
    msg_.cba_actual_pressure_fl = std::move(arg);
    return Init_CbaStatusFl_cba_target_pressure_fl_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

class Init_CbaStatusFl_cba_actual_pressure_fl_pa
{
public:
  explicit Init_CbaStatusFl_cba_actual_pressure_fl_pa(::sd_can_msgs::msg::CbaStatusFl & msg)
  : msg_(msg)
  {}
  Init_CbaStatusFl_cba_actual_pressure_fl cba_actual_pressure_fl_pa(::sd_can_msgs::msg::CbaStatusFl::_cba_actual_pressure_fl_pa_type arg)
  {
    msg_.cba_actual_pressure_fl_pa = std::move(arg);
    return Init_CbaStatusFl_cba_actual_pressure_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

class Init_CbaStatusFl_header
{
public:
  Init_CbaStatusFl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CbaStatusFl_cba_actual_pressure_fl_pa header(::sd_can_msgs::msg::CbaStatusFl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CbaStatusFl_cba_actual_pressure_fl_pa(msg_);
  }

private:
  ::sd_can_msgs::msg::CbaStatusFl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::CbaStatusFl>()
{
  return sd_can_msgs::msg::builder::Init_CbaStatusFl_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FL__BUILDER_HPP_
