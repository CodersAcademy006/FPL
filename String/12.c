#include <stdio.h>
#include <ctype.h>

// Function to convert string case
void convertCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    printf("Converted String: %s\n", str);
}

int main() {
    char text[] = "HeLLo WoRLd!";
    convertCase(text);
    return 0;
}