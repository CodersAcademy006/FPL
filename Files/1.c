// Write a C program to display the contents of a file to standard output device.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100], ch;

    // Prompt user to enter the filename
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;  // Exit if file not found
    }

    // Read and display file contents character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print each character to the standard output
    }

    // Close the file
    fclose(file);
    return 0;
}
