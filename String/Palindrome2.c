// Write a C program to determine if the given string is a palindrome or not (Spelled same in both directions with or without a meaning like madam, civic, noon, abcba, etc.)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a given string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from the start and end of the string
    while (start < end) {
        // Skip non-alphanumeric characters from start
        while (start < end && !isalnum(str[start])) {
            start++;
        }

        // Skip non-alphanumeric characters from end
        while (start < end && !isalnum(str[end])) {
            end--;
        }

        // Compare characters ignoring case
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;  // Not a palindrome
        }

        // Move towards the middle
        start++;
        end--;
    }
    return 1;  // The string is a palindrome
}

int main() {
    char str[100];

    // Input: Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove trailing newline character

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
