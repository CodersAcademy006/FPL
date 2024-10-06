// Write a C program to count the lines, words and characters in a given text.

#include <stdio.h>

int main() {
    char ch;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;

    printf("Enter text (Press Ctrl+D to end):\n");

    while ((ch = getchar()) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n')
        lines++;

    printf("\nLines: %d\nWords: %d\nCharacters: %d\n", lines, words, characters);
    return 0;
}
