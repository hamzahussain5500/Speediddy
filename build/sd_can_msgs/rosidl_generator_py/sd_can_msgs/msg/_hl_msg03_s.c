// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/HLMsg03.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sd_can_msgs/msg/detail/hl_msg03__struct.h"
#include "sd_can_msgs/msg/detail/hl_msg03__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__hl_msg03__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sd_can_msgs.msg._hl_msg03.HLMsg03", full_classname_dest, 33) == 0);
  }
  sd_can_msgs__msg__HLMsg03 * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hl_alive_03
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_alive_03");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_alive_03 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_dbw_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_dbw_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_dbw_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_push_to_pass_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_push_to_pass_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_push_to_pass_on = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu12_activate_gnss
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu12_activate_gnss");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu12_activate_gnss = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu12_activate_oss
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu12_activate_oss");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu12_activate_oss = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_ice_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_ice_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_ice_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_ml_supervisor_activation
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_ml_supervisor_activation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_ml_supervisor_activation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu12_activate_lidar
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu12_activate_lidar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu12_activate_lidar = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu12_activate_radar
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu12_activate_radar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu12_activate_radar = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_start_fuel_level_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_start_fuel_level_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_start_fuel_level_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hl_crancking_by_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_crancking_by_pass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_crancking_by_pass = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_switch_off_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_switch_off_ok");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_switch_off_ok = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // header_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "header_legacy");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header_legacy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_gnss_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_gnss_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_gnss_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_oss_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_oss_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_oss_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_lidar_r_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_lidar_r_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_lidar_r_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_lidar_cn_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_lidar_cn_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_lidar_cn_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_lidar_l_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_lidar_l_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_lidar_l_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_radar_rear_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_radar_rear_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_radar_rear_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_radar_cn_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_radar_cn_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_radar_cn_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_radar_r_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_radar_r_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_radar_r_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_pdu1_activate_radar_l_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pdu1_activate_radar_l_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pdu1_activate_radar_l_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__hl_msg03__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HLMsg03 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._hl_msg03");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HLMsg03");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__HLMsg03 * ros_message = (sd_can_msgs__msg__HLMsg03 *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_alive_03
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_alive_03);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_alive_03", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_dbw_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_dbw_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_dbw_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_push_to_pass_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_push_to_pass_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_push_to_pass_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu12_activate_gnss
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu12_activate_gnss);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu12_activate_gnss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu12_activate_oss
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu12_activate_oss);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu12_activate_oss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_ice_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_ice_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_ice_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_ml_supervisor_activation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_ml_supervisor_activation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_ml_supervisor_activation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu12_activate_lidar
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu12_activate_lidar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu12_activate_lidar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu12_activate_radar
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu12_activate_radar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu12_activate_radar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_start_fuel_level_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_start_fuel_level_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_start_fuel_level_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_crancking_by_pass
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_crancking_by_pass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_crancking_by_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_switch_off_ok
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_switch_off_ok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_switch_off_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // header_legacy
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header_legacy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_gnss_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_gnss_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_gnss_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_oss_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_oss_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_oss_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_lidar_r_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_lidar_r_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_lidar_r_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_lidar_cn_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_lidar_cn_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_lidar_cn_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_lidar_l_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_lidar_l_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_lidar_l_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_radar_rear_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_radar_rear_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_radar_rear_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_radar_cn_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_radar_cn_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_radar_cn_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_radar_r_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_radar_r_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_radar_r_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_pdu1_activate_radar_l_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_pdu1_activate_radar_l_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pdu1_activate_radar_l_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
