// Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
