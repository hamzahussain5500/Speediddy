// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
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
#include "sd_can_msgs/msg/detail/hlpc_info1__struct.h"
#include "sd_can_msgs/msg/detail/hlpc_info1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__hlpc_info1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("sd_can_msgs.msg._hlpc_info1.HLPCInfo1", full_classname_dest, 37) == 0);
  }
  sd_can_msgs__msg__HLPCInfo1 * ros_message = _ros_message;
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
  {  // hlpc_network_ping
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_network_ping");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_network_ping = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_lidar_status_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_lidar_status_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_lidar_status_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_lidar_status_front
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_lidar_status_front");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_lidar_status_front = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_lidar_status_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_lidar_status_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_lidar_status_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_radar_status_front
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_radar_status_front");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_radar_status_front = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_radar_status_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_radar_status_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_radar_status_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_radar_status_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_radar_status_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_radar_status_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_radar_status_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_radar_status_rear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_radar_status_rear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_vector_nav_fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_vector_nav_fix");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_vector_nav_fix = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hlpc_alive_c4
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlpc_alive_c4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hlpc_alive_c4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__hlpc_info1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HLPCInfo1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._hlpc_info1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HLPCInfo1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__HLPCInfo1 * ros_message = (sd_can_msgs__msg__HLPCInfo1 *)raw_ros_message;
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
  {  // hlpc_network_ping
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_network_ping);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_network_ping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_lidar_status_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_lidar_status_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_lidar_status_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_lidar_status_front
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_lidar_status_front);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_lidar_status_front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_lidar_status_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_lidar_status_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_lidar_status_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_radar_status_front
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_radar_status_front);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_radar_status_front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_radar_status_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_radar_status_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_radar_status_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_radar_status_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_radar_status_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_radar_status_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_radar_status_rear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_radar_status_rear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_radar_status_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_vector_nav_fix
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_vector_nav_fix);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_vector_nav_fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlpc_alive_c4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hlpc_alive_c4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlpc_alive_c4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
