// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/diagnostic_word02_updated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticWord02Updated_ice_oil_temp_by_pass_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_ice_oil_temp_by_pass_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::DiagnosticWord02Updated ice_oil_temp_by_pass_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_ice_oil_temp_by_pass_not_received_type arg)
  {
    msg_.ice_oil_temp_by_pass_not_received = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_ice_fuel_pres_start_limit_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_ice_fuel_pres_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_ice_oil_temp_by_pass_not_received ice_fuel_pres_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_ice_fuel_pres_start_limit_not_rec_type arg)
  {
    msg_.ice_fuel_pres_start_limit_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_ice_oil_temp_by_pass_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_heater_oil_temp_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_heater_oil_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_ice_fuel_pres_start_limit_not_rec heater_oil_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_heater_oil_temp_max_value_not_rec_type arg)
  {
    msg_.heater_oil_temp_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_ice_fuel_pres_start_limit_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_fan_water_temp_min_value_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_fan_water_temp_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_heater_oil_temp_max_value_not_rec fan_water_temp_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_fan_water_temp_min_value_not_rec_type arg)
  {
    msg_.fan_water_temp_min_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_heater_oil_temp_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_fan_water_temp_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_fan_water_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_fan_water_temp_min_value_not_rec fan_water_temp_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_fan_water_temp_max_value_not_rec_type arg)
  {
    msg_.fan_water_temp_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_fan_water_temp_min_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_fan_car_speed_min_value_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_fan_car_speed_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_fan_water_temp_max_value_not_rec fan_car_speed_min_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_fan_car_speed_min_value_not_rec_type arg)
  {
    msg_.fan_car_speed_min_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_fan_water_temp_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_fan_car_speed_max_value_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_fan_car_speed_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_fan_car_speed_min_value_not_rec fan_car_speed_max_value_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_fan_car_speed_max_value_not_rec_type arg)
  {
    msg_.fan_car_speed_max_value_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_fan_car_speed_min_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_limp_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_limp_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_fan_car_speed_max_value_not_rec limp_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_limp_sat_values_not_received_type arg)
  {
    msg_.limp_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02Updated_fan_car_speed_max_value_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_psa_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_psa_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_limp_sat_values_not_received psa_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_psa_sat_values_not_received_type arg)
  {
    msg_.psa_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02Updated_limp_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_ml_stop_brake_sat_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_ml_stop_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_psa_sat_values_not_received ml_stop_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_ml_stop_brake_sat_not_received_type arg)
  {
    msg_.ml_stop_brake_sat_not_received = std::move(arg);
    return Init_DiagnosticWord02Updated_psa_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_ice_oil_temp_start_limit_not_rec
{
public:
  explicit Init_DiagnosticWord02Updated_ice_oil_temp_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_ml_stop_brake_sat_not_received ice_oil_temp_start_limit_not_rec(::sd_can_msgs::msg::DiagnosticWord02Updated::_ice_oil_temp_start_limit_not_rec_type arg)
  {
    msg_.ice_oil_temp_start_limit_not_rec = std::move(arg);
    return Init_DiagnosticWord02Updated_ml_stop_brake_sat_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_cba_sat_values_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_cba_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_ice_oil_temp_start_limit_not_rec cba_sat_values_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_cba_sat_values_not_received_type arg)
  {
    msg_.cba_sat_values_not_received = std::move(arg);
    return Init_DiagnosticWord02Updated_ice_oil_temp_start_limit_not_rec(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_cba_em_brake_sat_not_received
{
public:
  explicit Init_DiagnosticWord02Updated_cba_em_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_cba_sat_values_not_received cba_em_brake_sat_not_received(::sd_can_msgs::msg::DiagnosticWord02Updated::_cba_em_brake_sat_not_received_type arg)
  {
    msg_.cba_em_brake_sat_not_received = std::move(arg);
    return Init_DiagnosticWord02Updated_cba_sat_values_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_display_counter_error
{
public:
  explicit Init_DiagnosticWord02Updated_display_counter_error(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_cba_em_brake_sat_not_received display_counter_error(::sd_can_msgs::msg::DiagnosticWord02Updated::_display_counter_error_type arg)
  {
    msg_.display_counter_error = std::move(arg);
    return Init_DiagnosticWord02Updated_cba_em_brake_sat_not_received(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_rm_safe_stop
{
public:
  explicit Init_DiagnosticWord02Updated_rm_safe_stop(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_display_counter_error rm_safe_stop(::sd_can_msgs::msg::DiagnosticWord02Updated::_rm_safe_stop_type arg)
  {
    msg_.rm_safe_stop = std::move(arg);
    return Init_DiagnosticWord02Updated_display_counter_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_rm_red_flag
{
public:
  explicit Init_DiagnosticWord02Updated_rm_red_flag(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_rm_safe_stop rm_red_flag(::sd_can_msgs::msg::DiagnosticWord02Updated::_rm_red_flag_type arg)
  {
    msg_.rm_red_flag = std::move(arg);
    return Init_DiagnosticWord02Updated_rm_safe_stop(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_display_timeout_error
{
public:
  explicit Init_DiagnosticWord02Updated_display_timeout_error(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_rm_red_flag display_timeout_error(::sd_can_msgs::msg::DiagnosticWord02Updated::_display_timeout_error_type arg)
  {
    msg_.display_timeout_error = std::move(arg);
    return Init_DiagnosticWord02Updated_rm_red_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_rc_beacon_time_out
{
public:
  explicit Init_DiagnosticWord02Updated_rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_display_timeout_error rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02Updated::_rc_beacon_time_out_type arg)
  {
    msg_.rc_beacon_time_out = std::move(arg);
    return Init_DiagnosticWord02Updated_display_timeout_error(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_rc_force_race_mode
{
public:
  explicit Init_DiagnosticWord02Updated_rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02Updated & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Updated_rc_beacon_time_out rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02Updated::_rc_force_race_mode_type arg)
  {
    msg_.rc_force_race_mode = std::move(arg);
    return Init_DiagnosticWord02Updated_rc_beacon_time_out(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

class Init_DiagnosticWord02Updated_header
{
public:
  Init_DiagnosticWord02Updated_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticWord02Updated_rc_force_race_mode header(::sd_can_msgs::msg::DiagnosticWord02Updated::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticWord02Updated_rc_force_race_mode(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Updated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::DiagnosticWord02Updated>()
{
  return sd_can_msgs::msg::builder::Init_DiagnosticWord02Updated_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__BUILDER_HPP_
