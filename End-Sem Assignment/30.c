#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    char grade;
};

void writeBinaryFile() {
    struct Student s;
    FILE *file = fopen("students.dat", "ab");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Grade: ");
    scanf(" %c", &s.grade);

    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);

    printf("Record added successfully.\n");
}

void readBinaryFile() {
    struct Student s;
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Student Records:\n");
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("ID: %d, Name: %s, Grade: %c\n", s.id, s.name, s.grade);
    }

    fclose(file);
}

int main() {
    int choice;

    printf("Choose operation:\n1. Add Record\n2. Read Records\n");
    scanf("%d", &choice);

    if (choice == 1) {
        writeBinaryFile();
    } else if (choice == 2) {
        readBinaryFile();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
