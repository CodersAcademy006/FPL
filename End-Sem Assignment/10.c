#include <stdio.h>
#include <string.h>

void insertSubstring(char mainStr[], char subStr[], int position) {
    char result[200];
    strncpy(result, mainStr, position);
    result[position] = '\0';
    strcat(result, subStr);
    strcat(result, mainStr + position);
    printf("String after insertion: %s\n", result);
}

void deleteCharacters(char str[], int position, int count) {
    char result[200];
    strncpy(result, str, position);
    result[position] = '\0';
    strcat(result, str + position + count);
    printf("String after deletion: %s\n", result);
}

int main() {
    char mainStr[100], subStr[50];
    int position, count, choice;

    printf("Enter the main string: ");
    scanf("%s", mainStr);

    printf("Choose operation:\n1. Insert substring\n2. Delete characters\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the substring to insert: ");
        scanf("%s", subStr);
        printf("Enter the position: ");
        scanf("%d", &position);
        insertSubstring(mainStr, subStr, position);
    } else if (choice == 2) {
        printf("Enter the position: ");
        scanf("%d", &position);
        printf("Enter the number of characters to delete: ");
        scanf("%d", &count);
        deleteCharacters(mainStr, position, count);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
