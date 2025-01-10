#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createAndWriteFile() {
    char filename[100], line[200];
    FILE *file;

    printf("Enter file name to create: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("Enter text (Enter a blank line to stop):\n");
    getchar(); // Consume leftover newline
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (strcmp(line, "\n") == 0)
            break;
        fputs(line, file);
    }

    fclose(file);
    printf("File created successfully.\n");
}

void readFile() {
    char filename[100], line[200];
    FILE *file;

    printf("Enter file name to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error reading file.\n");
        return;
    }

    printf("File contents:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

void appendToFile() {
    char filename[100], line[200];
    FILE *file;

    printf("Enter file name to append: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter text to append (Enter a blank line to stop):\n");
    getchar(); // Consume leftover newline
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (strcmp(line, "\n") == 0)
            break;
        fputs(line, file);
    }

    fclose(file);
    printf("Text appended successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\nFile Operations Menu:\n");
        printf("1. Create and Write to File\n");
        printf("2. Read File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            createAndWriteFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            appendToFile();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
