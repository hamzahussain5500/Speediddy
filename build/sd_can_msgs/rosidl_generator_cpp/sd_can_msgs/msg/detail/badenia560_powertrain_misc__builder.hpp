// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_powertrain_misc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560PowertrainMisc_fuel_used_kg
{
public:
  explicit Init_Badenia560PowertrainMisc_fuel_used_kg(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560PowertrainMisc fuel_used_kg(::sd_can_msgs::msg::Badenia560PowertrainMisc::_fuel_used_kg_type arg)
  {
    msg_.fuel_used_kg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_engine_speed_limit
{
public:
  explicit Init_Badenia560PowertrainMisc_engine_speed_limit(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_fuel_used_kg engine_speed_limit(::sd_can_msgs::msg::Badenia560PowertrainMisc::_engine_speed_limit_type arg)
  {
    msg_.engine_speed_limit = std::move(arg);
    return Init_Badenia560PowertrainMisc_fuel_used_kg(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_throttle_position
{
public:
  explicit Init_Badenia560PowertrainMisc_throttle_position(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_engine_speed_limit throttle_position(::sd_can_msgs::msg::Badenia560PowertrainMisc::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_Badenia560PowertrainMisc_engine_speed_limit(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_b48_temp
{
public:
  explicit Init_Badenia560PowertrainMisc_b48_temp(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_throttle_position b48_temp(::sd_can_msgs::msg::Badenia560PowertrainMisc::_b48_temp_type arg)
  {
    msg_.b48_temp = std::move(arg);
    return Init_Badenia560PowertrainMisc_throttle_position(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_b12_temp
{
public:
  explicit Init_Badenia560PowertrainMisc_b12_temp(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_b48_temp b12_temp(::sd_can_msgs::msg::Badenia560PowertrainMisc::_b12_temp_type arg)
  {
    msg_.b12_temp = std::move(arg);
    return Init_Badenia560PowertrainMisc_b48_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_b48_soc
{
public:
  explicit Init_Badenia560PowertrainMisc_b48_soc(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_b12_temp b48_soc(::sd_can_msgs::msg::Badenia560PowertrainMisc::_b48_soc_type arg)
  {
    msg_.b48_soc = std::move(arg);
    return Init_Badenia560PowertrainMisc_b12_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_b12_soc
{
public:
  explicit Init_Badenia560PowertrainMisc_b12_soc(::sd_can_msgs::msg::Badenia560PowertrainMisc & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainMisc_b48_soc b12_soc(::sd_can_msgs::msg::Badenia560PowertrainMisc::_b12_soc_type arg)
  {
    msg_.b12_soc = std::move(arg);
    return Init_Badenia560PowertrainMisc_b48_soc(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

class Init_Badenia560PowertrainMisc_header
{
public:
  Init_Badenia560PowertrainMisc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560PowertrainMisc_b12_soc header(::sd_can_msgs::msg::Badenia560PowertrainMisc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560PowertrainMisc_b12_soc(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainMisc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560PowertrainMisc>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560PowertrainMisc_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__BUILDER_HPP_
