// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/SwVersions01.idl
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
#include "sd_can_msgs/msg/detail/sw_versions01__struct.h"
#include "sd_can_msgs/msg/detail/sw_versions01__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__sw_versions01__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("sd_can_msgs.msg._sw_versions01.SwVersions01", full_classname_dest, 43) == 0);
  }
  sd_can_msgs__msg__SwVersions01 * ros_message = _ros_message;
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
  {  // bsu_sw_minor_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_sw_minor_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_sw_minor_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_sw_major_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_sw_major_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_sw_major_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_sw_build_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_sw_build_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_sw_build_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_sw_minor_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_sw_minor_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_sw_minor_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_sw_major_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_sw_major_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_sw_major_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_sw_build_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_sw_build_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_sw_build_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu12_sw_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu12_sw_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu12_sw_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu48_sw_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu48_sw_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu48_sw_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu1_sw_version_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu1_sw_version_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu1_sw_version_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu2_sw_version_legacy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu2_sw_version_legacy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu2_sw_version_legacy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__sw_versions01__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SwVersions01 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._sw_versions01");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SwVersions01");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__SwVersions01 * ros_message = (sd_can_msgs__msg__SwVersions01 *)raw_ros_message;
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
  {  // bsu_sw_minor_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_sw_minor_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_sw_minor_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_sw_major_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_sw_major_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_sw_major_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_sw_build_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_sw_build_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_sw_build_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_sw_minor_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_sw_minor_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_sw_minor_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_sw_major_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_sw_major_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_sw_major_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_sw_build_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_sw_build_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_sw_build_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu12_sw_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu12_sw_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu12_sw_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu48_sw_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu48_sw_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu48_sw_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu1_sw_version_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu1_sw_version_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu1_sw_version_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu2_sw_version_legacy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu2_sw_version_legacy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu2_sw_version_legacy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
