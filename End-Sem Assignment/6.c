#include <stdio.h>

int main() {
    int num, sum = 0, original, reversed = 0, digit;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of digits and reversed number
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    if (original == reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
