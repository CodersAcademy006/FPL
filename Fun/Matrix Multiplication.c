// #include <stdio.h>

// void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }

// void subtractMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = A[i][j] - B[i][j];
//         }
//     }
// }

// void multiplyMatrices(int A[][10], int B[][10], int result[][10], int rowsA, int colsA, int rowsB, int colsB) {
//     for (int i = 0; i < rowsA; i++) {
//         for (int j = 0; j < colsB; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < colsA; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }

// void displayMatrix(int matrix[][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int A[10][10], B[10][10], result[10][10];
//     int rowsA, colsA, rowsB, colsB;

//     // Take matrix A dimensions and input
//     printf("Enter the number of rows and columns for Matrix A: ");
//     scanf("%d %d", &rowsA, &colsA);
    
//     printf("Enter elements of Matrix A:\n");
//     for (int i = 0; i < rowsA; i++) {
//         for (int j = 0; j < colsA; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     // Take matrix B dimensions and input
//     printf("Enter the number of rows and columns for Matrix B: ");
//     scanf("%d %d", &rowsB, &colsB);

//     if (rowsA != rowsB || colsA != colsB) {
//         printf("Matrices must have the same dimensions for addition and subtraction!\n");
//         return 1;
//     }

//     printf("Enter elements of Matrix B:\n");
//     for (int i = 0; i < rowsB; i++) {
//         for (int j = 0; j < colsB; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     // Display matrices
//     printf("\nMatrix A:\n");
//     displayMatrix(A, rowsA, colsA);

//     printf("\nMatrix B:\n");
//     displayMatrix(B, rowsB, colsB);

//     // Addition
//     addMatrices(A, B, result, rowsA, colsA);
//     printf("\nMatrix A + Matrix B:\n");
//     displayMatrix(result, rowsA, colsA);

//     // Subtraction
//     subtractMatrices(A, B, result, rowsA, colsA);
//     printf("\nMatrix A - Matrix B:\n");
//     displayMatrix(result, rowsA, colsA);

//     // Multiplication (Check for valid dimensions)
//     if (colsA != rowsB) {
//         printf("Matrix multiplication is not possible due to incompatible dimensions!\n");
//     } else {
//         multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);
//         printf("\nMatrix A * Matrix B:\n");
//         displayMatrix(result, rowsA, colsB);
//     }

//     return 0;
// }



#include <stdio.h>
#define MAX_SIZE 10  // Maximum size of matrices

// Function to input a matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("\nMatrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2; // these variables stores the extracted numnber from each perform

    // Input for the first matrix
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rows1, &cols1);
    inputMatrix(mat1, rows1, cols1);

    // Input for the second matrix
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rows2, &cols2);
    inputMatrix(mat2, rows2, cols2);

    // Display the input matrices
    displayMatrix(mat1, rows1, cols1);
    displayMatrix(mat2, rows2, cols2);

    // Matrix addition (only possible if both matrices have the same dimensions)
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nResult of Matrix Addition:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrix addition not possible (dimensions do not match).\n");
    }

    // Matrix subtraction (only possible if both matrices have the same dimensions)
    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nResult of Matrix Subtraction:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrix subtraction not possible (dimensions do not match).\n");
    }

    // Matrix multiplication (possible if columns of mat1 == rows of mat2)
    if (cols1 == rows2) {
        multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
        printf("\nResult of Matrix Multiplication:\n");
        displayMatrix(result, rows1, cols2);
    } else {
        printf("\nMatrix multiplication not possible (columns of mat1 do not match rows of mat2).\n");
    }

    return 0;
}