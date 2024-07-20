**Bitwise Operators**

Bitwise operators are used to manipulate individual bits within a binary number. They operate
directly on the binary representation of a number, making them useful for bit-level programming.

Here's an example:
```c
#include <stdio.h>

int main() {
    // Define a variable with the value 5 (binary: 101)
    int x = 5;

    // Use the bitwise AND operator (&) to set the third bit to 1
    int y = x & (1 << 2);

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
```

**Question:** What is the value of `y` after the bitwise AND operation?

**Answer:** The value of `y` will be 6 (binary: 110), because the third bit (2^1) has been set
to 1.

The bitwise operators are:

* `&`: Bitwise AND
* `|`: Bitwise OR
* `^`: Bitwise XOR (exclusive OR)
* `~`: Bitwise NOT (complement)

These operators can be used with integers, characters, and even pointers!