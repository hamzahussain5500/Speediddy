// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice
#include "sd_localization_msgs/msg/detail/state_estimation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_localization_msgs/msg/detail/state_estimation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sd_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sd_map_msgs::msg::SnMapState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sd_map_msgs::msg::SnMapState &);
size_t get_serialized_size(
  const sd_map_msgs::msg::SnMapState &,
  size_t current_alignment);
size_t
max_serialized_size_SnMapState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sd_map_msgs


namespace sd_localization_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_localization_msgs
cdr_serialize(
  const sd_localization_msgs::msg::StateEstimation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: se_status
  cdr << ros_message.se_status;
  // Member: se_state
  cdr << ros_message.se_state;
  // Member: x_m
  cdr << ros_message.x_m;
  // Member: y_m
  cdr << ros_message.y_m;
  // Member: z_m
  cdr << ros_message.z_m;
  // Member: roll_rad
  cdr << ros_message.roll_rad;
  // Member: pitch_rad
  cdr << ros_message.pitch_rad;
  // Member: yaw_rad
  cdr << ros_message.yaw_rad;
  // Member: pos_accuracy
  {
    cdr << ros_message.pos_accuracy;
  }
  // Member: vel_accuracy
  {
    cdr << ros_message.vel_accuracy;
  }
  // Member: wx_radps
  cdr << ros_message.wx_radps;
  // Member: wy_radps
  cdr << ros_message.wy_radps;
  // Member: wz_radps
  cdr << ros_message.wz_radps;
  // Member: vx_mps
  cdr << ros_message.vx_mps;
  // Member: vy_mps
  cdr << ros_message.vy_mps;
  // Member: vz_mps
  cdr << ros_message.vz_mps;
  // Member: omega_w_fl
  cdr << ros_message.omega_w_fl;
  // Member: omega_w_fr
  cdr << ros_message.omega_w_fr;
  // Member: omega_w_rl
  cdr << ros_message.omega_w_rl;
  // Member: omega_w_rr
  cdr << ros_message.omega_w_rr;
  // Member: v_mps
  cdr << ros_message.v_mps;
  // Member: v_raw_mps
  cdr << ros_message.v_raw_mps;
  // Member: beta_rad
  cdr << ros_message.beta_rad;
  // Member: ax_mps2
  cdr << ros_message.ax_mps2;
  // Member: ay_mps2
  cdr << ros_message.ay_mps2;
  // Member: az_mps2
  cdr << ros_message.az_mps2;
  // Member: valid_imu_b
  cdr << (ros_message.valid_imu_b ? true : false);
  // Member: yaw_vel_rad
  cdr << ros_message.yaw_vel_rad;
  // Member: kappa_radpm
  cdr << ros_message.kappa_radpm;
  // Member: dbeta_radps
  cdr << ros_message.dbeta_radps;
  // Member: ddyaw_radps2
  cdr << ros_message.ddyaw_radps2;
  // Member: ax_vel_mps2
  cdr << ros_message.ax_vel_mps2;
  // Member: ay_vel_mps2
  cdr << ros_message.ay_vel_mps2;
  // Member: lambda_fl_perc
  cdr << ros_message.lambda_fl_perc;
  // Member: lambda_fr_perc
  cdr << ros_message.lambda_fr_perc;
  // Member: lambda_rl_perc
  cdr << ros_message.lambda_rl_perc;
  // Member: lambda_rr_perc
  cdr << ros_message.lambda_rr_perc;
  // Member: valid_wheelsspeeds_b
  cdr << (ros_message.valid_wheelsspeeds_b ? true : false);
  // Member: alpha_fl_rad
  cdr << ros_message.alpha_fl_rad;
  // Member: alpha_fr_rad
  cdr << ros_message.alpha_fr_rad;
  // Member: alpha_rl_rad
  cdr << ros_message.alpha_rl_rad;
  // Member: alpha_rr_rad
  cdr << ros_message.alpha_rr_rad;
  // Member: diff_fr_alpha_rad
  cdr << ros_message.diff_fr_alpha_rad;
  // Member: delta_wheel_rad
  cdr << ros_message.delta_wheel_rad;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: gas
  cdr << ros_message.gas;
  // Member: brake
  cdr << ros_message.brake;
  // Member: clutch
  cdr << ros_message.clutch;
  // Member: gear
  cdr << ros_message.gear;
  // Member: rpm
  cdr << ros_message.rpm;
  // Member: front_brake_pressure
  cdr << ros_message.front_brake_pressure;
  // Member: rear_brake_pressure
  cdr << ros_message.rear_brake_pressure;
  // Member: vehicle_timestamp
  cdr << ros_message.vehicle_timestamp;
  // Member: residuals_status
  cdr << (ros_message.residuals_status ? true : false);
  // Member: std_dev_status
  cdr << (ros_message.std_dev_status ? true : false);
  // Member: is_safe
  cdr << (ros_message.is_safe ? true : false);
  // Member: cba_actual_pressure_fl_pa
  cdr << ros_message.cba_actual_pressure_fl_pa;
  // Member: cba_actual_pressure_fr_pa
  cdr << ros_message.cba_actual_pressure_fr_pa;
  // Member: cba_actual_pressure_rl_pa
  cdr << ros_message.cba_actual_pressure_rl_pa;
  // Member: cba_actual_pressure_rr_pa
  cdr << ros_message.cba_actual_pressure_rr_pa;
  // Member: sn_map_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sn_map_state,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_localization_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_localization_msgs::msg::StateEstimation & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: se_status
  cdr >> ros_message.se_status;

  // Member: se_state
  cdr >> ros_message.se_state;

  // Member: x_m
  cdr >> ros_message.x_m;

  // Member: y_m
  cdr >> ros_message.y_m;

  // Member: z_m
  cdr >> ros_message.z_m;

  // Member: roll_rad
  cdr >> ros_message.roll_rad;

  // Member: pitch_rad
  cdr >> ros_message.pitch_rad;

  // Member: yaw_rad
  cdr >> ros_message.yaw_rad;

  // Member: pos_accuracy
  {
    cdr >> ros_message.pos_accuracy;
  }

  // Member: vel_accuracy
  {
    cdr >> ros_message.vel_accuracy;
  }

  // Member: wx_radps
  cdr >> ros_message.wx_radps;

  // Member: wy_radps
  cdr >> ros_message.wy_radps;

  // Member: wz_radps
  cdr >> ros_message.wz_radps;

  // Member: vx_mps
  cdr >> ros_message.vx_mps;

  // Member: vy_mps
  cdr >> ros_message.vy_mps;

  // Member: vz_mps
  cdr >> ros_message.vz_mps;

  // Member: omega_w_fl
  cdr >> ros_message.omega_w_fl;

  // Member: omega_w_fr
  cdr >> ros_message.omega_w_fr;

  // Member: omega_w_rl
  cdr >> ros_message.omega_w_rl;

  // Member: omega_w_rr
  cdr >> ros_message.omega_w_rr;

  // Member: v_mps
  cdr >> ros_message.v_mps;

  // Member: v_raw_mps
  cdr >> ros_message.v_raw_mps;

  // Member: beta_rad
  cdr >> ros_message.beta_rad;

  // Member: ax_mps2
  cdr >> ros_message.ax_mps2;

  // Member: ay_mps2
  cdr >> ros_message.ay_mps2;

  // Member: az_mps2
  cdr >> ros_message.az_mps2;

  // Member: valid_imu_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid_imu_b = tmp ? true : false;
  }

  // Member: yaw_vel_rad
  cdr >> ros_message.yaw_vel_rad;

  // Member: kappa_radpm
  cdr >> ros_message.kappa_radpm;

  // Member: dbeta_radps
  cdr >> ros_message.dbeta_radps;

  // Member: ddyaw_radps2
  cdr >> ros_message.ddyaw_radps2;

  // Member: ax_vel_mps2
  cdr >> ros_message.ax_vel_mps2;

  // Member: ay_vel_mps2
  cdr >> ros_message.ay_vel_mps2;

  // Member: lambda_fl_perc
  cdr >> ros_message.lambda_fl_perc;

  // Member: lambda_fr_perc
  cdr >> ros_message.lambda_fr_perc;

  // Member: lambda_rl_perc
  cdr >> ros_message.lambda_rl_perc;

  // Member: lambda_rr_perc
  cdr >> ros_message.lambda_rr_perc;

  // Member: valid_wheelsspeeds_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid_wheelsspeeds_b = tmp ? true : false;
  }

  // Member: alpha_fl_rad
  cdr >> ros_message.alpha_fl_rad;

  // Member: alpha_fr_rad
  cdr >> ros_message.alpha_fr_rad;

  // Member: alpha_rl_rad
  cdr >> ros_message.alpha_rl_rad;

  // Member: alpha_rr_rad
  cdr >> ros_message.alpha_rr_rad;

  // Member: diff_fr_alpha_rad
  cdr >> ros_message.diff_fr_alpha_rad;

  // Member: delta_wheel_rad
  cdr >> ros_message.delta_wheel_rad;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: gas
  cdr >> ros_message.gas;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: clutch
  cdr >> ros_message.clutch;

  // Member: gear
  cdr >> ros_message.gear;

  // Member: rpm
  cdr >> ros_message.rpm;

  // Member: front_brake_pressure
  cdr >> ros_message.front_brake_pressure;

  // Member: rear_brake_pressure
  cdr >> ros_message.rear_brake_pressure;

  // Member: vehicle_timestamp
  cdr >> ros_message.vehicle_timestamp;

  // Member: residuals_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.residuals_status = tmp ? true : false;
  }

  // Member: std_dev_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.std_dev_status = tmp ? true : false;
  }

  // Member: is_safe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_safe = tmp ? true : false;
  }

  // Member: cba_actual_pressure_fl_pa
  cdr >> ros_message.cba_actual_pressure_fl_pa;

  // Member: cba_actual_pressure_fr_pa
  cdr >> ros_message.cba_actual_pressure_fr_pa;

  // Member: cba_actual_pressure_rl_pa
  cdr >> ros_message.cba_actual_pressure_rl_pa;

  // Member: cba_actual_pressure_rr_pa
  cdr >> ros_message.cba_actual_pressure_rr_pa;

  // Member: sn_map_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sn_map_state);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_localization_msgs
