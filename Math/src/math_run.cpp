#include <cstdio>
#include "../calc/simple_math.h"
#include "../manipulation/matrix.h"
#include "../indices/bounds.h"

int Bounds::target = 3;
std::array<double, Bounds::BOUND_SIZE> b = Bounds::getBounds();

int main() {
    printf("%d\n", strict_add(2, 2));
    printf("%d\n", strict_sub(10, 2));
    printf("%d\n", strict_mul(6, 9)); // nice
    printf("%d\n", strict_div(420, 69)); // double nice
    printf("%d\n", strict_pow(2, 3));
    printf("%d\n", strict_flr(4.3));
    printf("%d\n", strict_ceil(7.5));
    printf("%d\n", strict_abs(210310 + 1903391));
    // Manipulation
    printf("%s\n", "Manipulation");
    Matrix m {};
    m.a = 11;
    m.b = 3;
    m.c = 4;
    m.d = 9;
    printf("%d\n", m.get_determinant());
    // Indices
    printf("%s\n", "Indices");
    printf("%f\n", b[0]);
    printf("%f\n", b[1]);
    printf("%f\n", b[2]);
    return 0;
}
