#include <stdio.h>
#include <string.h>

// Function to find a substring in a string
int findSubstring(const char str[], const char sub[]) {
    char *pos = strstr(str, sub);
    if (pos) {
        printf("Substring '%s' found at position %ld.\n", sub, pos - str);
        return 1; // Substring found
    } else {
        printf("Substring '%s' not found.\n", sub);
        return 0; // Substring not found
    }
}

int main() {
    char text[] = "Programming is fun with C!";
    char sub[] = "fun";
    findSubstring(text, sub);
    return 0;
}