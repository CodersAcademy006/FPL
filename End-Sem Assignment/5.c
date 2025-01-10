#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    if (n < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
