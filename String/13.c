#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants in a string
void countVowelsConsonants(const char str[]) {
    int vowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

int main() {
    char text[] = "Programming in C";
    countVowelsConsonants(text);
    return 0;
}