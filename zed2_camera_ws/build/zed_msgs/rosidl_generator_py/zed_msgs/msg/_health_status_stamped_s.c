// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
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
#include "zed_msgs/msg/detail/health_status_stamped__struct.h"
#include "zed_msgs/msg/detail/health_status_stamped__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool zed_msgs__msg__health_status_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("zed_msgs.msg._health_status_stamped.HealthStatusStamped", full_classname_dest, 55) == 0);
  }
  zed_msgs__msg__HealthStatusStamped * ros_message = _ros_message;
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
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // camera_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->camera_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // low_image_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_image_quality");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_image_quality = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_lighting
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_lighting");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_lighting = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_depth_reliability
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_depth_reliability");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_depth_reliability = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_motion_sensors_reliability
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_motion_sensors_reliability");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_motion_sensors_reliability = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * zed_msgs__msg__health_status_stamped__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HealthStatusStamped */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("zed_msgs.msg._health_status_stamped");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HealthStatusStamped");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  zed_msgs__msg__HealthStatusStamped * ros_message = (zed_msgs__msg__HealthStatusStamped *)raw_ros_message;
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
  {  // serial_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serial_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->camera_name.data,
      strlen(ros_message->camera_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_image_quality
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_image_quality ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_image_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_lighting
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_lighting ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_lighting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_depth_reliability
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_depth_reliability ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_depth_reliability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_motion_sensors_reliability
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_motion_sensors_reliability ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_motion_sensors_reliability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
