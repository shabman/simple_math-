#ifndef PRACTICAL_MATH_MATRIX_HPP
#define PRACTICAL_MATH_MATRIX_HPP

struct Matrix {

    int a, b, c, d;

    [[nodiscard]] int get_determinant() const {
        return (a * d) - (b * c);
    }
};

#endif //PRACTICAL_MATH_MATRIX_HPP
