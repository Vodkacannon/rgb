#include "inc/rgb.h"

void rgb_set(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r = r;
    my_rgb->g = g;
    my_rgb->b = b;
}

void rgb_clamp(int* r, int* g, int* b) {
    //Clamp lower.
    if (r < 0) {
        r = 0;
    } 
    else if(g < 0) {
        g = 0;
    }
    else if(b < 0) {
        b = 0;
    }

    //Clamp upper.
    if (r > 255) {
        r = 255;
    } 
    else if(g > 255) {
        g = 255;
    }
    else if(b > 255) {
        b = 255;
    }
}

void rgb_add(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r += r;
    my_rgb->g += g;
    my_rgb->b += b;
}

void rgb_sub(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r -= r;
    my_rgb->g -= g;
    my_rgb->b -= b;
}

void rgb_mul(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r *= r;
    my_rgb->g *= g;
    my_rgb->b *= b;
}

void rgb_div(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r /= r;
    my_rgb->g /= g;
    my_rgb->b /= b;
}