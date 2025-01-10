#include <stdio.h>

// Define and undefine macros
#define PI 3.14159
#undef PI

// Conditional compilation
#define DEBUG

int main() {
#ifdef DEBUG
    printf("Debug mode is ON\n");
#else
    printf("Debug mode is OFF\n");
#endif

#ifndef PI
    printf("PI is not defined\n");
#else
    printf("Value of PI: %f\n", PI);
#endif

    return 0;
}
