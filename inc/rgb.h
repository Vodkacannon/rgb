#include <stdint.h>

#define true 1
#define false 0

//This struct is maximally, memory-efficient; be careful of overflow.
struct rgb {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

//This struct is for going out of bounds.
struct rgb_int {
    int r;
    int g;
    int b;
};