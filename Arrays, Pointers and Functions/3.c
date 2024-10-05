/* Write a C program that uses functions to perform the following:
d. Addition of Two Matrices
e. Multiplication of Two Matrices
f. Transpose of a matrix with memory dynamically allocated for the new matrix as row and column counts may not
be the same */

#include <stdio.h>
#include <stdlib.h>

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int C[rows][cols]) {
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void multiplyMatrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2], int C[r1][c2]) {
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int **transpose) {
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
}

int main() {
    int r1, c1, r2, c2;

    // Example input for addition
    printf("Enter rows and columns for matrices addition (same dimensions): ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1], B[r1][c1], C[r1][c1];

    printf("Enter elements of matrix A:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &B[i][j]);

    addMatrices(r1, c1, A, B, C);

    printf("Sum of matrices:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
