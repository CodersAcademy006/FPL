// Write a C program to calculate the following, where x is a fractional value.

#include <stdio.h>
#include <math.h>
int main() {
    float x, result;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    // Calculate the value using the formula
    result = 1 - (x / 2) + (pow(x, 2) / 4) - (pow(x, 3) / 6);
    printf("The result of the expression 1 - x/2 + x^2/4 - x^3/6 is: %.2f\n", result);

    return 0;
}
