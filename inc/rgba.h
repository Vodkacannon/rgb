#ifndef RGBA_H
#define RGBA_H

#include <stdint.h>

//This struct is maximally, memory-efficient; be careful of overflow.
struct rgba {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

void rgba_set(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b);

void rgba_clamp(int* r, int* g, int* b, int* a);

void rgba_add(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

void rgba_sub(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

void rgba_mul(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

void rgba_div(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

int rgba_to_int(struct rgba* my_color);

struct rgba int_to_rgba(int color);

char* rgba_to_hex(struct rgba* my_color);

#endif