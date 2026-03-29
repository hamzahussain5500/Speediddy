// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01Legacy.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__struct.h"
#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__functions.h"
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


using _DiagnosticWord01Legacy__ros_msg_type = sd_can_msgs__msg__DiagnosticWord01Legacy;

static bool _DiagnosticWord01Legacy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiagnosticWord01Legacy__ros_msg_type * ros_message = static_cast<const _DiagnosticWord01Legacy__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bms_starting_faild
  {
    cdr << ros_message->bms_starting_faild;
  }

  // Field name: bms_timeout_error
  {
    cdr << ros_message->bms_timeout_error;
  }

  // Field name: cba_fl_counter_error
  {
    cdr << ros_message->cba_fl_counter_error;
  }

  // Field name: cba_fl_derating
  {
    cdr << ros_message->cba_fl_derating;
  }

  // Field name: cba_fl_error
  {
    cdr << ros_message->cba_fl_error;
  }

  // Field name: cba_fl_timeout_error
  {
    cdr << ros_message->cba_fl_timeout_error;
  }

  // Field name: cba_fr_counter_error
  {
    cdr << ros_message->cba_fr_counter_error;
  }

  // Field name: cba_fr_derating
  {
    cdr << ros_message->cba_fr_derating;
  }

  // Field name: cba_fr_error
  {
    cdr << ros_message->cba_fr_error;
  }

  // Field name: cba_fr_timeout_error
  {
    cdr << ros_message->cba_fr_timeout_error;
  }

  // Field name: cba_rl_counter_error
  {
    cdr << ros_message->cba_rl_counter_error;
  }

  // Field name: cba_rl_derating
  {
    cdr << ros_message->cba_rl_derating;
  }

  // Field name: cba_rl_error
  {
    cdr << ros_message->cba_rl_error;
  }

  // Field name: cba_rl_timeout_error
  {
    cdr << ros_message->cba_rl_timeout_error;
  }

  // Field name: cba_rr_counter_error
  {
    cdr << ros_message->cba_rr_counter_error;
  }

  // Field name: cba_rr_derating
  {
    cdr << ros_message->cba_rr_derating;
  }

  // Field name: cba_rr_error
  {
    cdr << ros_message->cba_rr_error;
  }

  // Field name: cba_rr_timeout_error
  {
    cdr << ros_message->cba_rr_timeout_error;
  }

  // Field name: dcdc_starting_faild
  {
    cdr << ros_message->dcdc_starting_faild;
  }

  // Field name: dcdc_timeout_error
  {
    cdr << ros_message->dcdc_timeout_error;
  }

  // Field name: ice_error
  {
    cdr << ros_message->ice_error;
  }

  // Field name: ice_gear_low_oil_temp_warning
  {
    cdr << ros_message->ice_gear_low_oil_temp_warning;
  }

  // Field name: ice_engine_off_rejected
  {
    cdr << ros_message->ice_engine_off_rejected;
  }

  // Field name: ice_starting_fueling_failed
  {
    cdr << ros_message->ice_starting_fueling_failed;
  }

  // Field name: ice_starting_oil_heater_failed
  {
    cdr << ros_message->ice_starting_oil_heater_failed;
  }

  // Field name: ice_starting_starting_failed
  {
    cdr << ros_message->ice_starting_starting_failed;
  }

  // Field name: ice_aps_warning
  {
    cdr << ros_message->ice_aps_warning;
  }

  // Field name: hl_counter_error
  {
    cdr << ros_message->hl_counter_error;
  }

  // Field name: hl_timeout_error
  {
    cdr << ros_message->hl_timeout_error;
  }

  // Field name: ice_counter_error
  {
    cdr << ros_message->ice_counter_error;
  }

  // Field name: ice_timeout_error
  {
    cdr << ros_message->ice_timeout_error;
  }

  // Field name: emb_line_press_over_max_start_limit
  {
    cdr << ros_message->emb_line_press_over_max_start_limit;
  }

  // Field name: ice_oil_temp_under_min_start_limit
  {
    cdr << ros_message->ice_oil_temp_under_min_start_limit;
  }

  // Field name: pdu1_counter_error
  {
    cdr << ros_message->pdu1_counter_error;
  }

  // Field name: pdu1_timeout_error
  {
    cdr << ros_message->pdu1_timeout_error;
  }

  // Field name: pdu2_counter_error
  {
    cdr << ros_message->pdu2_counter_error;
  }

  // Field name: pdu2_timeout_error
  {
    cdr << ros_message->pdu2_timeout_error;
  }

  // Field name: em_piston_hall_not_ready
  {
    cdr << ros_message->em_piston_hall_not_ready;
  }

  // Field name: psa_counter_error
  {
    cdr << ros_message->psa_counter_error;
  }

  // Field name: psa_derating
  {
    cdr << ros_message->psa_derating;
  }

  // Field name: psa_error
  {
    cdr << ros_message->psa_error;
  }

  // Field name: psa_timeout_error
  {
    cdr << ros_message->psa_timeout_error;
  }

  // Field name: emb_tank_press_under_level1
  {
    cdr << ros_message->emb_tank_press_under_level1;
  }

  // Field name: emb_tank_press_under_level2
  {
    cdr << ros_message->emb_tank_press_under_level2;
  }

  // Field name: emb_tank_press_under_level3
  {
    cdr << ros_message->emb_tank_press_under_level3;
  }

  // Field name: emb_tank_press_under_min_start_limit
  {
    cdr << ros_message->emb_tank_press_under_min_start_limit;
  }

  // Field name: ice_override_wrong_config
  {
    cdr << ros_message->ice_override_wrong_config;
  }

  // Field name: bsu_wrong_init_config
  {
    cdr << ros_message->bsu_wrong_init_config;
  }

  // Field name: ice_boost_warning
  {
    cdr << ros_message->ice_boost_warning;
  }

  // Field name: ice_coolant_pressure_warning
  {
    cdr << ros_message->ice_coolant_pressure_warning;
  }

  // Field name: ice_coolant_temperature_warning
  {
    cdr << ros_message->ice_coolant_temperature_warning;
  }

  // Field name: ice_fuel_pressure_warning
  {
    cdr << ros_message->ice_fuel_pressure_warning;
  }

  // Field name: ice_gear_oil_temperature_warning
  {
    cdr << ros_message->ice_gear_oil_temperature_warning;
  }

  // Field name: ice_oil_pressure_warning
  {
    cdr << ros_message->ice_oil_pressure_warning;
  }

  // Field name: ice_oil_temperature_warning
  {
    cdr << ros_message->ice_oil_temperature_warning;
  }

  // Field name: ice_over_rpm_warning
  {
    cdr << ros_message->ice_over_rpm_warning;
  }

  // Field name: ice_sensor_failure_warning
  {
    cdr << ros_message->ice_sensor_failure_warning;
  }

  // Field name: ice_target_gear_not_reached_warning
  {
    cdr << ros_message->ice_target_gear_not_reached_warning;
  }

  // Field name: ice_fuel_volume_warning
  {
    cdr << ros_message->ice_fuel_volume_warning;
  }

  // Field name: rm_counter_error
  {
    cdr << ros_message->rm_counter_error;
  }

  // Field name: rm_timeout_error
  {
    cdr << ros_message->rm_timeout_error;
  }

  // Field name: ice_diagnostic_spare
  {
    cdr << ros_message->ice_diagnostic_spare;
  }

  return true;
}

