#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Initializing Strings
    char str1[] = "Hello";
    char str2[] = " World!";
    char str3[50];
    char str4[] = "Welcome to C programming!";
    char str5[50];
    
    // 1. Using strlen to find length of str1
    printf("Length of str1: %lu\n", strlen(str1));
    
    // 2. Using strcpy to copy str1 to str3
    strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);
    
    // 3. Using strcat to concatenate str1 and str2
    strcat(str1, str2);
    printf("After concatenation of str1 and str2: %s\n", str1);
    
    // 4. Using strcmp to compare str1 and str2
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }
    
    // 5. Using strncat to concatenate only the first 3 characters of str2 to str1
    strncat(str1, str2, 3);
    printf("After strncat (first 3 characters of str2): %s\n", str1);
    
    // 6. Using strchr to find the first occurrence of 'o' in str1
    char *ch = strchr(str1, 'o');
    if (ch != NULL) {
        printf("First occurrence of 'o' in str1: %ld\n", ch - str1);
    } else {
        printf("'o' not found in str1.\n");
    }
    
    // 7. Using strrchr to find the last occurrence of 'o' in str1
    ch = strrchr(str1, 'o');
    if (ch != NULL) {
        printf("Last occurrence of 'o' in str1: %ld\n", ch - str1);
    } else {
        printf("'o' not found in str1.\n");
    }
    
    // 8. Using strstr to find the first occurrence of "C" in str4
    char *substr = strstr(str4, "C");
    if (substr != NULL) {
        printf("Substring 'C' found in str4 at position: %ld\n", substr - str4);
    } else {
        printf("Substring 'C' not found in str4.\n");
    }
    
    // 9. Using strtok to tokenize str4 based on spaces
    printf("Tokenizing str4: ");
    char *token = strtok(str4, " ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
    
    // 10. Using toupper and tolower on characters
    char letter = 'a';
    printf("Uppercase of '%c': %c\n", letter, toupper(letter));
    letter = 'Z';
    printf("Lowercase of '%c': %c\n", letter, tolower(letter));
    
    // 11. Using isspace and isalnum to check characters
    char c = ' ';
    if (isspace(c)) {
        printf("'%c' is a space.\n", c);
    }
    
    c = '7';
    if (isalnum(c)) {
        printf("'%c' is alphanumeric.\n", c);
    }
    
    // 12. Using strlwr and strupr for case conversion (Not standard in all C compilers)
    strcpy(str5, str4);
    for (int i = 0; str5[i]; i++) {
        str5[i] = tolower(str5[i]); // Convert string to lowercase
    }
    printf("Converted to lowercase: %s\n", str5);
    
    // Convert to uppercase
    strcpy(str5, str4);
    for (int i = 0; str5[i]; i++) {
        str5[i] = toupper(str5[i]); // Convert string to uppercase
    }
    printf("Converted to uppercase: %s\n", str5);
    
    return 0;
}