// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/Badenia560Pitot.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/badenia560_pitot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Badenia560Pitot & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pitot_front_press
  {
    out << "pitot_front_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_front_press, out);
    out << ", ";
  }

  // member: pitot_yaw_press
  {
    out << "pitot_yaw_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_yaw_press, out);
    out << ", ";
  }

  // member: pitot_absolute_press
  {
    out << "pitot_absolute_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_absolute_press, out);
    out << ", ";
  }

  // member: pitot_air_temp
  {
    out << "pitot_air_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_air_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Badenia560Pitot & msg,
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

  // member: pitot_front_press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitot_front_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_front_press, out);
    out << "\n";
  }

  // member: pitot_yaw_press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitot_yaw_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_yaw_press, out);
    out << "\n";
  }

  // member: pitot_absolute_press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitot_absolute_press: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_absolute_press, out);
    out << "\n";
  }

  // member: pitot_air_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitot_air_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.pitot_air_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Badenia560Pitot & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::Badenia560Pitot & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::Badenia560Pitot & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::Badenia560Pitot>()
{
  return "sd_can_msgs::msg::Badenia560Pitot";
}

template<>
inline const char * name<sd_can_msgs::msg::Badenia560Pitot>()
{
  return "sd_can_msgs/msg/Badenia560Pitot";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::Badenia560Pitot>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::Badenia560Pitot>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::Badenia560Pitot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__TRAITS_HPP_
