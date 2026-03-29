// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/HLMsg06.idl
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
#include "sd_can_msgs/msg/detail/hl_msg06__struct.h"
#include "sd_can_msgs/msg/detail/hl_msg06__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__hl_msg06__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sd_can_msgs.msg._hl_msg06.HLMsg06", full_classname_dest, 33) == 0);
  }
  sd_can_msgs__msg__HLMsg06 * ros_message = _ros_message;
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
  {  // hl_pc_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_pc_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_pc_temp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hl_cpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_cpu_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_cpu_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_gpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_gpu_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_gpu_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_gpu_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_gpu_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_gpu_temp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hl_perception_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_perception_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_perception_acc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_localization_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_localization_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_localization_acc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_watts_consumed
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_watts_consumed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_watts_consumed = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_aggressiveness
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_aggressiveness");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_aggressiveness = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__hl_msg06__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HLMsg06 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._hl_msg06");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HLMsg06");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__HLMsg06 * ros_message = (sd_can_msgs__msg__HLMsg06 *)raw_ros_message;
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
  {  // hl_pc_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hl_pc_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_pc_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_cpu_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_cpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_cpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_gpu_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_gpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_gpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_gpu_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hl_gpu_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_gpu_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_perception_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_perception_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_perception_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_localization_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_localization_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_localization_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_watts_consumed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_watts_consumed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_watts_consumed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_aggressiveness
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_aggressiveness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_aggressiveness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
