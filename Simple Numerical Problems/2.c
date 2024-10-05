// Write the program for the simple, compound interest.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    float simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);

    // Compound Interest
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
