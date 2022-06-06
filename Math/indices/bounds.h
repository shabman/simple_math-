#ifndef PRACTICAL_MATH_INDICES_BOUNDS_H
#define PRACTICAL_MATH_INDICES_BOUNDS_H

#include <iostream>
#include <array>

class Bounds {
public:
    static const int BOUND_SIZE = 3;
    static int target;

    [[nodiscard]] static std::array<double, BOUND_SIZE> getBounds() noexcept {
        std::array<double, BOUND_SIZE> b {
            static_cast<double>(target - 1),
            static_cast<double>(target),
            static_cast<double>(target + 1)
        };
        return b;
    }
};

#endif //PRACTICAL_MATH_INDICES_BOUNDS_H
