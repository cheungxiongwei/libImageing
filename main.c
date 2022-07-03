#include <stdio.h>
#include "libImaging/Imaging.h"

extern Imaging pillow_image_create_for_data(char *data, char* mode,int w, int h, int stride, int bottom_up);
extern void pillow_image_free(Imaging im);
extern int    pillow_image_width  (Imaging im);
extern int    pillow_image_height (Imaging im);
extern char*  pillow_image_mode   (Imaging im);
extern char** pillow_image_rows   (Imaging im);
extern Imaging pillow_resample(Imaging im, int w, int h, int cx, int cy, int cw, int ch, int filter);


struct ImageRGBX {
    int width;
    int height;
    int bytesPerLine;
    uint8_t *data;
};

void create(int width,int height,struct ImageRGBX *obj){
    obj->width = width;
    obj->height = height;
    obj->bytesPerLine = width * 4/*bytes*/;
    obj->data = calloc(height, obj->bytesPerLine);
}

void destroy(struct ImageRGBX *obj){
    free(obj->data);
}

int main() {

    // intput data
    struct ImageRGBX input;
    create(1920,1080,&input);

    char mode[IMAGING_MODE_LENGTH] = "RGB";
    Imaging handle = pillow_image_create_for_data(input.data,mode,input.width,input.height,input.bytesPerLine,0);

    // output resize data
    struct ImageRGBX output;
    create(640,480,&output);

    // resize
    Imaging out = pillow_resample(handle,output.width/*resize_width*/,output.height/*resize_height*/,0,0,input.width,input.height,IMAGING_TRANSFORM_BILINEAR);

    // copy
    for(int y = 0;y < out->ysize;y++){
        memcpy(output.data + y * output.bytesPerLine,out->image[y],output.bytesPerLine);
    }

    pillow_image_free(handle);
    pillow_image_free(out);

    destroy(&input);
    destroy(&output);
    return 0;
}