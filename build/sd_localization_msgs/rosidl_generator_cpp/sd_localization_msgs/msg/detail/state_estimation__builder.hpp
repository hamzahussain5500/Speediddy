// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice

#ifndef SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__BUILDER_HPP_
#define SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_localization_msgs/msg/detail/state_estimation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_StateEstimation_sn_map_state
{
public:
  explicit Init_StateEstimation_sn_map_state(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  ::sd_localization_msgs::msg::StateEstimation sn_map_state(::sd_localization_msgs::msg::StateEstimation::_sn_map_state_type arg)
  {
    msg_.sn_map_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_cba_actual_pressure_rr_pa
{
public:
  explicit Init_StateEstimation_cba_actual_pressure_rr_pa(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_sn_map_state cba_actual_pressure_rr_pa(::sd_localization_msgs::msg::StateEstimation::_cba_actual_pressure_rr_pa_type arg)
  {
    msg_.cba_actual_pressure_rr_pa = std::move(arg);
    return Init_StateEstimation_sn_map_state(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_cba_actual_pressure_rl_pa
{
public:
  explicit Init_StateEstimation_cba_actual_pressure_rl_pa(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_cba_actual_pressure_rr_pa cba_actual_pressure_rl_pa(::sd_localization_msgs::msg::StateEstimation::_cba_actual_pressure_rl_pa_type arg)
  {
    msg_.cba_actual_pressure_rl_pa = std::move(arg);
    return Init_StateEstimation_cba_actual_pressure_rr_pa(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_cba_actual_pressure_fr_pa
{
public:
  explicit Init_StateEstimation_cba_actual_pressure_fr_pa(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_cba_actual_pressure_rl_pa cba_actual_pressure_fr_pa(::sd_localization_msgs::msg::StateEstimation::_cba_actual_pressure_fr_pa_type arg)
  {
    msg_.cba_actual_pressure_fr_pa = std::move(arg);
    return Init_StateEstimation_cba_actual_pressure_rl_pa(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_cba_actual_pressure_fl_pa
{
public:
  explicit Init_StateEstimation_cba_actual_pressure_fl_pa(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_cba_actual_pressure_fr_pa cba_actual_pressure_fl_pa(::sd_localization_msgs::msg::StateEstimation::_cba_actual_pressure_fl_pa_type arg)
  {
    msg_.cba_actual_pressure_fl_pa = std::move(arg);
    return Init_StateEstimation_cba_actual_pressure_fr_pa(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_is_safe
{
public:
  explicit Init_StateEstimation_is_safe(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_cba_actual_pressure_fl_pa is_safe(::sd_localization_msgs::msg::StateEstimation::_is_safe_type arg)
  {
    msg_.is_safe = std::move(arg);
    return Init_StateEstimation_cba_actual_pressure_fl_pa(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_std_dev_status
{
public:
  explicit Init_StateEstimation_std_dev_status(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_is_safe std_dev_status(::sd_localization_msgs::msg::StateEstimation::_std_dev_status_type arg)
  {
    msg_.std_dev_status = std::move(arg);
    return Init_StateEstimation_is_safe(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_residuals_status
{
public:
  explicit Init_StateEstimation_residuals_status(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_std_dev_status residuals_status(::sd_localization_msgs::msg::StateEstimation::_residuals_status_type arg)
  {
    msg_.residuals_status = std::move(arg);
    return Init_StateEstimation_std_dev_status(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_vehicle_timestamp
{
public:
  explicit Init_StateEstimation_vehicle_timestamp(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_residuals_status vehicle_timestamp(::sd_localization_msgs::msg::StateEstimation::_vehicle_timestamp_type arg)
  {
    msg_.vehicle_timestamp = std::move(arg);
    return Init_StateEstimation_residuals_status(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_rear_brake_pressure
{
public:
  explicit Init_StateEstimation_rear_brake_pressure(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_vehicle_timestamp rear_brake_pressure(::sd_localization_msgs::msg::StateEstimation::_rear_brake_pressure_type arg)
  {
    msg_.rear_brake_pressure = std::move(arg);
    return Init_StateEstimation_vehicle_timestamp(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_front_brake_pressure
{
public:
  explicit Init_StateEstimation_front_brake_pressure(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_rear_brake_pressure front_brake_pressure(::sd_localization_msgs::msg::StateEstimation::_front_brake_pressure_type arg)
  {
    msg_.front_brake_pressure = std::move(arg);
    return Init_StateEstimation_rear_brake_pressure(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_rpm
{
public:
  explicit Init_StateEstimation_rpm(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_front_brake_pressure rpm(::sd_localization_msgs::msg::StateEstimation::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_StateEstimation_front_brake_pressure(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_gear
{
public:
  explicit Init_StateEstimation_gear(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_rpm gear(::sd_localization_msgs::msg::StateEstimation::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_StateEstimation_rpm(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_clutch
{
public:
  explicit Init_StateEstimation_clutch(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_gear clutch(::sd_localization_msgs::msg::StateEstimation::_clutch_type arg)
  {
    msg_.clutch = std::move(arg);
    return Init_StateEstimation_gear(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_brake
{
public:
  explicit Init_StateEstimation_brake(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_clutch brake(::sd_localization_msgs::msg::StateEstimation::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_StateEstimation_clutch(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_gas
{
public:
  explicit Init_StateEstimation_gas(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_brake gas(::sd_localization_msgs::msg::StateEstimation::_gas_type arg)
  {
    msg_.gas = std::move(arg);
    return Init_StateEstimation_brake(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_timestamp
{
public:
  explicit Init_StateEstimation_timestamp(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_gas timestamp(::sd_localization_msgs::msg::StateEstimation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_StateEstimation_gas(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_delta_wheel_rad
{
public:
  explicit Init_StateEstimation_delta_wheel_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_timestamp delta_wheel_rad(::sd_localization_msgs::msg::StateEstimation::_delta_wheel_rad_type arg)
  {
    msg_.delta_wheel_rad = std::move(arg);
    return Init_StateEstimation_timestamp(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_diff_fr_alpha_rad
{
public:
  explicit Init_StateEstimation_diff_fr_alpha_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_delta_wheel_rad diff_fr_alpha_rad(::sd_localization_msgs::msg::StateEstimation::_diff_fr_alpha_rad_type arg)
  {
    msg_.diff_fr_alpha_rad = std::move(arg);
    return Init_StateEstimation_delta_wheel_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_alpha_rr_rad
{
public:
  explicit Init_StateEstimation_alpha_rr_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_diff_fr_alpha_rad alpha_rr_rad(::sd_localization_msgs::msg::StateEstimation::_alpha_rr_rad_type arg)
  {
    msg_.alpha_rr_rad = std::move(arg);
    return Init_StateEstimation_diff_fr_alpha_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_alpha_rl_rad
{
public:
  explicit Init_StateEstimation_alpha_rl_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_alpha_rr_rad alpha_rl_rad(::sd_localization_msgs::msg::StateEstimation::_alpha_rl_rad_type arg)
  {
    msg_.alpha_rl_rad = std::move(arg);
    return Init_StateEstimation_alpha_rr_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_alpha_fr_rad
{
public:
  explicit Init_StateEstimation_alpha_fr_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_alpha_rl_rad alpha_fr_rad(::sd_localization_msgs::msg::StateEstimation::_alpha_fr_rad_type arg)
  {
    msg_.alpha_fr_rad = std::move(arg);
    return Init_StateEstimation_alpha_rl_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_alpha_fl_rad
{
public:
  explicit Init_StateEstimation_alpha_fl_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_alpha_fr_rad alpha_fl_rad(::sd_localization_msgs::msg::StateEstimation::_alpha_fl_rad_type arg)
  {
    msg_.alpha_fl_rad = std::move(arg);
    return Init_StateEstimation_alpha_fr_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_valid_wheelsspeeds_b
{
public:
  explicit Init_StateEstimation_valid_wheelsspeeds_b(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_alpha_fl_rad valid_wheelsspeeds_b(::sd_localization_msgs::msg::StateEstimation::_valid_wheelsspeeds_b_type arg)
  {
    msg_.valid_wheelsspeeds_b = std::move(arg);
    return Init_StateEstimation_alpha_fl_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_lambda_rr_perc
{
public:
  explicit Init_StateEstimation_lambda_rr_perc(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_valid_wheelsspeeds_b lambda_rr_perc(::sd_localization_msgs::msg::StateEstimation::_lambda_rr_perc_type arg)
  {
    msg_.lambda_rr_perc = std::move(arg);
    return Init_StateEstimation_valid_wheelsspeeds_b(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_lambda_rl_perc
{
public:
  explicit Init_StateEstimation_lambda_rl_perc(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_lambda_rr_perc lambda_rl_perc(::sd_localization_msgs::msg::StateEstimation::_lambda_rl_perc_type arg)
  {
    msg_.lambda_rl_perc = std::move(arg);
    return Init_StateEstimation_lambda_rr_perc(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_lambda_fr_perc
{
public:
  explicit Init_StateEstimation_lambda_fr_perc(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_lambda_rl_perc lambda_fr_perc(::sd_localization_msgs::msg::StateEstimation::_lambda_fr_perc_type arg)
  {
    msg_.lambda_fr_perc = std::move(arg);
    return Init_StateEstimation_lambda_rl_perc(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_lambda_fl_perc
{
public:
  explicit Init_StateEstimation_lambda_fl_perc(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_lambda_fr_perc lambda_fl_perc(::sd_localization_msgs::msg::StateEstimation::_lambda_fl_perc_type arg)
  {
    msg_.lambda_fl_perc = std::move(arg);
    return Init_StateEstimation_lambda_fr_perc(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_ay_vel_mps2
{
public:
  explicit Init_StateEstimation_ay_vel_mps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_lambda_fl_perc ay_vel_mps2(::sd_localization_msgs::msg::StateEstimation::_ay_vel_mps2_type arg)
  {
    msg_.ay_vel_mps2 = std::move(arg);
    return Init_StateEstimation_lambda_fl_perc(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_ax_vel_mps2
{
public:
  explicit Init_StateEstimation_ax_vel_mps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_ay_vel_mps2 ax_vel_mps2(::sd_localization_msgs::msg::StateEstimation::_ax_vel_mps2_type arg)
  {
    msg_.ax_vel_mps2 = std::move(arg);
    return Init_StateEstimation_ay_vel_mps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_ddyaw_radps2
{
public:
  explicit Init_StateEstimation_ddyaw_radps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_ax_vel_mps2 ddyaw_radps2(::sd_localization_msgs::msg::StateEstimation::_ddyaw_radps2_type arg)
  {
    msg_.ddyaw_radps2 = std::move(arg);
    return Init_StateEstimation_ax_vel_mps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_dbeta_radps
{
public:
  explicit Init_StateEstimation_dbeta_radps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_ddyaw_radps2 dbeta_radps(::sd_localization_msgs::msg::StateEstimation::_dbeta_radps_type arg)
  {
    msg_.dbeta_radps = std::move(arg);
    return Init_StateEstimation_ddyaw_radps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_kappa_radpm
{
public:
  explicit Init_StateEstimation_kappa_radpm(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_dbeta_radps kappa_radpm(::sd_localization_msgs::msg::StateEstimation::_kappa_radpm_type arg)
  {
    msg_.kappa_radpm = std::move(arg);
    return Init_StateEstimation_dbeta_radps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_yaw_vel_rad
{
public:
  explicit Init_StateEstimation_yaw_vel_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_kappa_radpm yaw_vel_rad(::sd_localization_msgs::msg::StateEstimation::_yaw_vel_rad_type arg)
  {
    msg_.yaw_vel_rad = std::move(arg);
    return Init_StateEstimation_kappa_radpm(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_valid_imu_b
{
public:
  explicit Init_StateEstimation_valid_imu_b(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_yaw_vel_rad valid_imu_b(::sd_localization_msgs::msg::StateEstimation::_valid_imu_b_type arg)
  {
    msg_.valid_imu_b = std::move(arg);
    return Init_StateEstimation_yaw_vel_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_az_mps2
{
public:
  explicit Init_StateEstimation_az_mps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_valid_imu_b az_mps2(::sd_localization_msgs::msg::StateEstimation::_az_mps2_type arg)
  {
    msg_.az_mps2 = std::move(arg);
    return Init_StateEstimation_valid_imu_b(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_ay_mps2
{
public:
  explicit Init_StateEstimation_ay_mps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_az_mps2 ay_mps2(::sd_localization_msgs::msg::StateEstimation::_ay_mps2_type arg)
  {
    msg_.ay_mps2 = std::move(arg);
    return Init_StateEstimation_az_mps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_ax_mps2
{
public:
  explicit Init_StateEstimation_ax_mps2(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_ay_mps2 ax_mps2(::sd_localization_msgs::msg::StateEstimation::_ax_mps2_type arg)
  {
    msg_.ax_mps2 = std::move(arg);
    return Init_StateEstimation_ay_mps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_beta_rad
{
public:
  explicit Init_StateEstimation_beta_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_ax_mps2 beta_rad(::sd_localization_msgs::msg::StateEstimation::_beta_rad_type arg)
  {
    msg_.beta_rad = std::move(arg);
    return Init_StateEstimation_ax_mps2(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_v_raw_mps
{
public:
  explicit Init_StateEstimation_v_raw_mps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_beta_rad v_raw_mps(::sd_localization_msgs::msg::StateEstimation::_v_raw_mps_type arg)
  {
    msg_.v_raw_mps = std::move(arg);
    return Init_StateEstimation_beta_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_v_mps
{
public:
  explicit Init_StateEstimation_v_mps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_v_raw_mps v_mps(::sd_localization_msgs::msg::StateEstimation::_v_mps_type arg)
  {
    msg_.v_mps = std::move(arg);
    return Init_StateEstimation_v_raw_mps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_omega_w_rr
{
public:
  explicit Init_StateEstimation_omega_w_rr(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_v_mps omega_w_rr(::sd_localization_msgs::msg::StateEstimation::_omega_w_rr_type arg)
  {
    msg_.omega_w_rr = std::move(arg);
    return Init_StateEstimation_v_mps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_omega_w_rl
{
public:
  explicit Init_StateEstimation_omega_w_rl(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_omega_w_rr omega_w_rl(::sd_localization_msgs::msg::StateEstimation::_omega_w_rl_type arg)
  {
    msg_.omega_w_rl = std::move(arg);
    return Init_StateEstimation_omega_w_rr(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_omega_w_fr
{
public:
  explicit Init_StateEstimation_omega_w_fr(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_omega_w_rl omega_w_fr(::sd_localization_msgs::msg::StateEstimation::_omega_w_fr_type arg)
  {
    msg_.omega_w_fr = std::move(arg);
    return Init_StateEstimation_omega_w_rl(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_omega_w_fl
{
public:
  explicit Init_StateEstimation_omega_w_fl(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_omega_w_fr omega_w_fl(::sd_localization_msgs::msg::StateEstimation::_omega_w_fl_type arg)
  {
    msg_.omega_w_fl = std::move(arg);
    return Init_StateEstimation_omega_w_fr(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_vz_mps
{
public:
  explicit Init_StateEstimation_vz_mps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_omega_w_fl vz_mps(::sd_localization_msgs::msg::StateEstimation::_vz_mps_type arg)
  {
    msg_.vz_mps = std::move(arg);
    return Init_StateEstimation_omega_w_fl(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_vy_mps
{
public:
  explicit Init_StateEstimation_vy_mps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_vz_mps vy_mps(::sd_localization_msgs::msg::StateEstimation::_vy_mps_type arg)
  {
    msg_.vy_mps = std::move(arg);
    return Init_StateEstimation_vz_mps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_vx_mps
{
public:
  explicit Init_StateEstimation_vx_mps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_vy_mps vx_mps(::sd_localization_msgs::msg::StateEstimation::_vx_mps_type arg)
  {
    msg_.vx_mps = std::move(arg);
    return Init_StateEstimation_vy_mps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_wz_radps
{
public:
  explicit Init_StateEstimation_wz_radps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_vx_mps wz_radps(::sd_localization_msgs::msg::StateEstimation::_wz_radps_type arg)
  {
    msg_.wz_radps = std::move(arg);
    return Init_StateEstimation_vx_mps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_wy_radps
{
public:
  explicit Init_StateEstimation_wy_radps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_wz_radps wy_radps(::sd_localization_msgs::msg::StateEstimation::_wy_radps_type arg)
  {
    msg_.wy_radps = std::move(arg);
    return Init_StateEstimation_wz_radps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_wx_radps
{
public:
  explicit Init_StateEstimation_wx_radps(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_wy_radps wx_radps(::sd_localization_msgs::msg::StateEstimation::_wx_radps_type arg)
  {
    msg_.wx_radps = std::move(arg);
    return Init_StateEstimation_wy_radps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_vel_accuracy
{
public:
  explicit Init_StateEstimation_vel_accuracy(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_wx_radps vel_accuracy(::sd_localization_msgs::msg::StateEstimation::_vel_accuracy_type arg)
  {
    msg_.vel_accuracy = std::move(arg);
    return Init_StateEstimation_wx_radps(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_pos_accuracy
{
public:
  explicit Init_StateEstimation_pos_accuracy(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_vel_accuracy pos_accuracy(::sd_localization_msgs::msg::StateEstimation::_pos_accuracy_type arg)
  {
    msg_.pos_accuracy = std::move(arg);
    return Init_StateEstimation_vel_accuracy(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_yaw_rad
{
public:
  explicit Init_StateEstimation_yaw_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_pos_accuracy yaw_rad(::sd_localization_msgs::msg::StateEstimation::_yaw_rad_type arg)
  {
    msg_.yaw_rad = std::move(arg);
    return Init_StateEstimation_pos_accuracy(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_pitch_rad
{
public:
  explicit Init_StateEstimation_pitch_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_yaw_rad pitch_rad(::sd_localization_msgs::msg::StateEstimation::_pitch_rad_type arg)
  {
    msg_.pitch_rad = std::move(arg);
    return Init_StateEstimation_yaw_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_roll_rad
{
public:
  explicit Init_StateEstimation_roll_rad(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_pitch_rad roll_rad(::sd_localization_msgs::msg::StateEstimation::_roll_rad_type arg)
  {
    msg_.roll_rad = std::move(arg);
    return Init_StateEstimation_pitch_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_z_m
{
public:
  explicit Init_StateEstimation_z_m(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_roll_rad z_m(::sd_localization_msgs::msg::StateEstimation::_z_m_type arg)
  {
    msg_.z_m = std::move(arg);
    return Init_StateEstimation_roll_rad(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_y_m
{
public:
  explicit Init_StateEstimation_y_m(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_z_m y_m(::sd_localization_msgs::msg::StateEstimation::_y_m_type arg)
  {
    msg_.y_m = std::move(arg);
    return Init_StateEstimation_z_m(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_x_m
{
public:
  explicit Init_StateEstimation_x_m(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_y_m x_m(::sd_localization_msgs::msg::StateEstimation::_x_m_type arg)
  {
    msg_.x_m = std::move(arg);
    return Init_StateEstimation_y_m(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_se_state
{
public:
  explicit Init_StateEstimation_se_state(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_x_m se_state(::sd_localization_msgs::msg::StateEstimation::_se_state_type arg)
  {
    msg_.se_state = std::move(arg);
    return Init_StateEstimation_x_m(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_se_status
{
public:
  explicit Init_StateEstimation_se_status(::sd_localization_msgs::msg::StateEstimation & msg)
  : msg_(msg)
  {}
  Init_StateEstimation_se_state se_status(::sd_localization_msgs::msg::StateEstimation::_se_status_type arg)
  {
    msg_.se_status = std::move(arg);
    return Init_StateEstimation_se_state(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

class Init_StateEstimation_header
{
public:
  Init_StateEstimation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateEstimation_se_status header(::sd_localization_msgs::msg::StateEstimation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateEstimation_se_status(msg_);
  }

private:
  ::sd_localization_msgs::msg::StateEstimation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_localization_msgs::msg::StateEstimation>()
{
  return sd_localization_msgs::msg::builder::Init_StateEstimation_header();
}

}  // namespace sd_localization_msgs

#endif  // SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__BUILDER_HPP_
