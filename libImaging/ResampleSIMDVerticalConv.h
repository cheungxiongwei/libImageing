#ifndef LIBIMAGEING_RESAMPLESIMDVERTICALCONV_H
#define LIBIMAGEING_RESAMPLESIMDVERTICALCONV_H
#include "Imaging.h"

void
ImagingResampleVerticalConvolution8u(UINT32 *lineOut, Imaging imIn,
                                     int xmin, int xmax, INT16 *k, int coefs_precision);

#endif //LIBIMAGEING_RESAMPLESIMDVERTICALCONV_H
