#include <stdio.h>

void addMatrices(int rows, int cols, int a[10][10], int b[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int cols2, int a[10][10], int b[10][10], int result[10][10]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2, choice;
    int a[10][10], b[10][10], result[10][10];

    // Input dimensions for first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Input matrices
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Menu for matrix operations
    printf("Choose operation:\n1. Add Matrices\n2. Multiply Matrices\n");
    scanf("%d", &choice);

    if (choice == 1) {
        if (rows1 == rows2 && cols1 == cols2) {
            addMatrices(rows1, cols1, a, b, result);
            printf("Result of Addition:\n");
            displayMatrix(rows1, cols1, result);
        } else {
            printf("Matrix addition not possible (dimension mismatch).\n");
        }
    } else if (choice == 2) {
        if (cols1 == rows2) {
            multiplyMatrices(rows1, cols1, cols2, a, b, result);
            printf("Result of Multiplication:\n");
            displayMatrix(rows1, cols2, result);
        } else {
            printf("Matrix multiplication not possible (dimension mismatch).\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
