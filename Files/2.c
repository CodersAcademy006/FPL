// Write a C program which copies one file to another, replacing all lowercase characters with their uppercase equivalents.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Get the source and destination file names from the user
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);  // Close source file before exiting
        return 1;
    }

    // Read from the source file and copy to destination file, converting to uppercase
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destFile);  // Convert to uppercase and write to destination
    }

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully with all lowercase characters converted to uppercase.\n");
    return 0;
}
