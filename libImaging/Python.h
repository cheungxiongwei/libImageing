//
// Created by cheungxiongwei on 2022/7/2.
//

#ifndef LIBIMAGEING_PYTHON_H
#define LIBIMAGEING_PYTHON_H


/* Resample.c forgot to include those. */
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <float.h>
#include <stdint.h>

typedef size_t Py_ssize_t;

typedef struct _PyObject {
    void* reserve;
} PyObject;

typedef void* ImagingSectionCookie;

#endif //LIBIMAGEING_PYTHON_H
