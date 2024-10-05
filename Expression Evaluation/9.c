/* Write a C program to read in two numbers, x and n, and then compute the sum of this geometric progression:
1+x+x^2+x^3+............................................. +x^n. For example: if n is 3 and x is 5, then the program
computes 1+5+25+125. */

#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    long long sum = 0, term = 1;

    // Read input values for x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute the geometric sum
    for (int i = 0; i <= n; i++) {
        sum += term;   // Add the current term to the sum
        term *= x;     // Compute the next power of x
    }

    // Output the result
    printf("The sum of the geometric progression is: %lld\n", sum);

    return 0;
}
