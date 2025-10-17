// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from zed_msgs:msg/SvoStatus.idl
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
#include "zed_msgs/msg/detail/svo_status__struct.h"
#include "zed_msgs/msg/detail/svo_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool zed_msgs__msg__svo_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("zed_msgs.msg._svo_status.SvoStatus", full_classname_dest, 34) == 0);
  }
  zed_msgs__msg__SvoStatus * ros_message = _ros_message;
  {  // file_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "file_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->file_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frame_ts
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_ts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_ts = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_frames
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_frames");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_frames = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // loop_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loop_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // loop_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loop_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // real_time_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "real_time_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->real_time_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * zed_msgs__msg__svo_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SvoStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("zed_msgs.msg._svo_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SvoStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  zed_msgs__msg__SvoStatus * ros_message = (zed_msgs__msg__SvoStatus *)raw_ros_message;
  {  // file_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->file_name.data,
      strlen(ros_message->file_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "file_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_ts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->frame_ts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_ts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_frames
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_frames);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_frames", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loop_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->loop_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // real_time_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->real_time_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "real_time_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
