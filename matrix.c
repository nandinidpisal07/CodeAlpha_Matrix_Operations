/*
=========================================================
                matrix.c
      CodeAlpha Matrix Operations
=========================================================
*/

#include <stdio.h>

#include "matrix.h"

/* Input Matrix */

void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Display Matrix */

void displayMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    int i, j;

    printf("\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%6d", matrix[i][j]);
        }

        printf("\n");
    }
}

/* Matrix Addition */

void addMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rows,
    int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            Result[i][j] = A[i][j] + B[i][j];
        }
    }
}

/* Matrix Subtraction */

void subtractMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rows,
    int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            Result[i][j] = A[i][j] - B[i][j];
        }
    }
}

/* Matrix Multiplication */

void multiplyMatrix(
    int A[MAX][MAX],
    int B[MAX][MAX],
    int Result[MAX][MAX],
    int rowA,
    int colA,
    int colB)
{
    int i, j, k;

    for(i = 0; i < rowA; i++)
    {
        for(j = 0; j < colB; j++)
        {
            Result[i][j] = 0;

            for(k = 0; k < colA; k++)
            {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

/* Matrix Transpose */

void transposeMatrix(
    int matrix[MAX][MAX],
    int transpose[MAX][MAX],
    int rows,
    int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}