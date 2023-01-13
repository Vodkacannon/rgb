#include <stdio.h>
#include "inc/rgba.h"

void rgba_set(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b) {
    my_rgba->r = r;
    my_rgba->g = g;
    my_rgba->b = b;
}

void rgba_clamp(int* r, int* g, int* b, int* a) {
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
    else if(a < 0) {
        a = 0;
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
    else if(a > 255) {
        a = 255;
    }
}

void rgba_add(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    int rgba_add_r = my_rgba->r + r;
    int rgba_add_g = my_rgba->g + g;
    int rgba_add_b = my_rgba->b + b;
    int rgba_add_a = my_rgba->a + a;

    rgba_clamp(rgba_add_r, rgba_add_g, rgba_add_b, rgba_add_a);

    my_rgba->r = rgba_add_r;
    my_rgba->g = rgba_add_g;
    my_rgba->b = rgba_add_b;
    my_rgba->a = rgba_add_a;
}

void rgba_sub(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    int rgba_add_r = my_rgba->r - r;
    int rgba_add_g = my_rgba->g - g;
    int rgba_add_b = my_rgba->b - b;
    int rgba_add_a = my_rgba->a - a;

    rgba_clamp(rgba_add_r, rgba_add_g, rgba_add_b, rgba_add_a);

    my_rgba->r = rgba_add_r;
    my_rgba->g = rgba_add_g;
    my_rgba->b = rgba_add_b;
    my_rgba->a = rgba_add_a;
}

void rgb_mul(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    int rgba_add_r = my_rgba->r * r;
    int rgba_add_g = my_rgba->g * g;
    int rgba_add_b = my_rgba->b * b;
    int rgba_add_a = my_rgba->a * a;

    rgba_clamp(rgba_add_r, rgba_add_g, rgba_add_b, rgba_add_a);

    my_rgba->r = rgba_add_r;
    my_rgba->g = rgba_add_g;
    my_rgba->b = rgba_add_b;
    my_rgba->a = rgba_add_a;
}

void rgb_div(struct rgba* my_rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
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

    my_rgba->r /= r;
    my_rgba->g /= g;
    my_rgba->b /= b;
    my_rgba->a /= a;
}

int rgba_to_int(struct rgba* my_color) {
    return my_color->r * my_color->g * my_color->b * my_color->a;
}