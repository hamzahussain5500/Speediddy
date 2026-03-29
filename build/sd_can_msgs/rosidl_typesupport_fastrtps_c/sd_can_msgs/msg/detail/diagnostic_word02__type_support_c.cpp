// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word02__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/diagnostic_word02__struct.h"
#include "sd_can_msgs/msg/detail/diagnostic_word02__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DiagnosticWord02__ros_msg_type = sd_can_msgs__msg__DiagnosticWord02;

static bool _DiagnosticWord02__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiagnosticWord02__ros_msg_type * ros_message = static_cast<const _DiagnosticWord02__ros_msg_type *>(untyped_ros_message);
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

  // Field name: rc_force_race_mode
  {
    cdr << ros_message->rc_force_race_mode;
  }

  // Field name: rc_beacon_time_out
  {
    cdr << ros_message->rc_beacon_time_out;
  }

  // Field name: display_timeout_error
  {
    cdr << ros_message->display_timeout_error;
  }

  // Field name: rm_red_flag
  {
    cdr << ros_message->rm_red_flag;
  }

  // Field name: rm_safe_stop
  {
    cdr << ros_message->rm_safe_stop;
  }

  // Field name: display_counter_error
  {
    cdr << ros_message->display_counter_error;
  }

  // Field name: cba_em_brake_sat_not_received
  {
    cdr << ros_message->cba_em_brake_sat_not_received;
  }

  // Field name: cba_sat_values_not_received
  {
    cdr << ros_message->cba_sat_values_not_received;
  }

  // Field name: ice_oil_temp_start_limit_not_rec
  {
    cdr << ros_message->ice_oil_temp_start_limit_not_rec;
  }

  // Field name: ml_stop_brake_sat_not_received
  {
    cdr << ros_message->ml_stop_brake_sat_not_received;
  }

  // Field name: psa_sat_values_not_received
  {
    cdr << ros_message->psa_sat_values_not_received;
  }

  // Field name: limp_sat_values_not_received
  {
    cdr << ros_message->limp_sat_values_not_received;
  }

  // Field name: fan_car_speed_max_value_not_rec
  {
    cdr << ros_message->fan_car_speed_max_value_not_rec;
  }

  // Field name: fan_car_speed_min_value_not_rec
  {
    cdr << ros_message->fan_car_speed_min_value_not_rec;
  }

  // Field name: fan_water_temp_max_value_not_rec
  {
    cdr << ros_message->fan_water_temp_max_value_not_rec;
  }

  // Field name: fan_water_temp_min_value_not_rec
  {
    cdr << ros_message->fan_water_temp_min_value_not_rec;
  }

  // Field name: heater_oil_temp_max_value_not_rec
  {
    cdr << ros_message->heater_oil_temp_max_value_not_rec;
  }

  // Field name: ice_fuel_pres_start_limit_not_rec
  {
    cdr << ros_message->ice_fuel_pres_start_limit_not_rec;
  }

  // Field name: ice_oil_temp_by_pass_not_received
  {
    cdr << ros_message->ice_oil_temp_by_pass_not_received;
  }

  // Field name: psa_sat_rates_def_val
  {
    cdr << ros_message->psa_sat_rates_def_val;
  }

  // Field name: bms12_soc_under_level1
  {
    cdr << ros_message->bms12_soc_under_level1;
  }

  // Field name: bms12_soc_under_level2
  {
    cdr << ros_message->bms12_soc_under_level2;
  }

  // Field name: bms12_temp_over_level1
  {
    cdr << ros_message->bms12_temp_over_level1;
  }

  // Field name: bms12_temp_over_level2
  {
    cdr << ros_message->bms12_temp_over_level2;
  }

  // Field name: bms48_soc_under_level1
  {
    cdr << ros_message->bms48_soc_under_level1;
  }

  // Field name: bms48_soc_under_level2
  {
    cdr << ros_message->bms48_soc_under_level2;
  }

  // Field name: bms48_temp_over_level1
  {
    cdr << ros_message->bms48_temp_over_level1;
  }

  // Field name: bms48_temp_over_level2
  {
    cdr << ros_message->bms48_temp_over_level2;
  }

  // Field name: badenia_counter_error
  {
    cdr << ros_message->badenia_counter_error;
  }

  // Field name: badenia_timeout_error
  {
    cdr << ros_message->badenia_timeout_error;
  }

  // Field name: rm_em_flag
  {
    cdr << ros_message->rm_em_flag;
  }

  // Field name: ml_stop_brake_bias_def_val
  {
    cdr << ros_message->ml_stop_brake_bias_def_val;
  }

  // Field name: limp_ice_sat_values_def_val
  {
    cdr << ros_message->limp_ice_sat_values_def_val;
  }

  // Field name: cba_sat_rates_def_val
  {
    cdr << ros_message->cba_sat_rates_def_val;
  }

  // Field name: limp_cba_sat_values_def_val
  {
    cdr << ros_message->limp_cba_sat_values_def_val;
  }

  // Field name: p2p_max_num_activation_def_val
  {
    cdr << ros_message->p2p_max_num_activation_def_val;
  }

  // Field name: p2p_cooldown_duration_def_val
  {
    cdr << ros_message->p2p_cooldown_duration_def_val;
  }

  // Field name: p2p_active_duration_def_val
  {
    cdr << ros_message->p2p_active_duration_def_val;
  }

  // Field name: rc_delta_timeout_lim_def_val
  {
    cdr << ros_message->rc_delta_timeout_lim_def_val;
  }

  // Field name: hl_mlsupervisor_request
  {
    cdr << ros_message->hl_mlsupervisor_request;
  }

  return true;
}

