// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/DiagnosticWord02Updated.idl
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
#include "sd_can_msgs/msg/detail/diagnostic_word02_updated__struct.h"
#include "sd_can_msgs/msg/detail/diagnostic_word02_updated__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__diagnostic_word02_updated__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("sd_can_msgs.msg._diagnostic_word02_updated.DiagnosticWord02Updated", full_classname_dest, 66) == 0);
  }
  sd_can_msgs__msg__DiagnosticWord02Updated * ros_message = _ros_message;
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
  {  // rc_force_race_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_force_race_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_force_race_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rc_beacon_time_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_beacon_time_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_beacon_time_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // display_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "display_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->display_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rm_red_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "rm_red_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rm_red_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rm_safe_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "rm_safe_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rm_safe_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // display_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "display_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->display_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_em_brake_sat_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_em_brake_sat_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_em_brake_sat_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_sat_values_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_sat_values_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_sat_values_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_oil_temp_start_limit_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_oil_temp_start_limit_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_oil_temp_start_limit_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ml_stop_brake_sat_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "ml_stop_brake_sat_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ml_stop_brake_sat_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_sat_values_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_sat_values_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_sat_values_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // limp_sat_values_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "limp_sat_values_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->limp_sat_values_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan_car_speed_max_value_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_car_speed_max_value_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan_car_speed_max_value_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan_car_speed_min_value_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_car_speed_min_value_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan_car_speed_min_value_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan_water_temp_max_value_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_water_temp_max_value_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan_water_temp_max_value_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fan_water_temp_min_value_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_water_temp_min_value_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan_water_temp_min_value_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heater_oil_temp_max_value_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "heater_oil_temp_max_value_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heater_oil_temp_max_value_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_fuel_pres_start_limit_not_rec
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_fuel_pres_start_limit_not_rec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_fuel_pres_start_limit_not_rec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_oil_temp_by_pass_not_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_oil_temp_by_pass_not_received");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_oil_temp_by_pass_not_received = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__diagnostic_word02_updated__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticWord02Updated */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._diagnostic_word02_updated");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticWord02Updated");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__DiagnosticWord02Updated * ros_message = (sd_can_msgs__msg__DiagnosticWord02Updated *)raw_ros_message;
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
  {  // rc_force_race_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc_force_race_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_force_race_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_beacon_time_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc_beacon_time_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_beacon_time_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // display_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->display_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "display_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rm_red_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rm_red_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rm_red_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rm_safe_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rm_safe_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rm_safe_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // display_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->display_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "display_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_em_brake_sat_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_em_brake_sat_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_em_brake_sat_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_sat_values_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_sat_values_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_sat_values_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_oil_temp_start_limit_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_oil_temp_start_limit_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_oil_temp_start_limit_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ml_stop_brake_sat_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ml_stop_brake_sat_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ml_stop_brake_sat_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_sat_values_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_sat_values_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_sat_values_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limp_sat_values_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->limp_sat_values_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "limp_sat_values_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_car_speed_max_value_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan_car_speed_max_value_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_car_speed_max_value_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_car_speed_min_value_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan_car_speed_min_value_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_car_speed_min_value_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_water_temp_max_value_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan_water_temp_max_value_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_water_temp_max_value_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_water_temp_min_value_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fan_water_temp_min_value_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_water_temp_min_value_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heater_oil_temp_max_value_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heater_oil_temp_max_value_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heater_oil_temp_max_value_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_fuel_pres_start_limit_not_rec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_fuel_pres_start_limit_not_rec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_fuel_pres_start_limit_not_rec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_oil_temp_by_pass_not_received
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_oil_temp_by_pass_not_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_oil_temp_by_pass_not_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
