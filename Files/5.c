/* Write a C program to merge two files into a third file (i.e., the contents of the first file followed by those of the
second are put in the third file). */

#include <stdio.h>
#include <stdlib.h>

void mergeFiles(FILE *source, FILE *dest);

int main() {
    FILE *file1, *file2, *file3;
    char file1Name[100], file2Name[100], file3Name[100];

    // Get filenames from the user
    printf("Enter the name of the first file: ");
    scanf("%s", file1Name);

    printf("Enter the name of the second file: ");
    scanf("%s", file2Name);

    printf("Enter the name of the third file to save the merged contents: ");
    scanf("%s", file3Name);

    // Open the first file in read mode
    file1 = fopen(file1Name, "r");
    if (file1 == NULL) {
        printf("Could not open file %s for reading.\n", file1Name);
        return 1;
    }

    // Open the second file in read mode
    file2 = fopen(file2Name, "r");
    if (file2 == NULL) {
        printf("Could not open file %s for reading.\n", file2Name);
        fclose(file1);  // Close the first file if second cannot be opened
        return 1;
    }

    // Open the third file in write mode
    file3 = fopen(file3Name, "w");
    if (file3 == NULL) {
        printf("Could not open file %s for writing.\n", file3Name);
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy contents of the first file to the third file
    mergeFiles(file1, file3);

    // Copy contents of the second file to the third file
    mergeFiles(file2, file3);

    // Close all the opened files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("The files %s and %s have been merged into %s successfully.\n", file1Name, file2Name, file3Name);

    return 0;
}

// Function to copy contents from source file to destination file
void mergeFiles(FILE *source, FILE *dest) {
    char ch;

    // Read each character from source and write it to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
}
