#ifndef RGB_H
#define RGB_H

#include <stdint.h>

#define true 1
#define false 0

//This struct is maximally, memory-efficient; be careful of overflow.
struct rgb {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

void rgb_set(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b);
void rgb_clamp(int* r, int* g, int* b);
void rgb_add(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b);
void rgb_sub(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b);
void rgb_mul(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b);
void rgb_div(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b);

int rgb_to_int(struct rgb* my_color);

struct rgb int_to_rgb(int color);

char* rgb_to_hex(struct rgb* my_color);

#endif