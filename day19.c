/* ===========================
   Q73. Add Two Matrices
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q74. Subtract Two Matrices
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            c[i][j] = a[i][j] - b[i][j];

    printf("Difference Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q75. Transpose of Matrix
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose Matrix:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q76. Find Diagonal Sum of Matrix
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        sum += a[i][i];

    printf("Diagonal Sum = %d", sum);

    return 0;
}