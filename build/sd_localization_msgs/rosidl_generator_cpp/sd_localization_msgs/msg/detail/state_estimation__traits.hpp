// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice

#ifndef SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__TRAITS_HPP_
#define SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_localization_msgs/msg/detail/state_estimation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sn_map_state'
#include "sd_map_msgs/msg/detail/sn_map_state__traits.hpp"

namespace sd_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateEstimation & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: se_status
  {
    out << "se_status: ";
    rosidl_generator_traits::value_to_yaml(msg.se_status, out);
    out << ", ";
  }

  // member: se_state
  {
    out << "se_state: ";
    rosidl_generator_traits::value_to_yaml(msg.se_state, out);
    out << ", ";
  }

  // member: x_m
  {
    out << "x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_m, out);
    out << ", ";
  }

  // member: y_m
  {
    out << "y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.y_m, out);
    out << ", ";
  }

  // member: z_m
  {
    out << "z_m: ";
    rosidl_generator_traits::value_to_yaml(msg.z_m, out);
    out << ", ";
  }

  // member: roll_rad
  {
    out << "roll_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rad, out);
    out << ", ";
  }

  // member: pitch_rad
  {
    out << "pitch_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rad, out);
    out << ", ";
  }

  // member: yaw_rad
  {
    out << "yaw_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rad, out);
    out << ", ";
  }

  // member: pos_accuracy
  {
    if (msg.pos_accuracy.size() == 0) {
      out << "pos_accuracy: []";
    } else {
      out << "pos_accuracy: [";
      size_t pending_items = msg.pos_accuracy.size();
      for (auto item : msg.pos_accuracy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_accuracy
  {
    if (msg.vel_accuracy.size() == 0) {
      out << "vel_accuracy: []";
    } else {
      out << "vel_accuracy: [";
      size_t pending_items = msg.vel_accuracy.size();
      for (auto item : msg.vel_accuracy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wx_radps
  {
    out << "wx_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wx_radps, out);
    out << ", ";
  }

  // member: wy_radps
  {
    out << "wy_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wy_radps, out);
    out << ", ";
  }

  // member: wz_radps
  {
    out << "wz_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wz_radps, out);
    out << ", ";
  }

  // member: vx_mps
  {
    out << "vx_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_mps, out);
    out << ", ";
  }

  // member: vy_mps
  {
    out << "vy_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_mps, out);
    out << ", ";
  }

  // member: vz_mps
  {
    out << "vz_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_mps, out);
    out << ", ";
  }

  // member: omega_w_fl
  {
    out << "omega_w_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_fl, out);
    out << ", ";
  }

  // member: omega_w_fr
  {
    out << "omega_w_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_fr, out);
    out << ", ";
  }

  // member: omega_w_rl
  {
    out << "omega_w_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_rl, out);
    out << ", ";
  }

  // member: omega_w_rr
  {
    out << "omega_w_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_rr, out);
    out << ", ";
  }

  // member: v_mps
  {
    out << "v_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.v_mps, out);
    out << ", ";
  }

  // member: v_raw_mps
  {
    out << "v_raw_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.v_raw_mps, out);
    out << ", ";
  }

  // member: beta_rad
  {
    out << "beta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_rad, out);
    out << ", ";
  }

  // member: ax_mps2
  {
    out << "ax_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_mps2, out);
    out << ", ";
  }

  // member: ay_mps2
  {
    out << "ay_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_mps2, out);
    out << ", ";
  }

  // member: az_mps2
  {
    out << "az_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.az_mps2, out);
    out << ", ";
  }

  // member: valid_imu_b
  {
    out << "valid_imu_b: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_imu_b, out);
    out << ", ";
  }

  // member: yaw_vel_rad
  {
    out << "yaw_vel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel_rad, out);
    out << ", ";
  }

  // member: kappa_radpm
  {
    out << "kappa_radpm: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_radpm, out);
    out << ", ";
  }

  // member: dbeta_radps
  {
    out << "dbeta_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.dbeta_radps, out);
    out << ", ";
  }

  // member: ddyaw_radps2
  {
    out << "ddyaw_radps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ddyaw_radps2, out);
    out << ", ";
  }

  // member: ax_vel_mps2
  {
    out << "ax_vel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_vel_mps2, out);
    out << ", ";
  }

  // member: ay_vel_mps2
  {
    out << "ay_vel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_vel_mps2, out);
    out << ", ";
  }

  // member: lambda_fl_perc
  {
    out << "lambda_fl_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_fl_perc, out);
    out << ", ";
  }

  // member: lambda_fr_perc
  {
    out << "lambda_fr_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_fr_perc, out);
    out << ", ";
  }

  // member: lambda_rl_perc
  {
    out << "lambda_rl_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_rl_perc, out);
    out << ", ";
  }

  // member: lambda_rr_perc
  {
    out << "lambda_rr_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_rr_perc, out);
    out << ", ";
  }

  // member: valid_wheelsspeeds_b
  {
    out << "valid_wheelsspeeds_b: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_wheelsspeeds_b, out);
    out << ", ";
  }

  // member: alpha_fl_rad
  {
    out << "alpha_fl_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_fl_rad, out);
    out << ", ";
  }

  // member: alpha_fr_rad
  {
    out << "alpha_fr_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_fr_rad, out);
    out << ", ";
  }

  // member: alpha_rl_rad
  {
    out << "alpha_rl_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_rl_rad, out);
    out << ", ";
  }

  // member: alpha_rr_rad
  {
    out << "alpha_rr_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_rr_rad, out);
    out << ", ";
  }

  // member: diff_fr_alpha_rad
  {
    out << "diff_fr_alpha_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_fr_alpha_rad, out);
    out << ", ";
  }

  // member: delta_wheel_rad
  {
    out << "delta_wheel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_wheel_rad, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: gas
  {
    out << "gas: ";
    rosidl_generator_traits::value_to_yaml(msg.gas, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: clutch
  {
    out << "clutch: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << ", ";
  }

  // member: front_brake_pressure
  {
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << ", ";
  }

  // member: rear_brake_pressure
  {
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
    out << ", ";
  }

  // member: vehicle_timestamp
  {
    out << "vehicle_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_timestamp, out);
    out << ", ";
  }

  // member: residuals_status
  {
    out << "residuals_status: ";
    rosidl_generator_traits::value_to_yaml(msg.residuals_status, out);
    out << ", ";
  }

  // member: std_dev_status
  {
    out << "std_dev_status: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_status, out);
    out << ", ";
  }

  // member: is_safe
  {
    out << "is_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe, out);
    out << ", ";
  }

  // member: cba_actual_pressure_fl_pa
  {
    out << "cba_actual_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fl_pa, out);
    out << ", ";
  }

  // member: cba_actual_pressure_fr_pa
  {
    out << "cba_actual_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr_pa, out);
    out << ", ";
  }

  // member: cba_actual_pressure_rl_pa
  {
    out << "cba_actual_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_rl_pa, out);
    out << ", ";
  }

  // member: cba_actual_pressure_rr_pa
  {
    out << "cba_actual_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_rr_pa, out);
    out << ", ";
  }

  // member: sn_map_state
  {
    out << "sn_map_state: ";
    to_flow_style_yaml(msg.sn_map_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateEstimation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: se_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se_status: ";
    rosidl_generator_traits::value_to_yaml(msg.se_status, out);
    out << "\n";
  }

  // member: se_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "se_state: ";
    rosidl_generator_traits::value_to_yaml(msg.se_state, out);
    out << "\n";
  }

  // member: x_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_m, out);
    out << "\n";
  }

  // member: y_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.y_m, out);
    out << "\n";
  }

  // member: z_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_m: ";
    rosidl_generator_traits::value_to_yaml(msg.z_m, out);
    out << "\n";
  }

  // member: roll_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rad, out);
    out << "\n";
  }

  // member: pitch_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rad, out);
    out << "\n";
  }

  // member: yaw_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rad, out);
    out << "\n";
  }

  // member: pos_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_accuracy.size() == 0) {
      out << "pos_accuracy: []\n";
    } else {
      out << "pos_accuracy:\n";
      for (auto item : msg.pos_accuracy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_accuracy.size() == 0) {
      out << "vel_accuracy: []\n";
    } else {
      out << "vel_accuracy:\n";
      for (auto item : msg.vel_accuracy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wx_radps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wx_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wx_radps, out);
    out << "\n";
  }

  // member: wy_radps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wy_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wy_radps, out);
    out << "\n";
  }

  // member: wz_radps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wz_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.wz_radps, out);
    out << "\n";
  }

  // member: vx_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_mps, out);
    out << "\n";
  }

  // member: vy_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_mps, out);
    out << "\n";
  }

  // member: vz_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_mps, out);
    out << "\n";
  }

  // member: omega_w_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_w_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_fl, out);
    out << "\n";
  }

  // member: omega_w_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_w_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_fr, out);
    out << "\n";
  }

  // member: omega_w_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_w_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_rl, out);
    out << "\n";
  }

  // member: omega_w_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_w_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_w_rr, out);
    out << "\n";
  }

  // member: v_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.v_mps, out);
    out << "\n";
  }

  // member: v_raw_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_raw_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.v_raw_mps, out);
    out << "\n";
  }

  // member: beta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_rad, out);
    out << "\n";
  }

  // member: ax_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_mps2, out);
    out << "\n";
  }

  // member: ay_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_mps2, out);
    out << "\n";
  }

  // member: az_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.az_mps2, out);
    out << "\n";
  }

  // member: valid_imu_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_imu_b: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_imu_b, out);
    out << "\n";
  }

  // member: yaw_vel_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_vel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel_rad, out);
    out << "\n";
  }

  // member: kappa_radpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa_radpm: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa_radpm, out);
    out << "\n";
  }

  // member: dbeta_radps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dbeta_radps: ";
    rosidl_generator_traits::value_to_yaml(msg.dbeta_radps, out);
    out << "\n";
  }

  // member: ddyaw_radps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddyaw_radps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ddyaw_radps2, out);
    out << "\n";
  }

  // member: ax_vel_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax_vel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_vel_mps2, out);
    out << "\n";
  }

  // member: ay_vel_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay_vel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_vel_mps2, out);
    out << "\n";
  }

  // member: lambda_fl_perc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_fl_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_fl_perc, out);
    out << "\n";
  }

  // member: lambda_fr_perc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_fr_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_fr_perc, out);
    out << "\n";
  }

  // member: lambda_rl_perc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_rl_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_rl_perc, out);
    out << "\n";
  }

  // member: lambda_rr_perc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_rr_perc: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_rr_perc, out);
    out << "\n";
  }

  // member: valid_wheelsspeeds_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_wheelsspeeds_b: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_wheelsspeeds_b, out);
    out << "\n";
  }

  // member: alpha_fl_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_fl_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_fl_rad, out);
    out << "\n";
  }

  // member: alpha_fr_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_fr_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_fr_rad, out);
    out << "\n";
  }

  // member: alpha_rl_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_rl_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_rl_rad, out);
    out << "\n";
  }

  // member: alpha_rr_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_rr_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_rr_rad, out);
    out << "\n";
  }

  // member: diff_fr_alpha_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_fr_alpha_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_fr_alpha_rad, out);
    out << "\n";
  }

  // member: delta_wheel_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_wheel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_wheel_rad, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: gas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gas: ";
    rosidl_generator_traits::value_to_yaml(msg.gas, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: clutch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clutch: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }

  // member: front_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << "\n";
  }

  // member: rear_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
    out << "\n";
  }

  // member: vehicle_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_timestamp, out);
    out << "\n";
  }

  // member: residuals_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "residuals_status: ";
    rosidl_generator_traits::value_to_yaml(msg.residuals_status, out);
    out << "\n";
  }

  // member: std_dev_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_status: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_status, out);
    out << "\n";
  }

  // member: is_safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_safe, out);
    out << "\n";
  }

  // member: cba_actual_pressure_fl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fl_pa, out);
    out << "\n";
  }

  // member: cba_actual_pressure_fr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr_pa, out);
    out << "\n";
  }

  // member: cba_actual_pressure_rl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_rl_pa, out);
    out << "\n";
  }

  // member: cba_actual_pressure_rr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_rr_pa, out);
    out << "\n";
  }

  // member: sn_map_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sn_map_state:\n";
    to_block_style_yaml(msg.sn_map_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateEstimation & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_localization_msgs::msg::StateEstimation & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_localization_msgs::msg::StateEstimation & msg)
{
  return sd_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_localization_msgs::msg::StateEstimation>()
{
  return "sd_localization_msgs::msg::StateEstimation";
}

template<>
inline const char * name<sd_localization_msgs::msg::StateEstimation>()
{
  return "sd_localization_msgs/msg/StateEstimation";
}

template<>
struct has_fixed_size<sd_localization_msgs::msg::StateEstimation>
  : std::integral_constant<bool, has_fixed_size<sd_map_msgs::msg::SnMapState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_localization_msgs::msg::StateEstimation>
  : std::integral_constant<bool, has_bounded_size<sd_map_msgs::msg::SnMapState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_localization_msgs::msg::StateEstimation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__TRAITS_HPP_
