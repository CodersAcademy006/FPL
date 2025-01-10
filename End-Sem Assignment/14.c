#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
