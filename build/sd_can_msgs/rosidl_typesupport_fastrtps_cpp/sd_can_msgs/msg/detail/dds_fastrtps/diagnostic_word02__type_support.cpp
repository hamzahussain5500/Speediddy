// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/diagnostic_word02__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_can_msgs/msg/detail/diagnostic_word02__struct.hpp"

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
  const sd_can_msgs::msg::DiagnosticWord02 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: rc_force_race_mode
  cdr << ros_message.rc_force_race_mode;
  // Member: rc_beacon_time_out
  cdr << ros_message.rc_beacon_time_out;
  // Member: display_timeout_error
  cdr << ros_message.display_timeout_error;
  // Member: rm_red_flag
  cdr << ros_message.rm_red_flag;
  // Member: rm_safe_stop
  cdr << ros_message.rm_safe_stop;
  // Member: display_counter_error
  cdr << ros_message.display_counter_error;
  // Member: cba_em_brake_sat_not_received
  cdr << ros_message.cba_em_brake_sat_not_received;
  // Member: cba_sat_values_not_received
  cdr << ros_message.cba_sat_values_not_received;
  // Member: ice_oil_temp_start_limit_not_rec
  cdr << ros_message.ice_oil_temp_start_limit_not_rec;
  // Member: ml_stop_brake_sat_not_received
  cdr << ros_message.ml_stop_brake_sat_not_received;
  // Member: psa_sat_values_not_received
  cdr << ros_message.psa_sat_values_not_received;
  // Member: limp_sat_values_not_received
  cdr << ros_message.limp_sat_values_not_received;
  // Member: fan_car_speed_max_value_not_rec
  cdr << ros_message.fan_car_speed_max_value_not_rec;
  // Member: fan_car_speed_min_value_not_rec
  cdr << ros_message.fan_car_speed_min_value_not_rec;
  // Member: fan_water_temp_max_value_not_rec
  cdr << ros_message.fan_water_temp_max_value_not_rec;
  // Member: fan_water_temp_min_value_not_rec
  cdr << ros_message.fan_water_temp_min_value_not_rec;
  // Member: heater_oil_temp_max_value_not_rec
  cdr << ros_message.heater_oil_temp_max_value_not_rec;
  // Member: ice_fuel_pres_start_limit_not_rec
  cdr << ros_message.ice_fuel_pres_start_limit_not_rec;
  // Member: ice_oil_temp_by_pass_not_received
  cdr << ros_message.ice_oil_temp_by_pass_not_received;
  // Member: psa_sat_rates_def_val
  cdr << ros_message.psa_sat_rates_def_val;
  // Member: bms12_soc_under_level1
  cdr << ros_message.bms12_soc_under_level1;
  // Member: bms12_soc_under_level2
  cdr << ros_message.bms12_soc_under_level2;
  // Member: bms12_temp_over_level1
  cdr << ros_message.bms12_temp_over_level1;
  // Member: bms12_temp_over_level2
  cdr << ros_message.bms12_temp_over_level2;
  // Member: bms48_soc_under_level1
  cdr << ros_message.bms48_soc_under_level1;
  // Member: bms48_soc_under_level2
  cdr << ros_message.bms48_soc_under_level2;
  // Member: bms48_temp_over_level1
  cdr << ros_message.bms48_temp_over_level1;
  // Member: bms48_temp_over_level2
  cdr << ros_message.bms48_temp_over_level2;
  // Member: badenia_counter_error
  cdr << ros_message.badenia_counter_error;
  // Member: badenia_timeout_error
  cdr << ros_message.badenia_timeout_error;
  // Member: rm_em_flag
  cdr << ros_message.rm_em_flag;
  // Member: ml_stop_brake_bias_def_val
  cdr << ros_message.ml_stop_brake_bias_def_val;
  // Member: limp_ice_sat_values_def_val
  cdr << ros_message.limp_ice_sat_values_def_val;
  // Member: cba_sat_rates_def_val
  cdr << ros_message.cba_sat_rates_def_val;
  // Member: limp_cba_sat_values_def_val
  cdr << ros_message.limp_cba_sat_values_def_val;
  // Member: p2p_max_num_activation_def_val
  cdr << ros_message.p2p_max_num_activation_def_val;
  // Member: p2p_cooldown_duration_def_val
  cdr << ros_message.p2p_cooldown_duration_def_val;
  // Member: p2p_active_duration_def_val
  cdr << ros_message.p2p_active_duration_def_val;
  // Member: rc_delta_timeout_lim_def_val
  cdr << ros_message.rc_delta_timeout_lim_def_val;
  // Member: hl_mlsupervisor_request
  cdr << ros_message.hl_mlsupervisor_request;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_can_msgs::msg::DiagnosticWord02 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: rc_force_race_mode
  cdr >> ros_message.rc_force_race_mode;

  // Member: rc_beacon_time_out
  cdr >> ros_message.rc_beacon_time_out;

  // Member: display_timeout_error
  cdr >> ros_message.display_timeout_error;

  // Member: rm_red_flag
  cdr >> ros_message.rm_red_flag;

  // Member: rm_safe_stop
  cdr >> ros_message.rm_safe_stop;

  // Member: display_counter_error
  cdr >> ros_message.display_counter_error;

  // Member: cba_em_brake_sat_not_received
  cdr >> ros_message.cba_em_brake_sat_not_received;

  // Member: cba_sat_values_not_received
  cdr >> ros_message.cba_sat_values_not_received;

  // Member: ice_oil_temp_start_limit_not_rec
  cdr >> ros_message.ice_oil_temp_start_limit_not_rec;

  // Member: ml_stop_brake_sat_not_received
  cdr >> ros_message.ml_stop_brake_sat_not_received;

  // Member: psa_sat_values_not_received
  cdr >> ros_message.psa_sat_values_not_received;

  // Member: limp_sat_values_not_received
  cdr >> ros_message.limp_sat_values_not_received;

  // Member: fan_car_speed_max_value_not_rec
  cdr >> ros_message.fan_car_speed_max_value_not_rec;

  // Member: fan_car_speed_min_value_not_rec
  cdr >> ros_message.fan_car_speed_min_value_not_rec;

  // Member: fan_water_temp_max_value_not_rec
  cdr >> ros_message.fan_water_temp_max_value_not_rec;

  // Member: fan_water_temp_min_value_not_rec
  cdr >> ros_message.fan_water_temp_min_value_not_rec;

  // Member: heater_oil_temp_max_value_not_rec
  cdr >> ros_message.heater_oil_temp_max_value_not_rec;

  // Member: ice_fuel_pres_start_limit_not_rec
  cdr >> ros_message.ice_fuel_pres_start_limit_not_rec;

  // Member: ice_oil_temp_by_pass_not_received
  cdr >> ros_message.ice_oil_temp_by_pass_not_received;

  // Member: psa_sat_rates_def_val
  cdr >> ros_message.psa_sat_rates_def_val;

  // Member: bms12_soc_under_level1
  cdr >> ros_message.bms12_soc_under_level1;

  // Member: bms12_soc_under_level2
  cdr >> ros_message.bms12_soc_under_level2;

  // Member: bms12_temp_over_level1
  cdr >> ros_message.bms12_temp_over_level1;

  // Member: bms12_temp_over_level2
  cdr >> ros_message.bms12_temp_over_level2;

  // Member: bms48_soc_under_level1
  cdr >> ros_message.bms48_soc_under_level1;

  // Member: bms48_soc_under_level2
  cdr >> ros_message.bms48_soc_under_level2;

  // Member: bms48_temp_over_level1
  cdr >> ros_message.bms48_temp_over_level1;

  // Member: bms48_temp_over_level2
  cdr >> ros_message.bms48_temp_over_level2;

  // Member: badenia_counter_error
  cdr >> ros_message.badenia_counter_error;

  // Member: badenia_timeout_error
  cdr >> ros_message.badenia_timeout_error;

  // Member: rm_em_flag
  cdr >> ros_message.rm_em_flag;

  // Member: ml_stop_brake_bias_def_val
  cdr >> ros_message.ml_stop_brake_bias_def_val;

  // Member: limp_ice_sat_values_def_val
  cdr >> ros_message.limp_ice_sat_values_def_val;

  // Member: cba_sat_rates_def_val
  cdr >> ros_message.cba_sat_rates_def_val;

  // Member: limp_cba_sat_values_def_val
  cdr >> ros_message.limp_cba_sat_values_def_val;

  // Member: p2p_max_num_activation_def_val
  cdr >> ros_message.p2p_max_num_activation_def_val;

  // Member: p2p_cooldown_duration_def_val
  cdr >> ros_message.p2p_cooldown_duration_def_val;

  // Member: p2p_active_duration_def_val
  cdr >> ros_message.p2p_active_duration_def_val;

  // Member: rc_delta_timeout_lim_def_val
  cdr >> ros_message.rc_delta_timeout_lim_def_val;

  // Member: hl_mlsupervisor_request
  cdr >> ros_message.hl_mlsupervisor_request;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
