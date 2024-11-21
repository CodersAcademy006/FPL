#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(const char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    
    return 1; // It is a palindrome
}

int main() {
    char text[] = "Madam";
    if (isPalindrome(text)) {
        printf("'%s' is a palindrome.\n", text);
    } else {
        printf("'%s' is not a palindrome.\n", text);
    }
    return 0;
}