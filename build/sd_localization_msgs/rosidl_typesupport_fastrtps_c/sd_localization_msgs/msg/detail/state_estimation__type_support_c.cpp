// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice
#include "sd_localization_msgs/msg/detail/state_estimation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_localization_msgs/msg/detail/state_estimation__struct.h"
#include "sd_localization_msgs/msg/detail/state_estimation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sd_map_msgs/msg/detail/sn_map_state__functions.h"  // sn_map_state
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
size_t get_serialized_size_sd_map_msgs__msg__SnMapState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
size_t max_serialized_size_sd_map_msgs__msg__SnMapState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_map_msgs, msg, SnMapState)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _StateEstimation__ros_msg_type = sd_localization_msgs__msg__StateEstimation;

static bool _StateEstimation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateEstimation__ros_msg_type * ros_message = static_cast<const _StateEstimation__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: se_status
  {
    cdr << ros_message->se_status;
  }

  // Field name: se_state
  {
    cdr << ros_message->se_state;
  }

  // Field name: x_m
  {
    cdr << ros_message->x_m;
  }

  // Field name: y_m
  {
    cdr << ros_message->y_m;
  }

  // Field name: z_m
  {
    cdr << ros_message->z_m;
  }

  // Field name: roll_rad
  {
    cdr << ros_message->roll_rad;
  }

  // Field name: pitch_rad
  {
    cdr << ros_message->pitch_rad;
  }

  // Field name: yaw_rad
  {
    cdr << ros_message->yaw_rad;
  }

  // Field name: pos_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_accuracy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_accuracy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wx_radps
  {
    cdr << ros_message->wx_radps;
  }

  // Field name: wy_radps
  {
    cdr << ros_message->wy_radps;
  }

  // Field name: wz_radps
  {
    cdr << ros_message->wz_radps;
  }

  // Field name: vx_mps
  {
    cdr << ros_message->vx_mps;
  }

  // Field name: vy_mps
  {
    cdr << ros_message->vy_mps;
  }

  // Field name: vz_mps
  {
    cdr << ros_message->vz_mps;
  }

  // Field name: omega_w_fl
  {
    cdr << ros_message->omega_w_fl;
  }

  // Field name: omega_w_fr
  {
    cdr << ros_message->omega_w_fr;
  }

  // Field name: omega_w_rl
  {
    cdr << ros_message->omega_w_rl;
  }

  // Field name: omega_w_rr
  {
    cdr << ros_message->omega_w_rr;
  }

  // Field name: v_mps
  {
    cdr << ros_message->v_mps;
  }

  // Field name: v_raw_mps
  {
    cdr << ros_message->v_raw_mps;
  }

  // Field name: beta_rad
  {
    cdr << ros_message->beta_rad;
  }

  // Field name: ax_mps2
  {
    cdr << ros_message->ax_mps2;
  }

  // Field name: ay_mps2
  {
    cdr << ros_message->ay_mps2;
  }

  // Field name: az_mps2
  {
    cdr << ros_message->az_mps2;
  }

  // Field name: valid_imu_b
  {
    cdr << (ros_message->valid_imu_b ? true : false);
  }

  // Field name: yaw_vel_rad
  {
    cdr << ros_message->yaw_vel_rad;
  }

  // Field name: kappa_radpm
  {
    cdr << ros_message->kappa_radpm;
  }

  // Field name: dbeta_radps
  {
    cdr << ros_message->dbeta_radps;
  }

  // Field name: ddyaw_radps2
  {
    cdr << ros_message->ddyaw_radps2;
  }

  // Field name: ax_vel_mps2
  {
    cdr << ros_message->ax_vel_mps2;
  }

  // Field name: ay_vel_mps2
  {
    cdr << ros_message->ay_vel_mps2;
  }

  // Field name: lambda_fl_perc
  {
    cdr << ros_message->lambda_fl_perc;
  }

  // Field name: lambda_fr_perc
  {
    cdr << ros_message->lambda_fr_perc;
  }

  // Field name: lambda_rl_perc
  {
    cdr << ros_message->lambda_rl_perc;
  }

  // Field name: lambda_rr_perc
  {
    cdr << ros_message->lambda_rr_perc;
  }

  // Field name: valid_wheelsspeeds_b
  {
    cdr << (ros_message->valid_wheelsspeeds_b ? true : false);
  }

  // Field name: alpha_fl_rad
  {
    cdr << ros_message->alpha_fl_rad;
  }

  // Field name: alpha_fr_rad
  {
    cdr << ros_message->alpha_fr_rad;
  }

  // Field name: alpha_rl_rad
  {
    cdr << ros_message->alpha_rl_rad;
  }

  // Field name: alpha_rr_rad
  {
    cdr << ros_message->alpha_rr_rad;
  }

  // Field name: diff_fr_alpha_rad
  {
    cdr << ros_message->diff_fr_alpha_rad;
  }

  // Field name: delta_wheel_rad
  {
    cdr << ros_message->delta_wheel_rad;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: gas
  {
    cdr << ros_message->gas;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: clutch
  {
    cdr << ros_message->clutch;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: rpm
  {
    cdr << ros_message->rpm;
  }

  // Field name: front_brake_pressure
  {
    cdr << ros_message->front_brake_pressure;
  }

  // Field name: rear_brake_pressure
  {
    cdr << ros_message->rear_brake_pressure;
  }

  // Field name: vehicle_timestamp
  {
    cdr << ros_message->vehicle_timestamp;
  }

  // Field name: residuals_status
  {
    cdr << (ros_message->residuals_status ? true : false);
  }

  // Field name: std_dev_status
  {
    cdr << (ros_message->std_dev_status ? true : false);
  }

  // Field name: is_safe
  {
    cdr << (ros_message->is_safe ? true : false);
  }

  // Field name: cba_actual_pressure_fl_pa
  {
    cdr << ros_message->cba_actual_pressure_fl_pa;
  }

  // Field name: cba_actual_pressure_fr_pa
  {
    cdr << ros_message->cba_actual_pressure_fr_pa;
  }

  // Field name: cba_actual_pressure_rl_pa
  {
    cdr << ros_message->cba_actual_pressure_rl_pa;
  }

  // Field name: cba_actual_pressure_rr_pa
  {
    cdr << ros_message->cba_actual_pressure_rr_pa;
  }

  // Field name: sn_map_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sd_map_msgs, msg, SnMapState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sn_map_state, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _StateEstimation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateEstimation__ros_msg_type * ros_message = static_cast<_StateEstimation__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: se_status
  {
    cdr >> ros_message->se_status;
  }

  // Field name: se_state
  {
    cdr >> ros_message->se_state;
  }

  // Field name: x_m
  {
    cdr >> ros_message->x_m;
  }

  // Field name: y_m
  {
    cdr >> ros_message->y_m;
  }

  // Field name: z_m
  {
    cdr >> ros_message->z_m;
  }

  // Field name: roll_rad
  {
    cdr >> ros_message->roll_rad;
  }

  // Field name: pitch_rad
  {
    cdr >> ros_message->pitch_rad;
  }

  // Field name: yaw_rad
  {
    cdr >> ros_message->yaw_rad;
  }

  // Field name: pos_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_accuracy;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_accuracy;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wx_radps
  {
    cdr >> ros_message->wx_radps;
  }

  // Field name: wy_radps
  {
    cdr >> ros_message->wy_radps;
  }

  // Field name: wz_radps
  {
    cdr >> ros_message->wz_radps;
  }

  // Field name: vx_mps
  {
    cdr >> ros_message->vx_mps;
  }

  // Field name: vy_mps
  {
    cdr >> ros_message->vy_mps;
  }

  // Field name: vz_mps
  {
    cdr >> ros_message->vz_mps;
  }

  // Field name: omega_w_fl
  {
    cdr >> ros_message->omega_w_fl;
  }

  // Field name: omega_w_fr
  {
    cdr >> ros_message->omega_w_fr;
  }

  // Field name: omega_w_rl
  {
    cdr >> ros_message->omega_w_rl;
  }

  // Field name: omega_w_rr
  {
    cdr >> ros_message->omega_w_rr;
  }

  // Field name: v_mps
  {
    cdr >> ros_message->v_mps;
  }

  // Field name: v_raw_mps
  {
    cdr >> ros_message->v_raw_mps;
  }

  // Field name: beta_rad
  {
    cdr >> ros_message->beta_rad;
  }

  // Field name: ax_mps2
  {
    cdr >> ros_message->ax_mps2;
  }

  // Field name: ay_mps2
  {
    cdr >> ros_message->ay_mps2;
  }

  // Field name: az_mps2
  {
    cdr >> ros_message->az_mps2;
  }

  // Field name: valid_imu_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_imu_b = tmp ? true : false;
  }

  // Field name: yaw_vel_rad
  {
    cdr >> ros_message->yaw_vel_rad;
  }

  // Field name: kappa_radpm
  {
    cdr >> ros_message->kappa_radpm;
  }

  // Field name: dbeta_radps
  {
    cdr >> ros_message->dbeta_radps;
  }

  // Field name: ddyaw_radps2
  {
    cdr >> ros_message->ddyaw_radps2;
  }

  // Field name: ax_vel_mps2
  {
    cdr >> ros_message->ax_vel_mps2;
  }

  // Field name: ay_vel_mps2
  {
    cdr >> ros_message->ay_vel_mps2;
  }

  // Field name: lambda_fl_perc
  {
    cdr >> ros_message->lambda_fl_perc;
  }

  // Field name: lambda_fr_perc
  {
    cdr >> ros_message->lambda_fr_perc;
  }

  // Field name: lambda_rl_perc
  {
    cdr >> ros_message->lambda_rl_perc;
  }

  // Field name: lambda_rr_perc
  {
    cdr >> ros_message->lambda_rr_perc;
  }

  // Field name: valid_wheelsspeeds_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_wheelsspeeds_b = tmp ? true : false;
  }

  // Field name: alpha_fl_rad
  {
    cdr >> ros_message->alpha_fl_rad;
  }

  // Field name: alpha_fr_rad
  {
    cdr >> ros_message->alpha_fr_rad;
  }

  // Field name: alpha_rl_rad
  {
    cdr >> ros_message->alpha_rl_rad;
  }

  // Field name: alpha_rr_rad
  {
    cdr >> ros_message->alpha_rr_rad;
  }

  // Field name: diff_fr_alpha_rad
  {
    cdr >> ros_message->diff_fr_alpha_rad;
  }

  // Field name: delta_wheel_rad
  {
    cdr >> ros_message->delta_wheel_rad;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: gas
  {
    cdr >> ros_message->gas;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: clutch
  {
    cdr >> ros_message->clutch;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: rpm
  {
    cdr >> ros_message->rpm;
  }

  // Field name: front_brake_pressure
  {
    cdr >> ros_message->front_brake_pressure;
  }

  // Field name: rear_brake_pressure
  {
    cdr >> ros_message->rear_brake_pressure;
  }

  // Field name: vehicle_timestamp
  {
    cdr >> ros_message->vehicle_timestamp;
  }

  // Field name: residuals_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->residuals_status = tmp ? true : false;
  }

  // Field name: std_dev_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->std_dev_status = tmp ? true : false;
  }

  // Field name: is_safe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_safe = tmp ? true : false;
  }

  // Field name: cba_actual_pressure_fl_pa
  {
    cdr >> ros_message->cba_actual_pressure_fl_pa;
  }

  // Field name: cba_actual_pressure_fr_pa
  {
    cdr >> ros_message->cba_actual_pressure_fr_pa;
  }

  // Field name: cba_actual_pressure_rl_pa
  {
    cdr >> ros_message->cba_actual_pressure_rl_pa;
  }

  // Field name: cba_actual_pressure_rr_pa
  {
    cdr >> ros_message->cba_actual_pressure_rr_pa;
  }

  // Field name: sn_map_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sd_map_msgs, msg, SnMapState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sn_map_state))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_localization_msgs
size_t get_serialized_size_sd_localization_msgs__msg__StateEstimation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateEstimation__ros_msg_type * ros_message = static_cast<const _StateEstimation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name se_status
  {
    size_t item_size = sizeof(ros_message->se_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name se_state
  {
    size_t item_size = sizeof(ros_message->se_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_m
  {
    size_t item_size = sizeof(ros_message->x_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_m
  {
    size_t item_size = sizeof(ros_message->y_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_m
  {
    size_t item_size = sizeof(ros_message->z_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_rad
  {
    size_t item_size = sizeof(ros_message->roll_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_rad
  {
    size_t item_size = sizeof(ros_message->pitch_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rad
  {
    size_t item_size = sizeof(ros_message->yaw_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_accuracy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pos_accuracy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_accuracy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vel_accuracy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wx_radps
  {
    size_t item_size = sizeof(ros_message->wx_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wy_radps
  {
    size_t item_size = sizeof(ros_message->wy_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wz_radps
  {
    size_t item_size = sizeof(ros_message->wz_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_mps
  {
    size_t item_size = sizeof(ros_message->vx_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy_mps
  {
    size_t item_size = sizeof(ros_message->vy_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz_mps
  {
    size_t item_size = sizeof(ros_message->vz_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_w_fl
  {
    size_t item_size = sizeof(ros_message->omega_w_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_w_fr
  {
    size_t item_size = sizeof(ros_message->omega_w_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_w_rl
  {
    size_t item_size = sizeof(ros_message->omega_w_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name omega_w_rr
  {
    size_t item_size = sizeof(ros_message->omega_w_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_mps
  {
    size_t item_size = sizeof(ros_message->v_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_raw_mps
  {
    size_t item_size = sizeof(ros_message->v_raw_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta_rad
  {
    size_t item_size = sizeof(ros_message->beta_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax_mps2
  {
    size_t item_size = sizeof(ros_message->ax_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay_mps2
  {
    size_t item_size = sizeof(ros_message->ay_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az_mps2
  {
    size_t item_size = sizeof(ros_message->az_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid_imu_b
  {
    size_t item_size = sizeof(ros_message->valid_imu_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_vel_rad
  {
    size_t item_size = sizeof(ros_message->yaw_vel_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kappa_radpm
  {
    size_t item_size = sizeof(ros_message->kappa_radpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dbeta_radps
  {
    size_t item_size = sizeof(ros_message->dbeta_radps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ddyaw_radps2
  {
    size_t item_size = sizeof(ros_message->ddyaw_radps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax_vel_mps2
  {
    size_t item_size = sizeof(ros_message->ax_vel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay_vel_mps2
  {
    size_t item_size = sizeof(ros_message->ay_vel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_fl_perc
  {
    size_t item_size = sizeof(ros_message->lambda_fl_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_fr_perc
  {
    size_t item_size = sizeof(ros_message->lambda_fr_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_rl_perc
  {
    size_t item_size = sizeof(ros_message->lambda_rl_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_rr_perc
  {
    size_t item_size = sizeof(ros_message->lambda_rr_perc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid_wheelsspeeds_b
  {
    size_t item_size = sizeof(ros_message->valid_wheelsspeeds_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_fl_rad
  {
    size_t item_size = sizeof(ros_message->alpha_fl_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_fr_rad
  {
    size_t item_size = sizeof(ros_message->alpha_fr_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_rl_rad
  {
    size_t item_size = sizeof(ros_message->alpha_rl_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_rr_rad
  {
    size_t item_size = sizeof(ros_message->alpha_rr_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_fr_alpha_rad
  {
    size_t item_size = sizeof(ros_message->diff_fr_alpha_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_wheel_rad
  {
    size_t item_size = sizeof(ros_message->delta_wheel_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gas
  {
    size_t item_size = sizeof(ros_message->gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clutch
  {
    size_t item_size = sizeof(ros_message->clutch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpm
  {
    size_t item_size = sizeof(ros_message->rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_brake_pressure
  {
    size_t item_size = sizeof(ros_message->front_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_brake_pressure
  {
    size_t item_size = sizeof(ros_message->rear_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_timestamp
  {
    size_t item_size = sizeof(ros_message->vehicle_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name residuals_status
  {
    size_t item_size = sizeof(ros_message->residuals_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_status
  {
    size_t item_size = sizeof(ros_message->std_dev_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_safe
  {
    size_t item_size = sizeof(ros_message->is_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_actual_pressure_fl_pa
  {
    size_t item_size = sizeof(ros_message->cba_actual_pressure_fl_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_actual_pressure_fr_pa
  {
    size_t item_size = sizeof(ros_message->cba_actual_pressure_fr_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_actual_pressure_rl_pa
  {
    size_t item_size = sizeof(ros_message->cba_actual_pressure_rl_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_actual_pressure_rr_pa
  {
    size_t item_size = sizeof(ros_message->cba_actual_pressure_rr_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sn_map_state

  current_alignment += get_serialized_size_sd_map_msgs__msg__SnMapState(
    &(ros_message->sn_map_state), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _StateEstimation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_localization_msgs__msg__StateEstimation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_localization_msgs
size_t max_serialized_size_sd_localization_msgs__msg__StateEstimation(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: se_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: se_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wx_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wy_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wz_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vx_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vy_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vz_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_w_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_w_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_w_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: omega_w_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_raw_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: beta_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ax_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ay_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: az_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: valid_imu_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_vel_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kappa_radpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dbeta_radps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ddyaw_radps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ax_vel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ay_vel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lambda_fl_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lambda_fr_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lambda_rl_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lambda_rr_perc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: valid_wheelsspeeds_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alpha_fl_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_fr_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_rl_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_rr_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: diff_fr_alpha_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_wheel_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gas
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: clutch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehicle_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: residuals_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: std_dev_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_actual_pressure_fl_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cba_actual_pressure_fr_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cba_actual_pressure_rl_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cba_actual_pressure_rr_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sn_map_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sd_map_msgs__msg__SnMapState(
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
    using DataType = sd_localization_msgs__msg__StateEstimation;
    is_plain =
      (
      offsetof(DataType, sn_map_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StateEstimation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_localization_msgs__msg__StateEstimation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateEstimation = {
  "sd_localization_msgs::msg",
  "StateEstimation",
  _StateEstimation__cdr_serialize,
  _StateEstimation__cdr_deserialize,
  _StateEstimation__get_serialized_size,
  _StateEstimation__max_serialized_size
};

static rosidl_message_type_support_t _StateEstimation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateEstimation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_localization_msgs, msg, StateEstimation)() {
  return &_StateEstimation__type_support;
}

#if defined(__cplusplus)
}
#endif
