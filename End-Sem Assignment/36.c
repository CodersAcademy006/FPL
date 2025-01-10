#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[][50] = {"Zara", "Mona", "Abby", "Jack"};
    int n = sizeof(names) / sizeof(names[0]);
    
    printf("Original Names: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    sortNames(names, n);

    printf("\nSorted Names: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
