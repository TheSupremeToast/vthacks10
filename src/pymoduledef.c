#include <python.h>

static struct PyModuleDef easystatsmodule = {
    PyModuleDef_HEAD_INIT,
    "easystats",
    "C library for doing stats stuff",
    -1,
    StatsMethods
};

