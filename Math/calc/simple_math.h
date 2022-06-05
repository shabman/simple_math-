//
// Created by Mustafa Malik on 05/06/2022.
//

#ifndef PRACTICAL_MATH_CALC_SIMPLE_MATH_H
#define PRACTICAL_MATH_CALC_SIMPLE_MATH_H

#include "sm_def.h"

int strict_add(int a, int b) {
    return a + b;
}

int strict_sub(int a, int b) {
    return a - b;
}

int strict_mul(int a, int b) {
    return a * b;
}

int strict_div(int a, int b) {
    return a / b;
}

int strict_pow(int num, int pow) {
    int f_res = 1;
    while (pow != 0) {
        if ((pow & 1) == 1)  {
            f_res *= num;
        }
        num *= num;
        pow >>= 1;
    }
    return f_res;
}

int strict_ceil(double v) {
    if (v == 0)
        return 0;
    if (v == 1)
        return 1;
    if (v == -1)
        return  1 / (int) v;

    if (v >= 0.5) {
        return (int) (v + (double) 0.5);
    }

    return (int) v;
}

int strict_flr(double v) {
    if (v == 0)
        return 0;
    if (v == 1)
        return 1;
    if (v == -1)
        return  1 / (int) v;

    if (v < 0.5) {
        return (int) (v - (double) 0.5);
    }

    return (int) v;
}

int strict_abs(int v) {
    // Totally didn't copy <cmath.h>.........
    int sg = v >> (sizeof(int) * 8 - 1);
    return (v ^ sg) - sg;
}

#endif //PRACTICAL_MATH_CALC_SIMPLE_MATH_H
