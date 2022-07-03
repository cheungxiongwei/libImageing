//
// Created by cheungxiongwei on 2022/7/2.
//

#include "Python.h"
//#include "Imaging.h"

void
ImagingSectionEnter(ImagingSectionCookie *cookie) {};

void
ImagingSectionLeave(ImagingSectionCookie *cookie) {};

void *
ImagingError_MemoryError(void) {
    return 0;
};

void *
ImagingError_ModeError(void) {
    return 0;
};

void *
ImagingError_ValueError(const char *message) {
    return 0;
};

void *
ImagingError_Mismatch(void) {
    return 0;
};

void
ImagingError_Clear(void) {
};