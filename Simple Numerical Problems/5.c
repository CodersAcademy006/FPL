// Write a program that shows the binary equivalent of a given positive number between 0 to 255
#include <stdio.h>

void printBinary(int number) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a positive number between 0 and 255: ");
    scanf("%d", &number);

    if (number < 0 || number > 255) {
        printf("Invalid input! Please enter a number between 0 and 255.\n");
    } else {
        printf("Binary equivalent: ");
        printBinary(number);
    }

    return 0;
}