get_serialized_size(
  const sd_can_msgs::msg::DiagnosticWord02 & ros_message,
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
  // Member: rc_force_race_mode
  {
    size_t item_size = sizeof(ros_message.rc_force_race_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_beacon_time_out
  {
    size_t item_size = sizeof(ros_message.rc_beacon_time_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: display_timeout_error
  {
    size_t item_size = sizeof(ros_message.display_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_red_flag
  {
    size_t item_size = sizeof(ros_message.rm_red_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_safe_stop
  {
    size_t item_size = sizeof(ros_message.rm_safe_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: display_counter_error
  {
    size_t item_size = sizeof(ros_message.display_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_em_brake_sat_not_received
  {
    size_t item_size = sizeof(ros_message.cba_em_brake_sat_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message.cba_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_oil_temp_start_limit_not_rec
  {
    size_t item_size = sizeof(ros_message.ice_oil_temp_start_limit_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ml_stop_brake_sat_not_received
  {
    size_t item_size = sizeof(ros_message.ml_stop_brake_sat_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message.psa_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limp_sat_values_not_received
  {
    size_t item_size = sizeof(ros_message.limp_sat_values_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan_car_speed_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message.fan_car_speed_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan_car_speed_min_value_not_rec
  {
    size_t item_size = sizeof(ros_message.fan_car_speed_min_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan_water_temp_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message.fan_water_temp_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan_water_temp_min_value_not_rec
  {
    size_t item_size = sizeof(ros_message.fan_water_temp_min_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heater_oil_temp_max_value_not_rec
  {
    size_t item_size = sizeof(ros_message.heater_oil_temp_max_value_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_fuel_pres_start_limit_not_rec
  {
    size_t item_size = sizeof(ros_message.ice_fuel_pres_start_limit_not_rec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_oil_temp_by_pass_not_received
  {
    size_t item_size = sizeof(ros_message.ice_oil_temp_by_pass_not_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psa_sat_rates_def_val
  {
    size_t item_size = sizeof(ros_message.psa_sat_rates_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms12_soc_under_level1
  {
    size_t item_size = sizeof(ros_message.bms12_soc_under_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms12_soc_under_level2
  {
    size_t item_size = sizeof(ros_message.bms12_soc_under_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms12_temp_over_level1
  {
    size_t item_size = sizeof(ros_message.bms12_temp_over_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms12_temp_over_level2
  {
    size_t item_size = sizeof(ros_message.bms12_temp_over_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms48_soc_under_level1
  {
    size_t item_size = sizeof(ros_message.bms48_soc_under_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms48_soc_under_level2
  {
    size_t item_size = sizeof(ros_message.bms48_soc_under_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms48_temp_over_level1
  {
    size_t item_size = sizeof(ros_message.bms48_temp_over_level1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms48_temp_over_level2
  {
    size_t item_size = sizeof(ros_message.bms48_temp_over_level2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: badenia_counter_error
  {
    size_t item_size = sizeof(ros_message.badenia_counter_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: badenia_timeout_error
  {
    size_t item_size = sizeof(ros_message.badenia_timeout_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_em_flag
  {
    size_t item_size = sizeof(ros_message.rm_em_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ml_stop_brake_bias_def_val
  {
    size_t item_size = sizeof(ros_message.ml_stop_brake_bias_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limp_ice_sat_values_def_val
  {
    size_t item_size = sizeof(ros_message.limp_ice_sat_values_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cba_sat_rates_def_val
  {
    size_t item_size = sizeof(ros_message.cba_sat_rates_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limp_cba_sat_values_def_val
  {
    size_t item_size = sizeof(ros_message.limp_cba_sat_values_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p2p_max_num_activation_def_val
  {
    size_t item_size = sizeof(ros_message.p2p_max_num_activation_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p2p_cooldown_duration_def_val
  {
    size_t item_size = sizeof(ros_message.p2p_cooldown_duration_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p2p_active_duration_def_val
  {
    size_t item_size = sizeof(ros_message.p2p_active_duration_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_delta_timeout_lim_def_val
  {
    size_t item_size = sizeof(ros_message.rc_delta_timeout_lim_def_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_mlsupervisor_request
  {
    size_t item_size = sizeof(ros_message.hl_mlsupervisor_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
max_serialized_size_DiagnosticWord02(
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

  // Member: rc_force_race_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_beacon_time_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: display_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_red_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_safe_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: display_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_em_brake_sat_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_oil_temp_start_limit_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ml_stop_brake_sat_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: limp_sat_values_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan_car_speed_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan_car_speed_min_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan_water_temp_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan_water_temp_min_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heater_oil_temp_max_value_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_fuel_pres_start_limit_not_rec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_oil_temp_by_pass_not_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: psa_sat_rates_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms12_soc_under_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms12_soc_under_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms12_temp_over_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms12_temp_over_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms48_soc_under_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms48_soc_under_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms48_temp_over_level1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms48_temp_over_level2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: badenia_counter_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: badenia_timeout_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_em_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ml_stop_brake_bias_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: limp_ice_sat_values_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cba_sat_rates_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: limp_cba_sat_values_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: p2p_max_num_activation_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: p2p_cooldown_duration_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: p2p_active_duration_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_delta_timeout_lim_def_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_mlsupervisor_request
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
    using DataType = sd_can_msgs::msg::DiagnosticWord02;
    is_plain =
      (
      offsetof(DataType, hl_mlsupervisor_request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DiagnosticWord02__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::DiagnosticWord02 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticWord02__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_can_msgs::msg::DiagnosticWord02 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticWord02__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::DiagnosticWord02 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticWord02__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DiagnosticWord02(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DiagnosticWord02__callbacks = {
  "sd_can_msgs::msg",
  "DiagnosticWord02",
  _DiagnosticWord02__cdr_serialize,
  _DiagnosticWord02__cdr_deserialize,
  _DiagnosticWord02__get_serialized_size,
  _DiagnosticWord02__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticWord02__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DiagnosticWord02__callbacks,
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
get_message_type_support_handle<sd_can_msgs::msg::DiagnosticWord02>()
{
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticWord02__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_can_msgs, msg, DiagnosticWord02)() {
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticWord02__handle;
}

#ifdef __cplusplus
}
#endif
