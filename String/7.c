#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words in a string
int countWords(const char str[]) {
    int count = 0;
    int inWord = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || str[i] == '\n') {
            inWord = 0;  // We hit a space, so we're not in a word anymore
        } else if (inWord == 0) {
            inWord = 1;  // We are starting a new word
            count++;
        }
    }
    
    return count;
}

int main() {
    char text[] = "C is a powerful language for systems programming!";
    printf("Word count: %d\n", countWords(text));
    return 0;
}