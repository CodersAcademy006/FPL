/* Write a C program that uses functions to perform the following operations:
d. To insert a sub-string into a given main string from a given position.
e. To delete n Characters from a given position in a given string. */

#include <stdio.h>
#include <string.h>

// Function prototypes
void insertSubstring(char mainStr[], char subStr[], int position);
void deleteCharacters(char mainStr[], int position, int n);

int main() {
    char mainStr[100], subStr[50];
    int position, n, choice;

    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Insert a sub-string\n");
        printf("2. Delete n characters\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insertion of sub-string
                printf("Enter the main string: ");
                getchar();  // To consume newline character left by scanf
                fgets(mainStr, sizeof(mainStr), stdin);
                mainStr[strcspn(mainStr, "\n")] = 0;  // Remove newline

                printf("Enter the sub-string to insert: ");
                fgets(subStr, sizeof(subStr), stdin);
                subStr[strcspn(subStr, "\n")] = 0;  // Remove newline

                printf("Enter the position to insert the sub-string: ");
                scanf("%d", &position);

                insertSubstring(mainStr, subStr, position);
                printf("Resulting string after insertion: %s\n", mainStr);
                break;

            case 2:
                // Deletion of n characters
                printf("Enter the main string: ");
                getchar();  // To consume newline character left by scanf
                fgets(mainStr, sizeof(mainStr), stdin);
                mainStr[strcspn(mainStr, "\n")] = 0;  // Remove newline

                printf("Enter the position to start deletion: ");
                scanf("%d", &position);
                printf("Enter the number of characters to delete: ");
                scanf("%d", &n);

                deleteCharacters(mainStr, position, n);
                printf("Resulting string after deletion: %s\n", mainStr);
                break;

            case 3:
                // Exit the program
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}

// Function to insert a sub-string into a given main string from a specified position
void insertSubstring(char mainStr[], char subStr[], int position) {
    char temp[100];  // Temporary array to hold the resulting string
    int i, j = 0;

    if (position > strlen(mainStr) || position < 0) {
        printf("Invalid position! Insertion failed.\n");
        return;
    }

    // Copy characters from mainStr up to position into temp
    for (i = 0; i < position; i++) {
        temp[j++] = mainStr[i];
    }

    // Copy the subStr into temp
    for (i = 0; subStr[i] != '\0'; i++) {
        temp[j++] = subStr[i];
    }

    // Copy the remaining characters of mainStr into temp
    for (i = position; mainStr[i] != '\0'; i++) {
        temp[j++] = mainStr[i];
    }

    temp[j] = '\0';  // Null-terminate the resulting string

    strcpy(mainStr, temp);  // Copy the resulting string back to mainStr
}

// Function to delete n characters from a given position in a given string
void deleteCharacters(char mainStr[], int position, int n) {
    int length = strlen(mainStr);

    if (position >= length || position < 0 || (position + n) > length) {
        printf("Invalid position or number of characters to delete! Deletion failed.\n");
        return;
    }

    // Shift characters to the left to delete n characters
    for (int i = position; i + n < length; i++) {
        mainStr[i] = mainStr[i + n];
    }

    mainStr[length - n] = '\0';  // Null-terminate the resulting string
}
