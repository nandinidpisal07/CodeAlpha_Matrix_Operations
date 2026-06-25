/*
=========================================================
                ui.c
      CodeAlpha Matrix Operations
=========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "colors.h"
#include "ui.h"

void clearScreen()
{
    system("cls");
}

void loadingScreen()
{
    clearScreen();

    printf(TITLE_COLOR);

    printf("=========================================================\n");
    printf("           CODEALPHA MATRIX OPERATIONS\n");
    printf("=========================================================\n\n");

    printf(BCYAN "Loading ");

    for(int i = 0; i < 25; i++)
    {
        Sleep(80);
        printf("%c", 219);
        fflush(stdout);
    }

    printf("\n\n");

    Sleep(400);

    printf(RESET);
}

void titleScreen()
{
    clearScreen();

    printf(TITLE_COLOR);

    printf("=========================================================\n");
    printf("          MATRIX OPERATIONS SYSTEM\n");
    printf("=========================================================\n");

    printf(RESET);

    printf(BCYAN);
    printf("Developer : Nandini Pisal\n");
    printf("Language  : C Programming\n");
    printf("Internship: CodeAlpha\n");
    printf("=========================================================\n\n");

    printf(RESET);
}

void dashboard()
{
    printf(BGREEN);

    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Matrix Transpose\n");
    printf("4. Matrix Subtraction\n");
    printf("5. Exit\n");

    printf(RESET);
}

void successMessage(char message[])
{
    printf(SUCCESS_COLOR);

    printf("\n=========================================\n");
    printf("%s\n", message);
    printf("=========================================\n");

    printf(RESET);
}

void errorMessage(char message[])
{
    printf(ERROR_COLOR);

    printf("\n=========================================\n");
    printf("ERROR : %s\n", message);
    printf("=========================================\n");

    printf(RESET);
}

void footer()
{
    printf(BCYAN);

    printf("\n=========================================\n");
    printf("Thank You For Using Matrix Operations\n");
    printf("=========================================\n");

    printf(RESET);
}

void pauseScreen()
{
    printf(BYELLOW);

    printf("\nPress ENTER to continue...");

    printf(RESET);

    getchar();
    getchar();
}