get_serialized_size(
  const sd_localization_msgs::msg::StateEstimation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: se_status
  {
    size_t item_size = sizeof(ros_message.se_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: se_state
  {
    size_t item_size = sizeof(ros_message.se_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_m
  {
    size_t item_size = sizeof(ros_message.x_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_m
  {
    size_t item_size = sizeof(ros_message.y_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_m
  {
    size_t item_size = sizeof(ros_message.z_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_rad
  {
    size_t item_size = sizeof(ros_message.roll_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_rad
  {
    size_t item_size = sizeof(ros_message.pitch_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rad
  {
    size_t item_size = sizeof(ros_message.yaw_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_accuracy
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pos_accuracy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_accuracy
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.vel_accuracy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wx_radps
  {
    size_t item_size = sizeof(ros_message.wx_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wy_radps
  {
    size_t item_size = sizeof(ros_message.wy_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wz_radps
  {
    size_t item_size = sizeof(ros_message.wz_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx_mps
  {
    size_t item_size = sizeof(ros_message.vx_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy_mps
  {
    size_t item_size = sizeof(ros_message.vy_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vz_mps
  {
    size_t item_size = sizeof(ros_message.vz_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega_w_fl
  {
    size_t item_size = sizeof(ros_message.omega_w_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega_w_fr
  {
    size_t item_size = sizeof(ros_message.omega_w_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega_w_rl
  {
    size_t item_size = sizeof(ros_message.omega_w_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega_w_rr
  {
    size_t item_size = sizeof(ros_message.omega_w_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_mps
  {
    size_t item_size = sizeof(ros_message.v_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_raw_mps
  {
    size_t item_size = sizeof(ros_message.v_raw_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beta_rad
  {
    size_t item_size = sizeof(ros_message.beta_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ax_mps2
  {
    size_t item_size = sizeof(ros_message.ax_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ay_mps2
  {
    size_t item_size = sizeof(ros_message.ay_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: az_mps2
  {
    size_t item_size = sizeof(ros_message.az_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid_imu_b
  {
    size_t item_size = sizeof(ros_message.valid_imu_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_vel_rad
  {
    size_t item_size = sizeof(ros_message.yaw_vel_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kappa_radpm
  {
    size_t item_size = sizeof(ros_message.kappa_radpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dbeta_radps
  {
    size_t item_size = sizeof(ros_message.dbeta_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ddyaw_radps2
  {
    size_t item_size = sizeof(ros_message.ddyaw_radps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ax_vel_mps2
  {
    size_t item_size = sizeof(ros_message.ax_vel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ay_vel_mps2
  {
    size_t item_size = sizeof(ros_message.ay_vel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_fl_perc
  {
    size_t item_size = sizeof(ros_message.lambda_fl_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_fr_perc
  {
    size_t item_size = sizeof(ros_message.lambda_fr_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_rl_perc
  {
    size_t item_size = sizeof(ros_message.lambda_rl_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_rr_perc
  {
    size_t item_size = sizeof(ros_message.lambda_rr_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid_wheelsspeeds_b
  {
    size_t item_size = sizeof(ros_message.valid_wheelsspeeds_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_fl_rad
  {
    size_t item_size = sizeof(ros_message.alpha_fl_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_fr_rad
  {
    size_t item_size = sizeof(ros_message.alpha_fr_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_rl_rad
  {
    size_t item_size = sizeof(ros_message.alpha_rl_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_rr_rad
  {
    size_t item_size = sizeof(ros_message.alpha_rr_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diff_fr_alpha_rad
  {
    size_t item_size = sizeof(ros_message.diff_fr_alpha_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_wheel_rad
  {
    size_t item_size = sizeof(ros_message.delta_wheel_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gas
  {
    size_t item_size = sizeof(ros_message.gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clutch
  {
    size_t item_size = sizeof(ros_message.clutch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpm
  {
    size_t item_size = sizeof(ros_message.rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_brake_pressure
  {
    size_t item_size = sizeof(ros_message.front_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_brake_pressure
  {
    size_t item_size = sizeof(ros_message.rear_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_timestamp
  {
    size_t item_size = sizeof(ros_message.vehicle_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: residuals_status
  {
    size_t item_size = sizeof(ros_message.residuals_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_status
  {
    size_t item_size = sizeof(ros_message.std_dev_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_safe
  {
    size_t item_size = sizeof(ros_message.is_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_actual_pressure_fl_pa
  {
    size_t item_size = sizeof(ros_message.cba_actual_pressure_fl_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_actual_pressure_fr_pa
  {
    size_t item_size = sizeof(ros_message.cba_actual_pressure_fr_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_actual_pressure_rl_pa
  {
    size_t item_size = sizeof(ros_message.cba_actual_pressure_rl_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_actual_pressure_rr_pa
  {
    size_t item_size = sizeof(ros_message.cba_actual_pressure_rr_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sn_map_state

  current_alignment +=
    sd_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sn_map_state, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_localization_msgs
max_serialized_size_StateEstimation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: se_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: se_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: roll_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pitch_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wx_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wy_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wz_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vx_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vy_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vz_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega_w_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega_w_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega_w_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega_w_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: v_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: v_raw_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: beta_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ax_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ay_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: az_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: valid_imu_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yaw_vel_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: kappa_radpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dbeta_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ddyaw_radps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ax_vel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ay_vel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lambda_fl_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lambda_fr_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lambda_rl_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lambda_rr_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: valid_wheelsspeeds_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alpha_fl_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_fr_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_rl_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_rr_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: diff_fr_alpha_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_wheel_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gas
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: clutch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vehicle_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: residuals_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: std_dev_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_actual_pressure_fl_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cba_actual_pressure_fr_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cba_actual_pressure_rl_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cba_actual_pressure_rr_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sn_map_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sd_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SnMapState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sd_localization_msgs::msg::StateEstimation;
    is_plain =
      (
      offsetof(DataType, sn_map_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StateEstimation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_localization_msgs::msg::StateEstimation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateEstimation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_localization_msgs::msg::StateEstimation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateEstimation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_localization_msgs::msg::StateEstimation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateEstimation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StateEstimation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StateEstimation__callbacks = {
  "sd_localization_msgs::msg",
  "StateEstimation",
  _StateEstimation__cdr_serialize,
  _StateEstimation__cdr_deserialize,
  _StateEstimation__get_serialized_size,
  _StateEstimation__max_serialized_size
};

static rosidl_message_type_support_t _StateEstimation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateEstimation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sd_localization_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sd_localization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_localization_msgs::msg::StateEstimation>()
{
  return &sd_localization_msgs::msg::typesupport_fastrtps_cpp::_StateEstimation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_localization_msgs, msg, StateEstimation)() {
  return &sd_localization_msgs::msg::typesupport_fastrtps_cpp::_StateEstimation__handle;
}

#ifdef __cplusplus
}
#endif
