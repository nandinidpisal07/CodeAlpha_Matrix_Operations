#ifndef MATRIX_H
#define MATRIX_H

#define MAX 10

/* Input and Display */
void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);

/* Matrix Operations */
void addMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rows,
    int cols
);

void subtractMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rows,
    int cols
);

void multiplyMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rowA,
    int colA,
    int colB
);

void transposeMatrix(
    int matrix[MAX][MAX],
    int transpose[MAX][MAX],
    int rows,
    int cols
);

#endif