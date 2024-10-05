// Write a simple program that converts one given data type to another using auto conversion and casting. Take the values from standard input.

#include <stdio.h>

int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Reading values from the user
    printf("Enter an integer value: ");
    scanf("%d", &intVar);
    printf("Enter a float value: ");
    scanf("%f", &floatVar);
    printf("Enter a double value: ");
    scanf("%lf", &doubleVar);
    printf("Enter a character value: ");
    scanf(" %c", &charVar);

    // Implicit Type Conversion
    printf("\nImplicit Type Conversion:\n");
    double autoConvert = intVar + floatVar; // int is automatically converted to float
    printf("int + float = %lf (auto converted to double)\n", autoConvert);

    // Explicit Type Casting
    printf("\nExplicit Type Casting:\n");
    int castToInt = (int) doubleVar; // double explicitly cast to int
    printf("double cast to int: %d\n", castToInt);

    float castToFloat = (float) charVar; // char explicitly cast to float
    printf("char cast to float: %f\n", castToFloat);

    return 0;
}
