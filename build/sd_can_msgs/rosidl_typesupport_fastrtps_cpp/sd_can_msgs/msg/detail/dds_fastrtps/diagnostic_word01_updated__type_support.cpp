// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_can_msgs:msg/DiagnosticWord01Updated.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word01_updated__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_can_msgs/msg/detail/diagnostic_word01_updated__struct.hpp"

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


namespace sd_can_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_serialize(
  const sd_can_msgs::msg::DiagnosticWord01Updated & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: bms_starting_faild
  cdr << ros_message.bms_starting_faild;
  // Member: bms_timeout_error
  cdr << ros_message.bms_timeout_error;
  // Member: cba_fl_counter_error
  cdr << ros_message.cba_fl_counter_error;
  // Member: cba_fl_derating
  cdr << ros_message.cba_fl_derating;
  // Member: cba_fl_error
  cdr << ros_message.cba_fl_error;
  // Member: cba_fl_timeout_error
  cdr << ros_message.cba_fl_timeout_error;
  // Member: cba_fr_counter_error
  cdr << ros_message.cba_fr_counter_error;
  // Member: cba_fr_derating
  cdr << ros_message.cba_fr_derating;
  // Member: cba_fr_error
  cdr << ros_message.cba_fr_error;
  // Member: cba_fr_timeout_error
  cdr << ros_message.cba_fr_timeout_error;
  // Member: cba_rl_counter_error
  cdr << ros_message.cba_rl_counter_error;
  // Member: cba_rl_derating
  cdr << ros_message.cba_rl_derating;
  // Member: cba_rl_error
  cdr << ros_message.cba_rl_error;
  // Member: cba_rl_timeout_error
  cdr << ros_message.cba_rl_timeout_error;
  // Member: cba_rr_counter_error
  cdr << ros_message.cba_rr_counter_error;
  // Member: cba_rr_derating
  cdr << ros_message.cba_rr_derating;
  // Member: cba_rr_error
  cdr << ros_message.cba_rr_error;
  // Member: cba_rr_timeout_error
  cdr << ros_message.cba_rr_timeout_error;
  // Member: dcdc_starting_faild
  cdr << ros_message.dcdc_starting_faild;
  // Member: dcdc_timeout_error
  cdr << ros_message.dcdc_timeout_error;
  // Member: ecu_timeout_em_fault
  cdr << ros_message.ecu_timeout_em_fault;
  // Member: dem_cbafl_not_receive
  cdr << ros_message.dem_cbafl_not_receive;
  // Member: ice_gear_low_oil_temp_warning
  cdr << ros_message.ice_gear_low_oil_temp_warning;
  // Member: ice_engine_off_rejected
  cdr << ros_message.ice_engine_off_rejected;
  // Member: dem_pdu12_v_not_receive
  cdr << ros_message.dem_pdu12_v_not_receive;
  // Member: ice_starting_fueling_failed
  cdr << ros_message.ice_starting_fueling_failed;
  // Member: ice_starting_oil_heater_failed
  cdr << ros_message.ice_starting_oil_heater_failed;
  // Member: ice_starting_starting_failed
  cdr << ros_message.ice_starting_starting_failed;
  // Member: ice_aps_warning
  cdr << ros_message.ice_aps_warning;
  // Member: hl_counter_error
  cdr << ros_message.hl_counter_error;
  // Member: hl_timeout_error
  cdr << ros_message.hl_timeout_error;
  // Member: ice_counter_error
  cdr << ros_message.ice_counter_error;
  // Member: ice_timeout_error
  cdr << ros_message.ice_timeout_error;
  // Member: dem_cbafr_not_receive
  cdr << ros_message.dem_cbafr_not_receive;
  // Member: ice_oil_temp_under_min_start_limit
  cdr << ros_message.ice_oil_temp_under_min_start_limit;
  // Member: pdu12_counter_error
  cdr << ros_message.pdu12_counter_error;
  // Member: pdu12_timeout_error
  cdr << ros_message.pdu12_timeout_error;
  // Member: pdu48_counter_error
  cdr << ros_message.pdu48_counter_error;
  // Member: pdu48_timeout_error
  cdr << ros_message.pdu48_timeout_error;
  // Member: dem_cbarl_not_receive
  cdr << ros_message.dem_cbarl_not_receive;
  // Member: psa_counter_error
  cdr << ros_message.psa_counter_error;
  // Member: psa_derating
  cdr << ros_message.psa_derating;
  // Member: psa_error
  cdr << ros_message.psa_error;
  // Member: psa_timeout_error
  cdr << ros_message.psa_timeout_error;
  // Member: dem_cbarr_not_receive
  cdr << ros_message.dem_cbarr_not_receive;
  // Member: em_stop_conditions_active
  cdr << ros_message.em_stop_conditions_active;
  // Member: ml_stop_conditions_active
  cdr << ros_message.ml_stop_conditions_active;
  // Member: dcdc4812_under_min_start_limit
  cdr << ros_message.dcdc4812_under_min_start_limit;
  // Member: ice_override_wrong_config
  cdr << ros_message.ice_override_wrong_config;
  // Member: bsu_wrong_init_config
  cdr << ros_message.bsu_wrong_init_config;
  // Member: ice_boost_warning
  cdr << ros_message.ice_boost_warning;
  // Member: ice_coolant_pressure_warning
  cdr << ros_message.ice_coolant_pressure_warning;
  // Member: ice_coolant_temperature_warning
  cdr << ros_message.ice_coolant_temperature_warning;
  // Member: ice_fuel_pressure_warning
  cdr << ros_message.ice_fuel_pressure_warning;
  // Member: ice_gear_oil_temperature_warning
  cdr << ros_message.ice_gear_oil_temperature_warning;
  // Member: ice_oil_pressure_warning
  cdr << ros_message.ice_oil_pressure_warning;
  // Member: ice_oil_temperature_warning
  cdr << ros_message.ice_oil_temperature_warning;
  // Member: pdu12_active_anti_fire
  cdr << ros_message.pdu12_active_anti_fire;
  // Member: ice_sensor_failure_warning
  cdr << ros_message.ice_sensor_failure_warning;
  // Member: ice_target_gear_not_reached_warning
  cdr << ros_message.ice_target_gear_not_reached_warning;
  // Member: ice_fuel_volume_warning
  cdr << ros_message.ice_fuel_volume_warning;
  // Member: rm_counter_error
  cdr << ros_message.rm_counter_error;
  // Member: rm_timeout_error
  cdr << ros_message.rm_timeout_error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_can_msgs::msg::DiagnosticWord01Updated & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: bms_starting_faild
  cdr >> ros_message.bms_starting_faild;

  // Member: bms_timeout_error
  cdr >> ros_message.bms_timeout_error;

  // Member: cba_fl_counter_error
  cdr >> ros_message.cba_fl_counter_error;

  // Member: cba_fl_derating
  cdr >> ros_message.cba_fl_derating;

  // Member: cba_fl_error
  cdr >> ros_message.cba_fl_error;

  // Member: cba_fl_timeout_error
  cdr >> ros_message.cba_fl_timeout_error;

  // Member: cba_fr_counter_error
  cdr >> ros_message.cba_fr_counter_error;

  // Member: cba_fr_derating
  cdr >> ros_message.cba_fr_derating;

  // Member: cba_fr_error
  cdr >> ros_message.cba_fr_error;

  // Member: cba_fr_timeout_error
  cdr >> ros_message.cba_fr_timeout_error;

  // Member: cba_rl_counter_error
  cdr >> ros_message.cba_rl_counter_error;

  // Member: cba_rl_derating
  cdr >> ros_message.cba_rl_derating;

  // Member: cba_rl_error
  cdr >> ros_message.cba_rl_error;

  // Member: cba_rl_timeout_error
  cdr >> ros_message.cba_rl_timeout_error;

  // Member: cba_rr_counter_error
  cdr >> ros_message.cba_rr_counter_error;

  // Member: cba_rr_derating
  cdr >> ros_message.cba_rr_derating;

  // Member: cba_rr_error
  cdr >> ros_message.cba_rr_error;

  // Member: cba_rr_timeout_error
  cdr >> ros_message.cba_rr_timeout_error;

  // Member: dcdc_starting_faild
  cdr >> ros_message.dcdc_starting_faild;

  // Member: dcdc_timeout_error
  cdr >> ros_message.dcdc_timeout_error;

  // Member: ecu_timeout_em_fault
  cdr >> ros_message.ecu_timeout_em_fault;

  // Member: dem_cbafl_not_receive
  cdr >> ros_message.dem_cbafl_not_receive;

  // Member: ice_gear_low_oil_temp_warning
  cdr >> ros_message.ice_gear_low_oil_temp_warning;

  // Member: ice_engine_off_rejected
  cdr >> ros_message.ice_engine_off_rejected;

  // Member: dem_pdu12_v_not_receive
  cdr >> ros_message.dem_pdu12_v_not_receive;

  // Member: ice_starting_fueling_failed
  cdr >> ros_message.ice_starting_fueling_failed;

  // Member: ice_starting_oil_heater_failed
  cdr >> ros_message.ice_starting_oil_heater_failed;

  // Member: ice_starting_starting_failed
  cdr >> ros_message.ice_starting_starting_failed;

  // Member: ice_aps_warning
  cdr >> ros_message.ice_aps_warning;

  // Member: hl_counter_error
  cdr >> ros_message.hl_counter_error;

  // Member: hl_timeout_error
  cdr >> ros_message.hl_timeout_error;

  // Member: ice_counter_error
  cdr >> ros_message.ice_counter_error;

  // Member: ice_timeout_error
  cdr >> ros_message.ice_timeout_error;

  // Member: dem_cbafr_not_receive
  cdr >> ros_message.dem_cbafr_not_receive;

  // Member: ice_oil_temp_under_min_start_limit
  cdr >> ros_message.ice_oil_temp_under_min_start_limit;

  // Member: pdu12_counter_error
  cdr >> ros_message.pdu12_counter_error;

  // Member: pdu12_timeout_error
  cdr >> ros_message.pdu12_timeout_error;

  // Member: pdu48_counter_error
  cdr >> ros_message.pdu48_counter_error;

  // Member: pdu48_timeout_error
  cdr >> ros_message.pdu48_timeout_error;

  // Member: dem_cbarl_not_receive
  cdr >> ros_message.dem_cbarl_not_receive;

  // Member: psa_counter_error
  cdr >> ros_message.psa_counter_error;

  // Member: psa_derating
  cdr >> ros_message.psa_derating;

  // Member: psa_error
  cdr >> ros_message.psa_error;

  // Member: psa_timeout_error
  cdr >> ros_message.psa_timeout_error;

  // Member: dem_cbarr_not_receive
  cdr >> ros_message.dem_cbarr_not_receive;

  // Member: em_stop_conditions_active
  cdr >> ros_message.em_stop_conditions_active;

  // Member: ml_stop_conditions_active
  cdr >> ros_message.ml_stop_conditions_active;

  // Member: dcdc4812_under_min_start_limit
  cdr >> ros_message.dcdc4812_under_min_start_limit;

  // Member: ice_override_wrong_config
  cdr >> ros_message.ice_override_wrong_config;

  // Member: bsu_wrong_init_config
  cdr >> ros_message.bsu_wrong_init_config;

  // Member: ice_boost_warning
  cdr >> ros_message.ice_boost_warning;

  // Member: ice_coolant_pressure_warning
  cdr >> ros_message.ice_coolant_pressure_warning;

  // Member: ice_coolant_temperature_warning
  cdr >> ros_message.ice_coolant_temperature_warning;

  // Member: ice_fuel_pressure_warning
  cdr >> ros_message.ice_fuel_pressure_warning;

  // Member: ice_gear_oil_temperature_warning
  cdr >> ros_message.ice_gear_oil_temperature_warning;

  // Member: ice_oil_pressure_warning
  cdr >> ros_message.ice_oil_pressure_warning;

  // Member: ice_oil_temperature_warning
  cdr >> ros_message.ice_oil_temperature_warning;

  // Member: pdu12_active_anti_fire
  cdr >> ros_message.pdu12_active_anti_fire;

  // Member: ice_sensor_failure_warning
  cdr >> ros_message.ice_sensor_failure_warning;

  // Member: ice_target_gear_not_reached_warning
  cdr >> ros_message.ice_target_gear_not_reached_warning;

  // Member: ice_fuel_volume_warning
  cdr >> ros_message.ice_fuel_volume_warning;

  // Member: rm_counter_error
  cdr >> ros_message.rm_counter_error;

  // Member: rm_timeout_error
  cdr >> ros_message.rm_timeout_error;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
get_serialized_size(
  const sd_can_msgs::msg::DiagnosticWord01Updated & ros_message,
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
  // Member: bms_starting_faild
  {
    size_t item_size = sizeof(ros_message.bms_starting_faild);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_timeout_error
  {
    size_t item_size = sizeof(ros_message.bms_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fl_counter_error
  {
    size_t item_size = sizeof(ros_message.cba_fl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fl_derating
  {
    size_t item_size = sizeof(ros_message.cba_fl_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fl_error
  {
    size_t item_size = sizeof(ros_message.cba_fl_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fl_timeout_error
  {
    size_t item_size = sizeof(ros_message.cba_fl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fr_counter_error
  {
    size_t item_size = sizeof(ros_message.cba_fr_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fr_derating
  {
    size_t item_size = sizeof(ros_message.cba_fr_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fr_error
  {
    size_t item_size = sizeof(ros_message.cba_fr_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_fr_timeout_error
  {
    size_t item_size = sizeof(ros_message.cba_fr_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rl_counter_error
  {
    size_t item_size = sizeof(ros_message.cba_rl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rl_derating
  {
    size_t item_size = sizeof(ros_message.cba_rl_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rl_error
  {
    size_t item_size = sizeof(ros_message.cba_rl_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rl_timeout_error
  {
    size_t item_size = sizeof(ros_message.cba_rl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rr_counter_error
  {
    size_t item_size = sizeof(ros_message.cba_rr_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rr_derating
  {
    size_t item_size = sizeof(ros_message.cba_rr_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rr_error
  {
    size_t item_size = sizeof(ros_message.cba_rr_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_rr_timeout_error
  {
    size_t item_size = sizeof(ros_message.cba_rr_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dcdc_starting_faild
  {
    size_t item_size = sizeof(ros_message.dcdc_starting_faild);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dcdc_timeout_error
  {
    size_t item_size = sizeof(ros_message.dcdc_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecu_timeout_em_fault
  {
    size_t item_size = sizeof(ros_message.ecu_timeout_em_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dem_cbafl_not_receive
  {
    size_t item_size = sizeof(ros_message.dem_cbafl_not_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_gear_low_oil_temp_warning
  {
    size_t item_size = sizeof(ros_message.ice_gear_low_oil_temp_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_engine_off_rejected
  {
    size_t item_size = sizeof(ros_message.ice_engine_off_rejected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dem_pdu12_v_not_receive
  {
    size_t item_size = sizeof(ros_message.dem_pdu12_v_not_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_starting_fueling_failed
  {
    size_t item_size = sizeof(ros_message.ice_starting_fueling_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_starting_oil_heater_failed
  {
    size_t item_size = sizeof(ros_message.ice_starting_oil_heater_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_starting_starting_failed
  {
    size_t item_size = sizeof(ros_message.ice_starting_starting_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_aps_warning
  {
    size_t item_size = sizeof(ros_message.ice_aps_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_counter_error
  {
    size_t item_size = sizeof(ros_message.hl_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_timeout_error
  {
    size_t item_size = sizeof(ros_message.hl_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_counter_error
  {
    size_t item_size = sizeof(ros_message.ice_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_timeout_error
  {
    size_t item_size = sizeof(ros_message.ice_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dem_cbafr_not_receive
  {
    size_t item_size = sizeof(ros_message.dem_cbafr_not_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_oil_temp_under_min_start_limit
  {
    size_t item_size = sizeof(ros_message.ice_oil_temp_under_min_start_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdu12_counter_error
  {
    size_t item_size = sizeof(ros_message.pdu12_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdu12_timeout_error
  {
    size_t item_size = sizeof(ros_message.pdu12_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdu48_counter_error
  {
    size_t item_size = sizeof(ros_message.pdu48_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdu48_timeout_error
  {
    size_t item_size = sizeof(ros_message.pdu48_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dem_cbarl_not_receive
  {
    size_t item_size = sizeof(ros_message.dem_cbarl_not_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_counter_error
  {
    size_t item_size = sizeof(ros_message.psa_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_derating
  {
    size_t item_size = sizeof(ros_message.psa_derating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_error
  {
    size_t item_size = sizeof(ros_message.psa_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_timeout_error
  {
    size_t item_size = sizeof(ros_message.psa_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dem_cbarr_not_receive
  {
    size_t item_size = sizeof(ros_message.dem_cbarr_not_receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: em_stop_conditions_active
  {
    size_t item_size = sizeof(ros_message.em_stop_conditions_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ml_stop_conditions_active
  {
    size_t item_size = sizeof(ros_message.ml_stop_conditions_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dcdc4812_under_min_start_limit
  {
    size_t item_size = sizeof(ros_message.dcdc4812_under_min_start_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_override_wrong_config
  {
    size_t item_size = sizeof(ros_message.ice_override_wrong_config);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bsu_wrong_init_config
  {
    size_t item_size = sizeof(ros_message.bsu_wrong_init_config);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_boost_warning
  {
    size_t item_size = sizeof(ros_message.ice_boost_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_coolant_pressure_warning
  {
    size_t item_size = sizeof(ros_message.ice_coolant_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_coolant_temperature_warning
  {
    size_t item_size = sizeof(ros_message.ice_coolant_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_fuel_pressure_warning
  {
    size_t item_size = sizeof(ros_message.ice_fuel_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_gear_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message.ice_gear_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_oil_pressure_warning
  {
    size_t item_size = sizeof(ros_message.ice_oil_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message.ice_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdu12_active_anti_fire
  {
    size_t item_size = sizeof(ros_message.pdu12_active_anti_fire);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_sensor_failure_warning
  {
    size_t item_size = sizeof(ros_message.ice_sensor_failure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_target_gear_not_reached_warning
  {
    size_t item_size = sizeof(ros_message.ice_target_gear_not_reached_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_fuel_volume_warning
  {
    size_t item_size = sizeof(ros_message.ice_fuel_volume_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_counter_error
  {
    size_t item_size = sizeof(ros_message.rm_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_timeout_error
  {
    size_t item_size = sizeof(ros_message.rm_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
max_serialized_size_DiagnosticWord01Updated(
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

  // Member: bms_starting_faild
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fl_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fl_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fr_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fr_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fr_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_fr_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rl_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rl_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rr_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rr_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rr_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_rr_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dcdc_starting_faild
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dcdc_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ecu_timeout_em_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dem_cbafl_not_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_gear_low_oil_temp_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_engine_off_rejected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dem_pdu12_v_not_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_starting_fueling_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_starting_oil_heater_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_starting_starting_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_aps_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dem_cbafr_not_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_oil_temp_under_min_start_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdu12_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdu12_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdu48_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdu48_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dem_cbarl_not_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_derating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dem_cbarr_not_receive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: em_stop_conditions_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ml_stop_conditions_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dcdc4812_under_min_start_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_override_wrong_config
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bsu_wrong_init_config
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_boost_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_coolant_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_coolant_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_fuel_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_gear_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_oil_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdu12_active_anti_fire
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_sensor_failure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_target_gear_not_reached_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_fuel_volume_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_timeout_error
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
    using DataType = sd_can_msgs::msg::DiagnosticWord01Updated;
    is_plain =
      (
      offsetof(DataType, rm_timeout_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DiagnosticWord01Updated__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::DiagnosticWord01Updated *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticWord01Updated__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_can_msgs::msg::DiagnosticWord01Updated *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticWord01Updated__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::DiagnosticWord01Updated *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticWord01Updated__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DiagnosticWord01Updated(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DiagnosticWord01Updated__callbacks = {
  "sd_can_msgs::msg",
  "DiagnosticWord01Updated",
  _DiagnosticWord01Updated__cdr_serialize,
  _DiagnosticWord01Updated__cdr_deserialize,
  _DiagnosticWord01Updated__get_serialized_size,
  _DiagnosticWord01Updated__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticWord01Updated__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DiagnosticWord01Updated__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sd_can_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_can_msgs::msg::DiagnosticWord01Updated>()
{
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticWord01Updated__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_can_msgs, msg, DiagnosticWord01Updated)() {
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticWord01Updated__handle;
}

#ifdef __cplusplus
}
#endif
