// Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    if (originalNum == reversedNum)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
