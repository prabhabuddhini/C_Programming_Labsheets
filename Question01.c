#include <stdio.h>

#define ROWS 3
#define COLS 3

void matrixSum(int mat1[][COLS], int mat2[][COLS], int sumMatrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sumMatrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], sumMatrix[ROWS][COLS];

    // Input values for matrix1
    printf("Enter values for matrix1 (3x3):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for matrix2
    printf("Enter values for matrix2 (3x3):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    matrixSum(matrix1, matrix2, sumMatrix);

    // Display the sum matrix
    printf("Matrix Sum:\n");
    displayMatrix(sumMatrix);

    return 0;
}
