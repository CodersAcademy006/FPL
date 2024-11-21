#include <stdio.h>
#include <string.h>

// Function to replace a word in a string
void replaceWord(char str[], const char oldWord[], const char newWord[]) {
    char result[1000];
    char *pos;
    int index = 0;
    int oldWordLength = strlen(oldWord);

    while ((pos = strstr(str, oldWord)) != NULL) {
        strncpy(result + index, str, pos - str);  // Copy the part before oldWord
        index += pos - str;
        strcpy(result + index, newWord);  // Add newWord
        index += strlen(newWord);
        str = pos + oldWordLength;
    }
    strcpy(result + index, str);  // Copy the remaining part
    printf("Updated String: %s\n", result);
}

int main() {
    char text[] = "This is an incorrect statement.";
    replaceWord(text, "incorrect", "correct");
    return 0;
}