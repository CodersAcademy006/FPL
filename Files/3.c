/* Write a C program to count the number of times a character occurs in a text file. The file name and the character
are supplied as command line arguments */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;
    int count = 0;
    
    // Check if the correct number of command line arguments is given
    if (argc != 3) {
        printf("Usage: %s <filename> <character>\n", argv[0]);
        return 1;
    }

    // Open the file in read mode
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    // The character to count
    char targetChar = argv[2][0];  // Take the first character of the second argument

    // Read the file character by character and count occurrences
    while ((ch = fgetc(file)) != EOF) {
        if (ch == targetChar) {
            count++;
        }
    }

    // Close the file
    fclose(file);

    // Display the result
    printf("The character '%c' appears %d times in the file %s.\n", targetChar, count, argv[1]);

    return 0;
}
