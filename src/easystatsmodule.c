#include <Python.h>
#include "libstats.h"

static PyMethodDef StatsMethods[] = {
    {"mean", mean, METH_VARARGS, "Takes the mean of an array"}
};

static struct PyModuleDef easystatsmodule = {
    PyModuleDef_HEAD_INIT,
    "easystats",
    "C library for doing stats stuff",
    -1,
    StatsMethods
};

PyMODINIT_FUNC PyInit_easystats(void) {
    return PyModule_Create(&easystatsmodule);
}

