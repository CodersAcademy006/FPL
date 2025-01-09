#include <stdio.h>

int main() {
    int rows, i, j, k, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // First Pyramid (1, 12, 123...)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("   "); // Spaces between pyramids
    }
    printf("\n");
    //Second Pyramid (stars)
     for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("   "); // Spaces between pyramids
    }
    printf("\n");
    // Second Pyramid (1, 23, 456...)
    num = 1;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        printf("   "); // Spaces between pyramids
    }
    printf("\n");
    // Third Pyramid (1, 22, 333...)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("   "); // Spaces between pyramids
    }
     printf("\n");
        //Fourth Pyramid (stars)
     for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("   "); // Spaces between pyramids
    }
    printf("\n");
    return 0;
