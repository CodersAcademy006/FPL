#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed String: %s\n", str);
}

int main() {
    char text[] = "Hello, World!";
    reverseString(text);
    return 0;
}