// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_powertrain_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560PowertrainTemp_gear_box_oil_temp
{
public:
  explicit Init_Badenia560PowertrainTemp_gear_box_oil_temp(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560PowertrainTemp gear_box_oil_temp(::sd_can_msgs::msg::Badenia560PowertrainTemp::_gear_box_oil_temp_type arg)
  {
    msg_.gear_box_oil_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_coolant_temperature
{
public:
  explicit Init_Badenia560PowertrainTemp_coolant_temperature(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainTemp_gear_box_oil_temp coolant_temperature(::sd_can_msgs::msg::Badenia560PowertrainTemp::_coolant_temperature_type arg)
  {
    msg_.coolant_temperature = std::move(arg);
    return Init_Badenia560PowertrainTemp_gear_box_oil_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_engine_oil_temperature
{
public:
  explicit Init_Badenia560PowertrainTemp_engine_oil_temperature(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainTemp_coolant_temperature engine_oil_temperature(::sd_can_msgs::msg::Badenia560PowertrainTemp::_engine_oil_temperature_type arg)
  {
    msg_.engine_oil_temperature = std::move(arg);
    return Init_Badenia560PowertrainTemp_coolant_temperature(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_bsu_prefill_diag
{
public:
  explicit Init_Badenia560PowertrainTemp_bsu_prefill_diag(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainTemp_engine_oil_temperature bsu_prefill_diag(::sd_can_msgs::msg::Badenia560PowertrainTemp::_bsu_prefill_diag_type arg)
  {
    msg_.bsu_prefill_diag = std::move(arg);
    return Init_Badenia560PowertrainTemp_engine_oil_temperature(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_m_pushrod_strain_rr
{
public:
  explicit Init_Badenia560PowertrainTemp_m_pushrod_strain_rr(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainTemp_bsu_prefill_diag m_pushrod_strain_rr(::sd_can_msgs::msg::Badenia560PowertrainTemp::_m_pushrod_strain_rr_type arg)
  {
    msg_.m_pushrod_strain_rr = std::move(arg);
    return Init_Badenia560PowertrainTemp_bsu_prefill_diag(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_m_pushrod_strain_rl
{
public:
  explicit Init_Badenia560PowertrainTemp_m_pushrod_strain_rl(::sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainTemp_m_pushrod_strain_rr m_pushrod_strain_rl(::sd_can_msgs::msg::Badenia560PowertrainTemp::_m_pushrod_strain_rl_type arg)
  {
    msg_.m_pushrod_strain_rl = std::move(arg);
    return Init_Badenia560PowertrainTemp_m_pushrod_strain_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

class Init_Badenia560PowertrainTemp_header
{
public:
  Init_Badenia560PowertrainTemp_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560PowertrainTemp_m_pushrod_strain_rl header(::sd_can_msgs::msg::Badenia560PowertrainTemp::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560PowertrainTemp_m_pushrod_strain_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainTemp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560PowertrainTemp>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560PowertrainTemp_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__BUILDER_HPP_
