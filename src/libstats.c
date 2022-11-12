#include <Python.h>
#include "libstats.h"

PyObject* mean(PyObject* self, PyObject* args) {

    double res = 0;
    PyObject* float_list;
    int len;
    if (!PyArg_ParseTuple(args, "O", &float_list)) {
        return NULL;
    }
    len = PyObject_Length(float_list);
    if (len < 0) {
        return NULL;
    }

    PyObject* item;
    for (int i = 0; i < len; i++) {
        item = PyList_GetItem(float_list, i);
        if (!PyFloat_Check(item) && !PyLong_Check(item)) {
            continue;
        }
        res += PyFloat_AsDouble(item); 
    }
    res /= len;
    return Py_BuildValue("d", res);
}

