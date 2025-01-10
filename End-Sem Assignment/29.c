#include <stdio.h>
#include <string.h>

void createFile() {
    char filename[100], text[200];
    FILE *file;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("Enter text (type END to stop):\n");
    getchar(); // Consume newline
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strncmp(text, "END", 3) == 0)
            break;
        fputs(text, file);
    }

    fclose(file);
    printf("File created successfully.\n");
}

void readFile() {
    char filename[100], text[200];
    FILE *file;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("File contents:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);
}

void appendToFile() {
    char filename[100], text[200];
    FILE *file;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter text to append (type END to stop):\n");
    getchar(); // Consume newline
    while (1) {
        fgets(text, sizeof(text), stdin);
        if (strncmp(text, "END", 3) == 0)
            break;
        fputs(text, file);
    }

    fclose(file);
    printf("Text appended successfully.\n");
}

int main() {
    int choice;

    printf("Choose operation:\n1. Create File\n2. Read File\n3. Append to File\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            createFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            appendToFile();
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
