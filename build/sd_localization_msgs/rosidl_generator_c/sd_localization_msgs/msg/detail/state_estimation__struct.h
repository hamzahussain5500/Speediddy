// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice

#ifndef SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_H_
#define SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sn_map_state'
#include "sd_map_msgs/msg/detail/sn_map_state__struct.h"

/// Struct defined in msg/StateEstimation in the package sd_localization_msgs.
typedef struct sd_localization_msgs__msg__StateEstimation
{
  std_msgs__msg__Header header;
  int32_t se_status;
  int32_t se_state;
  double x_m;
  double y_m;
  double z_m;
  double roll_rad;
  double pitch_rad;
  double yaw_rad;
  double pos_accuracy[3];
  double vel_accuracy[3];
  double wx_radps;
  double wy_radps;
  double wz_radps;
  double vx_mps;
  double vy_mps;
  double vz_mps;
  double omega_w_fl;
  double omega_w_fr;
  double omega_w_rl;
  double omega_w_rr;
  double v_mps;
  double v_raw_mps;
  double beta_rad;
  double ax_mps2;
  double ay_mps2;
  double az_mps2;
  bool valid_imu_b;
  double yaw_vel_rad;
  double kappa_radpm;
  double dbeta_radps;
  double ddyaw_radps2;
  double ax_vel_mps2;
  double ay_vel_mps2;
  double lambda_fl_perc;
  double lambda_fr_perc;
  double lambda_rl_perc;
  double lambda_rr_perc;
  bool valid_wheelsspeeds_b;
  double alpha_fl_rad;
  double alpha_fr_rad;
  double alpha_rl_rad;
  double alpha_rr_rad;
  double diff_fr_alpha_rad;
  double delta_wheel_rad;
  double timestamp;
  double gas;
  double brake;
  double clutch;
  double gear;
  double rpm;
  double front_brake_pressure;
  double rear_brake_pressure;
  double vehicle_timestamp;
  /// depricated
  bool residuals_status;
  /// depricated
  bool std_dev_status;
  bool is_safe;
  double cba_actual_pressure_fl_pa;
  double cba_actual_pressure_fr_pa;
  double cba_actual_pressure_rl_pa;
  double cba_actual_pressure_rr_pa;
  sd_map_msgs__msg__SnMapState sn_map_state;
} sd_localization_msgs__msg__StateEstimation;

// Struct for a sequence of sd_localization_msgs__msg__StateEstimation.
typedef struct sd_localization_msgs__msg__StateEstimation__Sequence
{
  sd_localization_msgs__msg__StateEstimation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_localization_msgs__msg__StateEstimation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__STRUCT_H_
