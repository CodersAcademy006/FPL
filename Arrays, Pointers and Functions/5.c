// To find the factorial of a given integer.

#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int nonRecursiveFactorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    printf("Recursive Factorial: %d\n", factorial(n));
    printf("Non-Recursive Factorial: %d\n", nonRecursiveFactorial(n));
    return 0;
}
