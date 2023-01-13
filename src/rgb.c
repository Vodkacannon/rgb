#include <stdio.h>
#include "inc/rgb.h"

void rgb_set(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    my_rgb->r = r;
    my_rgb->g = g;
    my_rgb->b = b;
}

void rgb_clamp(int* r, int* g, int* b) {
    //Clamp lower bound.
    if (r < 0) {
        r = 0;
    } 
    else if(g < 0) {
        g = 0;
    }
    else if(b < 0) {
        b = 0;
    }

    //Clamp upper bound.
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
    int rgb_add_r = my_rgb->r + r;
    int rgb_add_g = my_rgb->g + g;
    int rgb_add_b = my_rgb->b + b;

    rgb_clamp(rgb_add_r, rgb_add_g, rgb_add_b);

    my_rgb->r = rgb_add_r;
    my_rgb->g = rgb_add_g;
    my_rgb->b = rgb_add_b;
}

void rgb_sub(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    int rgb_add_r = my_rgb->r - r;
    int rgb_add_g = my_rgb->g - g;
    int rgb_add_b = my_rgb->b - b;

    rgb_clamp(rgb_add_r, rgb_add_g, rgb_add_b);

    my_rgb->r = rgb_add_r;
    my_rgb->g = rgb_add_g;
    my_rgb->b = rgb_add_b;
}

void rgb_mul(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    int rgb_add_r = my_rgb->r * r;
    int rgb_add_g = my_rgb->g * g;
    int rgb_add_b = my_rgb->b * b;

    rgb_clamp(rgb_add_r, rgb_add_g, rgb_add_b);

    my_rgb->r = rgb_add_r;
    my_rgb->g = rgb_add_g;
    my_rgb->b = rgb_add_b;
}

void rgb_div(struct rgb* my_rgb, uint8_t r, uint8_t g, uint8_t b) {
    //Do zero division checks.
    if (r == 0) {
        printf("Error: rgb_div(): Division by zero at red.\n");
        return;
    }
    if (g == 0) {
        printf("Error: rgb_div(): Division by zero at green.\n");
        return;
    }
    if (b == 0) {
        printf("Error: rgb_div(): Division by zero at blue.\n");
        return;
    }

    my_rgb->r /= r;
    my_rgb->g /= g;
    my_rgb->b /= b;
}

int rgb_to_int(struct rgb* my_color) {
    uint8_t rgb_temp_r = 0;
    uint8_t rgb_temp_g = 0;
    uint8_t rgb_temp_b = 0;
    
    if (r == 0) {
        rgb_temp_r = 1;
    }

    return my_color->r * my_color->g * my_color->g;
}