#include <python.h>

PyMODINIT_FUNC PyInit_easystats(void) {
    return PyModule_Create(&easystatsmodule);
};

