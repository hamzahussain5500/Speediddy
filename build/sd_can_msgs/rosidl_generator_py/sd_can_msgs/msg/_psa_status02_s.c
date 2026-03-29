// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/PSAStatus02.idl
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
#include "sd_can_msgs/msg/detail/psa_status02__struct.h"
#include "sd_can_msgs/msg/detail/psa_status02__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__psa_status02__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("sd_can_msgs.msg._psa_status02.PSAStatus02", full_classname_dest, 41) == 0);
  }
  sd_can_msgs__msg__PSAStatus02 * ros_message = _ros_message;
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
  {  // psa_target_psa_control_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_target_psa_control_ack");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psa_target_psa_control_ack = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psa_actual_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_actual_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psa_actual_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psa_actual_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_actual_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psa_actual_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psa_actual_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_actual_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psa_actual_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__psa_status02__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PSAStatus02 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._psa_status02");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PSAStatus02");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__PSAStatus02 * ros_message = (sd_can_msgs__msg__PSAStatus02 *)raw_ros_message;
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
  {  // psa_target_psa_control_ack
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psa_target_psa_control_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_target_psa_control_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_actual_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psa_actual_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_actual_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_actual_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psa_actual_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_actual_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_actual_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psa_actual_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_actual_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
