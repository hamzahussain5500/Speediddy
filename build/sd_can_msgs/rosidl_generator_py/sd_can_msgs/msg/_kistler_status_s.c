// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
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
#include "sd_can_msgs/msg/detail/kistler_status__struct.h"
#include "sd_can_msgs/msg/detail/kistler_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__kistler_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("sd_can_msgs.msg._kistler_status.KistlerStatus", full_classname_dest, 45) == 0);
  }
  sd_can_msgs__msg__KistlerStatus * ros_message = _ros_message;
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
  {  // sensor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lamp_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "lamp_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lamp_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // filter_setting
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_setting");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_setting = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stst
    PyObject * field = PyObject_GetAttrString(_pymsg, "stst");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stst = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_off_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_off_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_off_on = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lamp_current_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "lamp_current_control");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lamp_current_control = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_ok");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature_ok = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // head_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle_switched_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_switched_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle_switched_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ang_vel_correction
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_correction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ang_vel_correction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_motion");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction_motion = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction_mounting
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_mounting");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction_mounting = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction_head_is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_head_is_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction_head_is_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_head");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction_head = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__kistler_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KistlerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._kistler_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KistlerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__KistlerStatus * ros_message = (sd_can_msgs__msg__KistlerStatus *)raw_ros_message;
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
  {  // sensor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lamp_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lamp_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lamp_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_setting
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_setting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_setting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stst
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stst);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stst", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_off_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_off_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_off_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lamp_current_control
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lamp_current_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lamp_current_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_ok
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temperature_ok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->head_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_switched_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->angle_switched_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_switched_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_correction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ang_vel_correction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_correction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_motion
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction_motion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_mounting
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction_mounting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_mounting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_head_is_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction_head_is_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_head_is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_head
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction_head);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
