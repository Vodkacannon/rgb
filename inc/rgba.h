#include <stdint.h>

//This struct is maximally, memory-efficient; be careful of overflow.
struct rgba {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

//This struct is for going out of bounds.
struct rgba_int {
    int r;
    int g;
    int b;
    int a;
};