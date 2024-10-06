// Write a C program to convert a Roman numeral ranging from I to L to its decimal equivalent.

#include <stdio.h>
#include <string.h>

// Function to convert a single Roman numeral character to its decimal value
int romanCharToValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        default: return -1;  // Invalid Roman numeral character
    }
}

// Function to convert a Roman numeral (I to L) to its decimal equivalent
int romanToDecimal(char roman[]) {
    int length = strlen(roman);
    int total = 0, value = 0, prevValue = 0;

    for (int i = length - 1; i >= 0; i--) {
        value = romanCharToValue(roman[i]);

        if (value == -1) {
            printf("Invalid Roman numeral!\n");
            return -1;
        }

        // If the current value is less than the previous value, subtract it
        if (value < prevValue)
            total -= value;
        else
            total += value;

        // Update the previous value
        prevValue = value;
    }

    return total;
}

int main() {
    char roman[20];
    int decimal;

    // Input a Roman numeral
    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", roman);

    // Convert the Roman numeral to its decimal equivalent
    decimal = romanToDecimal(roman);

    // If the Roman numeral is valid, display its decimal equivalent
    if (decimal != -1)
        printf("The decimal equivalent of %s is: %d\n", roman, decimal);

    return 0;
}
