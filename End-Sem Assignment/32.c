#include <stdio.h>
#include <math.h>

int main() {
    double number, base, exponent;

    // Square Root Calculation
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &number);
    printf("Square root of %.2lf is %.2lf\n", number, sqrt(number));

    // Power Calculation
    printf("Enter base and exponent for power calculation (base exponent): ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, pow(base, exponent));

    return 0;
}
