# Simple Math++
A simple math lib written in C++

Usage:

```cpp
#include <cstdio>
#include "../calc/simple_math.h"

int main() {
    printf("%d\n", strict_add(2, 2));
    printf("%d\n", strict_sub(10, 2));
    printf("%d\n", strict_mul(6, 9)); // nice
    printf("%d\n", strict_div(420, 69)); // double nice
    printf("%d\n", strict_pow(2, 3));
    printf("%d\n", strict_flr(4.3));
    printf("%d\n", strict_ceil(7.5));
    printf("%d\n", strict_abs(210310 + 1903391));
    return 0;
}
```

`Made by shabman`
