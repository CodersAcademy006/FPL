// Write a C program that sorts a given array of names.

#include <stdio.h>
#include <string.h>

void sortNames(char names[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void printNames(char names[][20], int n) {
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
}

int main() {
    char names[5][20] = {"John", "Alex", "Chris", "Mike", "Bob"};
    int n = 5;
    sortNames(names, n);
    printf("Sorted names:\n");
    printNames(names, n);
    return 0;
}
