// Write a C program that converts a number ranging from 1 to 50 to Roman equivalent.

#include <stdio.h>
#include <string.h>

// Function to convert a decimal number (1 to 50) to its Roman numeral equivalent
void decimalToRoman(int num, char roman[]) {
    // Define Roman symbols and their corresponding values
    char *romanSymbols[] = {"L", "XL", "X", "IX", "V", "IV", "I"};
    int decimalValues[] = {50, 40, 10, 9, 5, 4, 1};
    
    int i = 0;
    roman[0] = '\0';  // Initialize the Roman numeral string

    // Build the Roman numeral representation by matching with symbols
    while (num > 0) {
        while (num >= decimalValues[i]) {
            strcat(roman, romanSymbols[i]);  // Append symbol to the Roman string
            num -= decimalValues[i];  // Decrease the number by the value of the Roman symbol
        }
        i++;
    }
}

int main() {
    int number;
    char roman[20];

    // Input: Ask the user to enter a number between 1 and 50
    printf("Enter a number (1 to 50): ");
    scanf("%d", &number);

    // Check if the number is in the valid range
    if (number < 1 || number > 50) {
        printf("Invalid input! Please enter a number between 1 and 50.\n");
        return 1;
    }

    // Convert the number to its Roman numeral equivalent
    decimalToRoman(number, roman);

    // Output: Display the Roman numeral
    printf("The Roman equivalent of %d is: %s\n", number, roman);

    return 0;
}