static bool _DiagnosticWord01Legacy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiagnosticWord01Legacy__ros_msg_type * ros_message = static_cast<_DiagnosticWord01Legacy__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bms_starting_faild
  {
    cdr >> ros_message->bms_starting_faild;
  }

  // Field name: bms_timeout_error
  {
    cdr >> ros_message->bms_timeout_error;
  }

  // Field name: cba_fl_counter_error
  {
    cdr >> ros_message->cba_fl_counter_error;
  }

  // Field name: cba_fl_derating
  {
    cdr >> ros_message->cba_fl_derating;
  }

  // Field name: cba_fl_error
  {
    cdr >> ros_message->cba_fl_error;
  }

  // Field name: cba_fl_timeout_error
  {
    cdr >> ros_message->cba_fl_timeout_error;
  }

  // Field name: cba_fr_counter_error
  {
    cdr >> ros_message->cba_fr_counter_error;
  }

  // Field name: cba_fr_derating
  {
    cdr >> ros_message->cba_fr_derating;
  }

  // Field name: cba_fr_error
  {
    cdr >> ros_message->cba_fr_error;
  }

  // Field name: cba_fr_timeout_error
  {
    cdr >> ros_message->cba_fr_timeout_error;
  }

  // Field name: cba_rl_counter_error
  {
    cdr >> ros_message->cba_rl_counter_error;
  }

  // Field name: cba_rl_derating
  {
    cdr >> ros_message->cba_rl_derating;
  }

  // Field name: cba_rl_error
  {
    cdr >> ros_message->cba_rl_error;
  }

  // Field name: cba_rl_timeout_error
  {
    cdr >> ros_message->cba_rl_timeout_error;
  }

  // Field name: cba_rr_counter_error
  {
    cdr >> ros_message->cba_rr_counter_error;
  }

  // Field name: cba_rr_derating
  {
    cdr >> ros_message->cba_rr_derating;
  }

  // Field name: cba_rr_error
  {
    cdr >> ros_message->cba_rr_error;
  }

  // Field name: cba_rr_timeout_error
  {
    cdr >> ros_message->cba_rr_timeout_error;
  }

  // Field name: dcdc_starting_faild
  {
    cdr >> ros_message->dcdc_starting_faild;
  }

  // Field name: dcdc_timeout_error
  {
    cdr >> ros_message->dcdc_timeout_error;
  }

  // Field name: ice_error
  {
    cdr >> ros_message->ice_error;
  }

  // Field name: ice_gear_low_oil_temp_warning
  {
    cdr >> ros_message->ice_gear_low_oil_temp_warning;
  }

  // Field name: ice_engine_off_rejected
  {
    cdr >> ros_message->ice_engine_off_rejected;
  }

  // Field name: ice_starting_fueling_failed
  {
    cdr >> ros_message->ice_starting_fueling_failed;
  }

  // Field name: ice_starting_oil_heater_failed
  {
    cdr >> ros_message->ice_starting_oil_heater_failed;
  }

  // Field name: ice_starting_starting_failed
  {
    cdr >> ros_message->ice_starting_starting_failed;
  }

  // Field name: ice_aps_warning
  {
    cdr >> ros_message->ice_aps_warning;
  }

  // Field name: hl_counter_error
  {
    cdr >> ros_message->hl_counter_error;
  }

  // Field name: hl_timeout_error
  {
    cdr >> ros_message->hl_timeout_error;
  }

  // Field name: ice_counter_error
  {
    cdr >> ros_message->ice_counter_error;
  }

  // Field name: ice_timeout_error
  {
    cdr >> ros_message->ice_timeout_error;
  }

  // Field name: emb_line_press_over_max_start_limit
  {
    cdr >> ros_message->emb_line_press_over_max_start_limit;
  }

  // Field name: ice_oil_temp_under_min_start_limit
  {
    cdr >> ros_message->ice_oil_temp_under_min_start_limit;
  }

  // Field name: pdu1_counter_error
  {
    cdr >> ros_message->pdu1_counter_error;
  }

  // Field name: pdu1_timeout_error
  {
    cdr >> ros_message->pdu1_timeout_error;
  }

  // Field name: pdu2_counter_error
  {
    cdr >> ros_message->pdu2_counter_error;
  }

  // Field name: pdu2_timeout_error
  {
    cdr >> ros_message->pdu2_timeout_error;
  }

  // Field name: em_piston_hall_not_ready
  {
    cdr >> ros_message->em_piston_hall_not_ready;
  }

  // Field name: psa_counter_error
  {
    cdr >> ros_message->psa_counter_error;
  }

  // Field name: psa_derating
  {
    cdr >> ros_message->psa_derating;
  }

  // Field name: psa_error
  {
    cdr >> ros_message->psa_error;
  }

  // Field name: psa_timeout_error
  {
    cdr >> ros_message->psa_timeout_error;
  }

  // Field name: emb_tank_press_under_level1
  {
    cdr >> ros_message->emb_tank_press_under_level1;
  }

  // Field name: emb_tank_press_under_level2
  {
    cdr >> ros_message->emb_tank_press_under_level2;
  }

  // Field name: emb_tank_press_under_level3
  {
    cdr >> ros_message->emb_tank_press_under_level3;
  }

  // Field name: emb_tank_press_under_min_start_limit
  {
    cdr >> ros_message->emb_tank_press_under_min_start_limit;
  }

  // Field name: ice_override_wrong_config
  {
    cdr >> ros_message->ice_override_wrong_config;
  }

  // Field name: bsu_wrong_init_config
  {
    cdr >> ros_message->bsu_wrong_init_config;
  }

  // Field name: ice_boost_warning
  {
    cdr >> ros_message->ice_boost_warning;
  }

  // Field name: ice_coolant_pressure_warning
  {
    cdr >> ros_message->ice_coolant_pressure_warning;
  }

  // Field name: ice_coolant_temperature_warning
  {
    cdr >> ros_message->ice_coolant_temperature_warning;
  }

  // Field name: ice_fuel_pressure_warning
  {
    cdr >> ros_message->ice_fuel_pressure_warning;
  }

  // Field name: ice_gear_oil_temperature_warning
  {
    cdr >> ros_message->ice_gear_oil_temperature_warning;
  }

  // Field name: ice_oil_pressure_warning
  {
    cdr >> ros_message->ice_oil_pressure_warning;
  }

  // Field name: ice_oil_temperature_warning
  {
    cdr >> ros_message->ice_oil_temperature_warning;
  }

  // Field name: ice_over_rpm_warning
  {
    cdr >> ros_message->ice_over_rpm_warning;
  }

  // Field name: ice_sensor_failure_warning
  {
    cdr >> ros_message->ice_sensor_failure_warning;
  }

  // Field name: ice_target_gear_not_reached_warning
  {
    cdr >> ros_message->ice_target_gear_not_reached_warning;
  }

  // Field name: ice_fuel_volume_warning
  {
    cdr >> ros_message->ice_fuel_volume_warning;
  }

  // Field name: rm_counter_error
  {
    cdr >> ros_message->rm_counter_error;
  }

  // Field name: rm_timeout_error
  {
    cdr >> ros_message->rm_timeout_error;
  }

  // Field name: ice_diagnostic_spare
  {
    cdr >> ros_message->ice_diagnostic_spare;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__DiagnosticWord01Legacy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagnosticWord01Legacy__ros_msg_type * ros_message = static_cast<const _DiagnosticWord01Legacy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name bms_starting_faild
  {
    size_t item_size = sizeof(ros_message->bms_starting_faild);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_timeout_error
  {
    size_t item_size = sizeof(ros_message->bms_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fl_counter_error
  {
    size_t item_size = sizeof(ros_message->cba_fl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fl_derating
  {
    size_t item_size = sizeof(ros_message->cba_fl_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fl_error
  {
    size_t item_size = sizeof(ros_message->cba_fl_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fl_timeout_error
  {
    size_t item_size = sizeof(ros_message->cba_fl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fr_counter_error
  {
    size_t item_size = sizeof(ros_message->cba_fr_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fr_derating
  {
    size_t item_size = sizeof(ros_message->cba_fr_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fr_error
  {
    size_t item_size = sizeof(ros_message->cba_fr_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_fr_timeout_error
  {
    size_t item_size = sizeof(ros_message->cba_fr_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rl_counter_error
  {
    size_t item_size = sizeof(ros_message->cba_rl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rl_derating
  {
    size_t item_size = sizeof(ros_message->cba_rl_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rl_error
  {
    size_t item_size = sizeof(ros_message->cba_rl_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rl_timeout_error
  {
    size_t item_size = sizeof(ros_message->cba_rl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rr_counter_error
  {
    size_t item_size = sizeof(ros_message->cba_rr_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rr_derating
  {
    size_t item_size = sizeof(ros_message->cba_rr_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rr_error
  {
    size_t item_size = sizeof(ros_message->cba_rr_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cba_rr_timeout_error
  {
    size_t item_size = sizeof(ros_message->cba_rr_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dcdc_starting_faild
  {
    size_t item_size = sizeof(ros_message->dcdc_starting_faild);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dcdc_timeout_error
  {
    size_t item_size = sizeof(ros_message->dcdc_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_error
  {
    size_t item_size = sizeof(ros_message->ice_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_gear_low_oil_temp_warning
  {
    size_t item_size = sizeof(ros_message->ice_gear_low_oil_temp_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_engine_off_rejected
  {
    size_t item_size = sizeof(ros_message->ice_engine_off_rejected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_starting_fueling_failed
  {
    size_t item_size = sizeof(ros_message->ice_starting_fueling_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_starting_oil_heater_failed
  {
    size_t item_size = sizeof(ros_message->ice_starting_oil_heater_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_starting_starting_failed
  {
    size_t item_size = sizeof(ros_message->ice_starting_starting_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_aps_warning
  {
    size_t item_size = sizeof(ros_message->ice_aps_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_counter_error
  {
    size_t item_size = sizeof(ros_message->hl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_timeout_error
  {
    size_t item_size = sizeof(ros_message->hl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_counter_error
  {
    size_t item_size = sizeof(ros_message->ice_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_timeout_error
  {
    size_t item_size = sizeof(ros_message->ice_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emb_line_press_over_max_start_limit
  {
    size_t item_size = sizeof(ros_message->emb_line_press_over_max_start_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_oil_temp_under_min_start_limit
  {
    size_t item_size = sizeof(ros_message->ice_oil_temp_under_min_start_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdu1_counter_error
  {
    size_t item_size = sizeof(ros_message->pdu1_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdu1_timeout_error
  {
    size_t item_size = sizeof(ros_message->pdu1_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdu2_counter_error
  {
    size_t item_size = sizeof(ros_message->pdu2_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdu2_timeout_error
  {
    size_t item_size = sizeof(ros_message->pdu2_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name em_piston_hall_not_ready
  {
    size_t item_size = sizeof(ros_message->em_piston_hall_not_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_counter_error
  {
    size_t item_size = sizeof(ros_message->psa_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_derating
  {
    size_t item_size = sizeof(ros_message->psa_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_error
  {
    size_t item_size = sizeof(ros_message->psa_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psa_timeout_error
  {
    size_t item_size = sizeof(ros_message->psa_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emb_tank_press_under_level1
  {
    size_t item_size = sizeof(ros_message->emb_tank_press_under_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emb_tank_press_under_level2
  {
    size_t item_size = sizeof(ros_message->emb_tank_press_under_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emb_tank_press_under_level3
  {
    size_t item_size = sizeof(ros_message->emb_tank_press_under_level3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emb_tank_press_under_min_start_limit
  {
    size_t item_size = sizeof(ros_message->emb_tank_press_under_min_start_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_override_wrong_config
  {
    size_t item_size = sizeof(ros_message->ice_override_wrong_config);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bsu_wrong_init_config
  {
    size_t item_size = sizeof(ros_message->bsu_wrong_init_config);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_boost_warning
  {
    size_t item_size = sizeof(ros_message->ice_boost_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_coolant_pressure_warning
  {
    size_t item_size = sizeof(ros_message->ice_coolant_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_coolant_temperature_warning
  {
    size_t item_size = sizeof(ros_message->ice_coolant_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_fuel_pressure_warning
  {
    size_t item_size = sizeof(ros_message->ice_fuel_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_gear_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message->ice_gear_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_oil_pressure_warning
  {
    size_t item_size = sizeof(ros_message->ice_oil_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message->ice_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_over_rpm_warning
  {
    size_t item_size = sizeof(ros_message->ice_over_rpm_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_sensor_failure_warning
  {
    size_t item_size = sizeof(ros_message->ice_sensor_failure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_target_gear_not_reached_warning
  {
    size_t item_size = sizeof(ros_message->ice_target_gear_not_reached_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_fuel_volume_warning
  {
    size_t item_size = sizeof(ros_message->ice_fuel_volume_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rm_counter_error
  {
    size_t item_size = sizeof(ros_message->rm_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rm_timeout_error
  {
    size_t item_size = sizeof(ros_message->rm_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_diagnostic_spare
  {
    size_t item_size = sizeof(ros_message->ice_diagnostic_spare);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiagnosticWord01Legacy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__DiagnosticWord01Legacy(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__DiagnosticWord01Legacy(
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
  // member: bms_starting_faild
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fl_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fl_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fr_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fr_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fr_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_fr_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rl_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rl_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rr_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rr_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rr_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cba_rr_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dcdc_starting_faild
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dcdc_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_gear_low_oil_temp_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_engine_off_rejected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_starting_fueling_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_starting_oil_heater_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_starting_starting_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_aps_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emb_line_press_over_max_start_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_oil_temp_under_min_start_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdu1_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdu1_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdu2_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdu2_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: em_piston_hall_not_ready
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: psa_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emb_tank_press_under_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emb_tank_press_under_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emb_tank_press_under_level3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emb_tank_press_under_min_start_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_override_wrong_config
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bsu_wrong_init_config
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_boost_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_coolant_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_coolant_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_fuel_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_gear_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_oil_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_over_rpm_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_sensor_failure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_target_gear_not_reached_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_fuel_volume_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rm_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rm_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_diagnostic_spare
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
    using DataType = sd_can_msgs__msg__DiagnosticWord01Legacy;
    is_plain =
      (
      offsetof(DataType, ice_diagnostic_spare) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DiagnosticWord01Legacy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__DiagnosticWord01Legacy(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiagnosticWord01Legacy = {
  "sd_can_msgs::msg",
  "DiagnosticWord01Legacy",
  _DiagnosticWord01Legacy__cdr_serialize,
  _DiagnosticWord01Legacy__cdr_deserialize,
  _DiagnosticWord01Legacy__get_serialized_size,
  _DiagnosticWord01Legacy__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticWord01Legacy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiagnosticWord01Legacy,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, DiagnosticWord01Legacy)() {
  return &_DiagnosticWord01Legacy__type_support;
}

#if defined(__cplusplus)
}
#endif
