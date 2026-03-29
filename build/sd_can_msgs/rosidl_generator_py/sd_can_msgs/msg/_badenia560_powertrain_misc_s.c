// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
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
#include "sd_can_msgs/msg/detail/badenia560_powertrain_misc__struct.h"
#include "sd_can_msgs/msg/detail/badenia560_powertrain_misc__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__badenia560_powertrain_misc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("sd_can_msgs.msg._badenia560_powertrain_misc.Badenia560PowertrainMisc", full_classname_dest, 68) == 0);
  }
  sd_can_msgs__msg__Badenia560PowertrainMisc * ros_message = _ros_message;
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
  {  // b12_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "b12_soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b12_soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b48_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "b48_soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b48_soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b12_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "b12_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b12_temp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b48_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "b48_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b48_temp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // throttle_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_speed_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_used_kg
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_used_kg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_used_kg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__badenia560_powertrain_misc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Badenia560PowertrainMisc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._badenia560_powertrain_misc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Badenia560PowertrainMisc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__Badenia560PowertrainMisc * ros_message = (sd_can_msgs__msg__Badenia560PowertrainMisc *)raw_ros_message;
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
  {  // b12_soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b12_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b12_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b48_soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b48_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b48_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b12_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b12_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b12_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b48_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b48_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b48_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_used_kg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_used_kg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_used_kg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
