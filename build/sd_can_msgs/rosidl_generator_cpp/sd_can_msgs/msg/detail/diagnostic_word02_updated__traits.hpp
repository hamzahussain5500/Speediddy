// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/diagnostic_word02_updated__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticWord02Updated & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rc_force_race_mode
  {
    out << "rc_force_race_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_force_race_mode, out);
    out << ", ";
  }

  // member: rc_beacon_time_out
  {
    out << "rc_beacon_time_out: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_beacon_time_out, out);
    out << ", ";
  }

  // member: display_timeout_error
  {
    out << "display_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.display_timeout_error, out);
    out << ", ";
  }

  // member: rm_red_flag
  {
    out << "rm_red_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_red_flag, out);
    out << ", ";
  }

  // member: rm_safe_stop
  {
    out << "rm_safe_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_safe_stop, out);
    out << ", ";
  }

  // member: display_counter_error
  {
    out << "display_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.display_counter_error, out);
    out << ", ";
  }

  // member: cba_em_brake_sat_not_received
  {
    out << "cba_em_brake_sat_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_em_brake_sat_not_received, out);
    out << ", ";
  }

  // member: cba_sat_values_not_received
  {
    out << "cba_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_sat_values_not_received, out);
    out << ", ";
  }

  // member: ice_oil_temp_start_limit_not_rec
  {
    out << "ice_oil_temp_start_limit_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_start_limit_not_rec, out);
    out << ", ";
  }

  // member: ml_stop_brake_sat_not_received
  {
    out << "ml_stop_brake_sat_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ml_stop_brake_sat_not_received, out);
    out << ", ";
  }

  // member: psa_sat_values_not_received
  {
    out << "psa_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_sat_values_not_received, out);
    out << ", ";
  }

  // member: limp_sat_values_not_received
  {
    out << "limp_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.limp_sat_values_not_received, out);
    out << ", ";
  }

  // member: fan_car_speed_max_value_not_rec
  {
    out << "fan_car_speed_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_car_speed_max_value_not_rec, out);
    out << ", ";
  }

  // member: fan_car_speed_min_value_not_rec
  {
    out << "fan_car_speed_min_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_car_speed_min_value_not_rec, out);
    out << ", ";
  }

  // member: fan_water_temp_max_value_not_rec
  {
    out << "fan_water_temp_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_water_temp_max_value_not_rec, out);
    out << ", ";
  }

  // member: fan_water_temp_min_value_not_rec
  {
    out << "fan_water_temp_min_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_water_temp_min_value_not_rec, out);
    out << ", ";
  }

  // member: heater_oil_temp_max_value_not_rec
  {
    out << "heater_oil_temp_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.heater_oil_temp_max_value_not_rec, out);
    out << ", ";
  }

  // member: ice_fuel_pres_start_limit_not_rec
  {
    out << "ice_fuel_pres_start_limit_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_pres_start_limit_not_rec, out);
    out << ", ";
  }

  // member: ice_oil_temp_by_pass_not_received
  {
    out << "ice_oil_temp_by_pass_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_by_pass_not_received, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticWord02Updated & msg,
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

  // member: rc_force_race_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_force_race_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_force_race_mode, out);
    out << "\n";
  }

  // member: rc_beacon_time_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_beacon_time_out: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_beacon_time_out, out);
    out << "\n";
  }

  // member: display_timeout_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display_timeout_error: ";
    rosidl_generator_traits::value_to_yaml(msg.display_timeout_error, out);
    out << "\n";
  }

  // member: rm_red_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rm_red_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_red_flag, out);
    out << "\n";
  }

  // member: rm_safe_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rm_safe_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_safe_stop, out);
    out << "\n";
  }

  // member: display_counter_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display_counter_error: ";
    rosidl_generator_traits::value_to_yaml(msg.display_counter_error, out);
    out << "\n";
  }

  // member: cba_em_brake_sat_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_em_brake_sat_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_em_brake_sat_not_received, out);
    out << "\n";
  }

  // member: cba_sat_values_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_sat_values_not_received, out);
    out << "\n";
  }

  // member: ice_oil_temp_start_limit_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_oil_temp_start_limit_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_start_limit_not_rec, out);
    out << "\n";
  }

  // member: ml_stop_brake_sat_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ml_stop_brake_sat_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ml_stop_brake_sat_not_received, out);
    out << "\n";
  }

  // member: psa_sat_values_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_sat_values_not_received, out);
    out << "\n";
  }

  // member: limp_sat_values_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limp_sat_values_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.limp_sat_values_not_received, out);
    out << "\n";
  }

  // member: fan_car_speed_max_value_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_car_speed_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_car_speed_max_value_not_rec, out);
    out << "\n";
  }

  // member: fan_car_speed_min_value_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_car_speed_min_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_car_speed_min_value_not_rec, out);
    out << "\n";
  }

  // member: fan_water_temp_max_value_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_water_temp_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_water_temp_max_value_not_rec, out);
    out << "\n";
  }

  // member: fan_water_temp_min_value_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_water_temp_min_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_water_temp_min_value_not_rec, out);
    out << "\n";
  }

  // member: heater_oil_temp_max_value_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heater_oil_temp_max_value_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.heater_oil_temp_max_value_not_rec, out);
    out << "\n";
  }

  // member: ice_fuel_pres_start_limit_not_rec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_fuel_pres_start_limit_not_rec: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_fuel_pres_start_limit_not_rec, out);
    out << "\n";
  }

  // member: ice_oil_temp_by_pass_not_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_oil_temp_by_pass_not_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_oil_temp_by_pass_not_received, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticWord02Updated & msg, bool use_flow_style = false)
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

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::DiagnosticWord02Updated & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::DiagnosticWord02Updated & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::DiagnosticWord02Updated>()
{
  return "sd_can_msgs::msg::DiagnosticWord02Updated";
}

template<>
inline const char * name<sd_can_msgs::msg::DiagnosticWord02Updated>()
{
  return "sd_can_msgs/msg/DiagnosticWord02Updated";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::DiagnosticWord02Updated>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::DiagnosticWord02Updated>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::DiagnosticWord02Updated>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_UPDATED__TRAITS_HPP_
