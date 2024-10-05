// To find x^n

#include <stdio.h>

// Recursive GCD function
int recursiveGCD(int a, int b) {
    if (b == 0) return a;
    return recursiveGCD(b, a % b);
}

// Non-recursive GCD function
int nonRecursiveGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &a, &b);

    printf("Recursive GCD of %d and %d: %d\n", a, b, recursiveGCD(a, b));
    printf("Non-Recursive GCD of %d and %d: %d\n", a, b, nonRecursiveGCD(a, b));

    return 0;
}