static bool _DiagnosticWord02__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiagnosticWord02__ros_msg_type * ros_message = static_cast<_DiagnosticWord02__ros_msg_type *>(untyped_ros_message);
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

  // Field name: rc_force_race_mode
  {
    cdr >> ros_message->rc_force_race_mode;
  }

  // Field name: rc_beacon_time_out
  {
    cdr >> ros_message->rc_beacon_time_out;
  }

  // Field name: display_timeout_error
  {
    cdr >> ros_message->display_timeout_error;
  }

  // Field name: rm_red_flag
  {
    cdr >> ros_message->rm_red_flag;
  }

  // Field name: rm_safe_stop
  {
    cdr >> ros_message->rm_safe_stop;
  }

  // Field name: display_counter_error
  {
    cdr >> ros_message->display_counter_error;
  }

  // Field name: cba_em_brake_sat_not_received
  {
    cdr >> ros_message->cba_em_brake_sat_not_received;
  }

  // Field name: cba_sat_values_not_received
  {
    cdr >> ros_message->cba_sat_values_not_received;
  }

  // Field name: ice_oil_temp_start_limit_not_rec
  {
    cdr >> ros_message->ice_oil_temp_start_limit_not_rec;
  }

  // Field name: ml_stop_brake_sat_not_received
  {
    cdr >> ros_message->ml_stop_brake_sat_not_received;
  }

  // Field name: psa_sat_values_not_received
  {
    cdr >> ros_message->psa_sat_values_not_received;
  }

  // Field name: limp_sat_values_not_received
  {
    cdr >> ros_message->limp_sat_values_not_received;
  }

  // Field name: fan_car_speed_max_value_not_rec
  {
    cdr >> ros_message->fan_car_speed_max_value_not_rec;
  }

  // Field name: fan_car_speed_min_value_not_rec
  {
    cdr >> ros_message->fan_car_speed_min_value_not_rec;
  }

  // Field name: fan_water_temp_max_value_not_rec
  {
    cdr >> ros_message->fan_water_temp_max_value_not_rec;
  }

  // Field name: fan_water_temp_min_value_not_rec
  {
    cdr >> ros_message->fan_water_temp_min_value_not_rec;
  }

  // Field name: heater_oil_temp_max_value_not_rec
  {
    cdr >> ros_message->heater_oil_temp_max_value_not_rec;
  }

  // Field name: ice_fuel_pres_start_limit_not_rec
  {
    cdr >> ros_message->ice_fuel_pres_start_limit_not_rec;
  }

  // Field name: ice_oil_temp_by_pass_not_received
  {
    cdr >> ros_message->ice_oil_temp_by_pass_not_received;
  }

  // Field name: psa_sat_rates_def_val
  {
    cdr >> ros_message->psa_sat_rates_def_val;
  }

  // Field name: bms12_soc_under_level1
  {
    cdr >> ros_message->bms12_soc_under_level1;
  }

  // Field name: bms12_soc_under_level2
  {
    cdr >> ros_message->bms12_soc_under_level2;
  }

  // Field name: bms12_temp_over_level1
  {
    cdr >> ros_message->bms12_temp_over_level1;
  }

  // Field name: bms12_temp_over_level2
  {
    cdr >> ros_message->bms12_temp_over_level2;
  }

  // Field name: bms48_soc_under_level1
  {
    cdr >> ros_message->bms48_soc_under_level1;
  }

  // Field name: bms48_soc_under_level2
  {
    cdr >> ros_message->bms48_soc_under_level2;
  }

  // Field name: bms48_temp_over_level1
  {
    cdr >> ros_message->bms48_temp_over_level1;
  }

  // Field name: bms48_temp_over_level2
  {
    cdr >> ros_message->bms48_temp_over_level2;
  }

  // Field name: badenia_counter_error
  {
    cdr >> ros_message->badenia_counter_error;
  }

  // Field name: badenia_timeout_error
  {
    cdr >> ros_message->badenia_timeout_error;
  }

  // Field name: rm_em_flag
  {
    cdr >> ros_message->rm_em_flag;
  }

  // Field name: ml_stop_brake_bias_def_val
  {
    cdr >> ros_message->ml_stop_brake_bias_def_val;
  }

  // Field name: limp_ice_sat_values_def_val
  {
    cdr >> ros_message->limp_ice_sat_values_def_val;
  }

  // Field name: cba_sat_rates_def_val
  {
    cdr >> ros_message->cba_sat_rates_def_val;
  }

  // Field name: limp_cba_sat_values_def_val
  {
    cdr >> ros_message->limp_cba_sat_values_def_val;
  }

  // Field name: p2p_max_num_activation_def_val
  {
    cdr >> ros_message->p2p_max_num_activation_def_val;
  }

  // Field name: p2p_cooldown_duration_def_val
  {
    cdr >> ros_message->p2p_cooldown_duration_def_val;
  }

  // Field name: p2p_active_duration_def_val
  {
    cdr >> ros_message->p2p_active_duration_def_val;
  }

  // Field name: rc_delta_timeout_lim_def_val
  {
    cdr >> ros_message->rc_delta_timeout_lim_def_val;
  }

  // Field name: hl_mlsupervisor_request
  {
    cdr >> ros_message->hl_mlsupervisor_request;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__DiagnosticWord02(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagnosticWord02__ros_msg_type * ros_message = static_cast<const _DiagnosticWord02__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name rc_force_race_mode
  {
    size_t item_size = sizeof(ros_message->rc_force_race_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_beacon_time_out
  {
    size_t item_size = sizeof(ros_message->rc_beacon_time_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name display_timeout_error
  {
    size_t item_size = sizeof(ros_message->display_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rm_red_flag
  {
    size_t item_size = sizeof(ros_message->rm_red_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rm_safe_stop
  {
    size_t item_size = sizeof(ros_message->rm_safe_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name display_counter_error
  {
    size_t item_size = sizeof(ros_message->display_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_em_brake_sat_not_received
  {
    size_t item_size = sizeof(ros_message->cba_em_brake_sat_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message->cba_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_oil_temp_start_limit_not_rec
  {
    size_t item_size = sizeof(ros_message->ice_oil_temp_start_limit_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ml_stop_brake_sat_not_received
  {
    size_t item_size = sizeof(ros_message->ml_stop_brake_sat_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message->psa_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limp_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message->limp_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan_car_speed_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message->fan_car_speed_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan_car_speed_min_value_not_rec
  {
    size_t item_size = sizeof(ros_message->fan_car_speed_min_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan_water_temp_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message->fan_water_temp_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan_water_temp_min_value_not_rec
  {
    size_t item_size = sizeof(ros_message->fan_water_temp_min_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heater_oil_temp_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message->heater_oil_temp_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_fuel_pres_start_limit_not_rec
  {
    size_t item_size = sizeof(ros_message->ice_fuel_pres_start_limit_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_oil_temp_by_pass_not_received
  {
    size_t item_size = sizeof(ros_message->ice_oil_temp_by_pass_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_sat_rates_def_val
  {
    size_t item_size = sizeof(ros_message->psa_sat_rates_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms12_soc_under_level1
  {
    size_t item_size = sizeof(ros_message->bms12_soc_under_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms12_soc_under_level2
  {
    size_t item_size = sizeof(ros_message->bms12_soc_under_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms12_temp_over_level1
  {
    size_t item_size = sizeof(ros_message->bms12_temp_over_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms12_temp_over_level2
  {
    size_t item_size = sizeof(ros_message->bms12_temp_over_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms48_soc_under_level1
  {
    size_t item_size = sizeof(ros_message->bms48_soc_under_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms48_soc_under_level2
  {
    size_t item_size = sizeof(ros_message->bms48_soc_under_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms48_temp_over_level1
  {
    size_t item_size = sizeof(ros_message->bms48_temp_over_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms48_temp_over_level2
  {
    size_t item_size = sizeof(ros_message->bms48_temp_over_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name badenia_counter_error
  {
    size_t item_size = sizeof(ros_message->badenia_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name badenia_timeout_error
  {
    size_t item_size = sizeof(ros_message->badenia_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rm_em_flag
  {
    size_t item_size = sizeof(ros_message->rm_em_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ml_stop_brake_bias_def_val
  {
    size_t item_size = sizeof(ros_message->ml_stop_brake_bias_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limp_ice_sat_values_def_val
  {
    size_t item_size = sizeof(ros_message->limp_ice_sat_values_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_sat_rates_def_val
  {
    size_t item_size = sizeof(ros_message->cba_sat_rates_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limp_cba_sat_values_def_val
  {
    size_t item_size = sizeof(ros_message->limp_cba_sat_values_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p2p_max_num_activation_def_val
  {
    size_t item_size = sizeof(ros_message->p2p_max_num_activation_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p2p_cooldown_duration_def_val
  {
    size_t item_size = sizeof(ros_message->p2p_cooldown_duration_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p2p_active_duration_def_val
  {
    size_t item_size = sizeof(ros_message->p2p_active_duration_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_delta_timeout_lim_def_val
  {
    size_t item_size = sizeof(ros_message->rc_delta_timeout_lim_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_mlsupervisor_request
  {
    size_t item_size = sizeof(ros_message->hl_mlsupervisor_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiagnosticWord02__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__DiagnosticWord02(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__DiagnosticWord02(
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
  // member: rc_force_race_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_beacon_time_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: display_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rm_red_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rm_safe_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: display_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_em_brake_sat_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_oil_temp_start_limit_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ml_stop_brake_sat_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: limp_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan_car_speed_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan_car_speed_min_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan_water_temp_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan_water_temp_min_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heater_oil_temp_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_fuel_pres_start_limit_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_oil_temp_by_pass_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_sat_rates_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms12_soc_under_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms12_soc_under_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms12_temp_over_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms12_temp_over_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms48_soc_under_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms48_soc_under_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms48_temp_over_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms48_temp_over_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: badenia_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: badenia_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rm_em_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ml_stop_brake_bias_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: limp_ice_sat_values_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_sat_rates_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: limp_cba_sat_values_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p2p_max_num_activation_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p2p_cooldown_duration_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p2p_active_duration_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_delta_timeout_lim_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_mlsupervisor_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sd_can_msgs__msg__DiagnosticWord02;
    is_plain =
      (
      offsetof(DataType, hl_mlsupervisor_request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DiagnosticWord02__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__DiagnosticWord02(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiagnosticWord02 = {
  "sd_can_msgs::msg",
  "DiagnosticWord02",
  _DiagnosticWord02__cdr_serialize,
  _DiagnosticWord02__cdr_deserialize,
  _DiagnosticWord02__get_serialized_size,
  _DiagnosticWord02__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticWord02__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiagnosticWord02,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, DiagnosticWord02)() {
  return &_DiagnosticWord02__type_support;
}

#if defined(__cplusplus)
}
#endif
