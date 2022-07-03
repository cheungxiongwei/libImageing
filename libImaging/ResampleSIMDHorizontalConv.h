#ifndef LIBIMAGEING_RESAMPLESIMDHORIZONTALCONV_H
#define LIBIMAGEING_RESAMPLESIMDHORIZONTALCONV_H
#include "Imaging.h"

void
ImagingResampleHorizontalConvolution8u4x(
        UINT32 *lineOut0, UINT32 *lineOut1, UINT32 *lineOut2, UINT32 *lineOut3,
        UINT32 *lineIn0, UINT32 *lineIn1, UINT32 *lineIn2, UINT32 *lineIn3,
        int xsize, int *xbounds, INT16 *kk, int kmax, int coefs_precision);

void
ImagingResampleHorizontalConvolution8u(UINT32 *lineOut, UINT32 *lineIn,
                                       int xsize, int *xbounds, INT16 *kk, int kmax, int coefs_precision);
#endif //LIBIMAGEING_RESAMPLESIMDHORIZONTALCONV_H
