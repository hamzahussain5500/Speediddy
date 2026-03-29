// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/Badenia560Pitot0.idl
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
#include "sd_can_msgs/msg/detail/badenia560_pitot0__struct.h"
#include "sd_can_msgs/msg/detail/badenia560_pitot0__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__badenia560_pitot0__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("sd_can_msgs.msg._badenia560_pitot0.Badenia560Pitot0", full_classname_dest, 51) == 0);
  }
  sd_can_msgs__msg__Badenia560Pitot0 * ros_message = _ros_message;
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
  {  // pitot_front_press
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitot_front_press");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitot_front_press = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitot_yaw_press
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitot_yaw_press");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitot_yaw_press = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitot_yaw_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitot_yaw_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitot_yaw_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitot_absolute_press
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitot_absolute_press");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitot_absolute_press = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__badenia560_pitot0__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Badenia560Pitot0 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._badenia560_pitot0");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Badenia560Pitot0");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__Badenia560Pitot0 * ros_message = (sd_can_msgs__msg__Badenia560Pitot0 *)raw_ros_message;
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
  {  // pitot_front_press
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitot_front_press);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitot_front_press", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitot_yaw_press
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitot_yaw_press);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitot_yaw_press", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitot_yaw_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitot_yaw_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitot_yaw_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitot_absolute_press
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitot_absolute_press);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitot_absolute_press", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
