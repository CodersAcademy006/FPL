/* Write a C program that does the following:
It should first create a binary file and store 10 integers, where the file name and 10 values are given in the command line. (hint: convert the strings using atoi function)
Now the program asks for an index and a value from the user and the value at that index should be changed to the new value in the file. (hint: use fseek function) */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int values[10];

    // Check if there are enough command line arguments
    if (argc != 12) {  // 1 for filename and 11 for program name + 10 integer values
        printf("Usage: %s <filename> <10 integer values>\n", argv[0]);
        return 1;
    }

    // Retrieve the filename from the arguments
    char *filename = argv[1];

    // Convert the next 10 arguments to integers using `atoi` and store in `values`
    for (int i = 0; i < 10; i++) {
        values[i] = atoi(argv[i + 2]);  // Convert string to integer and store
    }

    // Open the file in binary write mode
    file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Could not create file %s\n", filename);
        return 1;
    }

    // Write the 10 integers to the binary file
    fwrite(values, sizeof(int), 10, file);
    fclose(file);

    printf("File %s created successfully with the given 10 integers.\n", filename);

    // Open the file again in binary read/write mode for modification
    file = fopen(filename, "rb+");
    if (file == NULL) {
        printf("Could not open file %s for modification.\n", filename);
        return 1;
    }

    int index, newValue;

    // Get the index and the new value from the user
    printf("Enter the index (0-9) to modify: ");
    scanf("%d", &index);

    // Check if the index is valid
    if (index < 0 || index >= 10) {
        printf("Invalid index. Index should be between 0 and 9.\n");
        fclose(file);
        return 1;
    }

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Use `fseek()` to move to the correct position in the file for the specified index
    fseek(file, index * sizeof(int), SEEK_SET);

    // Write the new value at the specified index
    fwrite(&newValue, sizeof(int), 1, file);
    printf("Value at index %d in the file %s has been updated to %d.\n", index, filename, newValue);

    // Close the file
    fclose(file);

    return 0;
}
