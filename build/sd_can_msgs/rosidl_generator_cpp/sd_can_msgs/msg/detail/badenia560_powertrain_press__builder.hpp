// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainPress.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_powertrain_press__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560PowertrainPress_boost_pressure
{
public:
  explicit Init_Badenia560PowertrainPress_boost_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560PowertrainPress boost_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress::_boost_pressure_type arg)
  {
    msg_.boost_pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_fuel_press_direct
{
public:
  explicit Init_Badenia560PowertrainPress_fuel_press_direct(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainPress_boost_pressure fuel_press_direct(::sd_can_msgs::msg::Badenia560PowertrainPress::_fuel_press_direct_type arg)
  {
    msg_.fuel_press_direct = std::move(arg);
    return Init_Badenia560PowertrainPress_boost_pressure(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_coolant_pressure
{
public:
  explicit Init_Badenia560PowertrainPress_coolant_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainPress_fuel_press_direct coolant_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress::_coolant_pressure_type arg)
  {
    msg_.coolant_pressure = std::move(arg);
    return Init_Badenia560PowertrainPress_fuel_press_direct(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_engine_oil_pressure
{
public:
  explicit Init_Badenia560PowertrainPress_engine_oil_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainPress_coolant_pressure engine_oil_pressure(::sd_can_msgs::msg::Badenia560PowertrainPress::_engine_oil_pressure_type arg)
  {
    msg_.engine_oil_pressure = std::move(arg);
    return Init_Badenia560PowertrainPress_coolant_pressure(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_m_pushrod_strain_fr
{
public:
  explicit Init_Badenia560PowertrainPress_m_pushrod_strain_fr(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainPress_engine_oil_pressure m_pushrod_strain_fr(::sd_can_msgs::msg::Badenia560PowertrainPress::_m_pushrod_strain_fr_type arg)
  {
    msg_.m_pushrod_strain_fr = std::move(arg);
    return Init_Badenia560PowertrainPress_engine_oil_pressure(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_m_pushrod_strain_fl
{
public:
  explicit Init_Badenia560PowertrainPress_m_pushrod_strain_fl(::sd_can_msgs::msg::Badenia560PowertrainPress & msg)
  : msg_(msg)
  {}
  Init_Badenia560PowertrainPress_m_pushrod_strain_fr m_pushrod_strain_fl(::sd_can_msgs::msg::Badenia560PowertrainPress::_m_pushrod_strain_fl_type arg)
  {
    msg_.m_pushrod_strain_fl = std::move(arg);
    return Init_Badenia560PowertrainPress_m_pushrod_strain_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

class Init_Badenia560PowertrainPress_header
{
public:
  Init_Badenia560PowertrainPress_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560PowertrainPress_m_pushrod_strain_fl header(::sd_can_msgs::msg::Badenia560PowertrainPress::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560PowertrainPress_m_pushrod_strain_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560PowertrainPress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560PowertrainPress>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560PowertrainPress_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_PRESS__BUILDER_HPP_
