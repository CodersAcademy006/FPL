// Write a C program that displays the position of a character ch in the string S or – 1 if S doesn‘t contain ch.

#include <stdio.h>
#include <string.h>

int main() {
    char S[100], ch;
    int i, position = -1;

    // Input the string and the character to search
    printf("Enter a string: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = 0;  // Remove trailing newline character

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Search for the character in the string
    for (i = 0; S[i] != '\0'; i++) {
        if (S[i] == ch) {
            position = i;
            break;
        }
    }

    // Display the position of the character or -1 if not found
    if (position != -1)
        printf("Character '%c' found at position: %d\n", ch, position);
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
