/*
=========================================================
                main.c
      CodeAlpha Matrix Operations
=========================================================
*/

#include <stdio.h>

#include "ui.h"
#include "matrix.h"

int main()
{
    int choice;

    int A[MAX][MAX];
    int B[MAX][MAX];
    int Result[MAX][MAX];
    int Transpose[MAX][MAX];

    int rows, cols;
    int rowA, colA, rowB, colB;

    loadingScreen();

    while(1)
    {
        titleScreen();

        dashboard();

        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:

            printf("\nMatrix Addition\n");

            printf("Enter Number of Rows : ");
            scanf("%d",&rows);

            printf("Enter Number of Columns : ");
            scanf("%d",&cols);

            printf("\nEnter Matrix A\n");
            inputMatrix(A,rows,cols);

            printf("\nEnter Matrix B\n");
            inputMatrix(B,rows,cols);

            addMatrix(A,B,Result,rows,cols);

            successMessage("Addition Successful");

            printf("\nResult Matrix\n");
            displayMatrix(Result,rows,cols);

            break;

        case 2:

            printf("\nMatrix Multiplication\n");

            printf("Rows of Matrix A : ");
            scanf("%d",&rowA);

            printf("Columns of Matrix A : ");
            scanf("%d",&colA);

            printf("Rows of Matrix B : ");
            scanf("%d",&rowB);

            printf("Columns of Matrix B : ");
            scanf("%d",&colB);

            if(colA != rowB)
            {
                errorMessage("Matrix Multiplication Not Possible");

                break;
            }

            printf("\nEnter Matrix A\n");
            inputMatrix(A,rowA,colA);

            printf("\nEnter Matrix B\n");
            inputMatrix(B,rowB,colB);

            multiplyMatrix(A,B,Result,rowA,colA,colB);

            successMessage("Multiplication Successful");

            printf("\nResult Matrix\n");

            displayMatrix(Result,rowA,colB);

            break;

        case 3:

            printf("\nMatrix Transpose\n");

            printf("Rows : ");
            scanf("%d",&rows);

            printf("Columns : ");
            scanf("%d",&cols);

            printf("\nEnter Matrix\n");

            inputMatrix(A,rows,cols);

            transposeMatrix(A,Transpose,rows,cols);

            successMessage("Transpose Successful");

            printf("\nTranspose Matrix\n");

            displayMatrix(Transpose,cols,rows);

            break;

        case 4:

            printf("\nMatrix Subtraction\n");

            printf("Rows : ");
            scanf("%d",&rows);

            printf("Columns : ");
            scanf("%d",&cols);

            printf("\nEnter Matrix A\n");
            inputMatrix(A,rows,cols);

            printf("\nEnter Matrix B\n");
            inputMatrix(B,rows,cols);

            subtractMatrix(A,B,Result,rows,cols);

            successMessage("Subtraction Successful");

            printf("\nResult Matrix\n");

            displayMatrix(Result,rows,cols);

            break;

        case 5:

            footer();

            return 0;

        default:

            errorMessage("Invalid Menu Choice");

        }

        pauseScreen();

    }

    return 0;
}