#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i;

    // Input string
    printf("Enter a string or number: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    // Check if palindrome
    if (strcmp(str, reversed) == 0)
        printf("The input is a palindrome.\n");
    else
        printf("The input is not a palindrome.\n");

    return 0;
}
