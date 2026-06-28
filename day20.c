/* ===========================
   Q77. Multiply Two Matrices
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    printf("Enter first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Product Matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q78. Check Symmetric Matrix
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, flag = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}


/* ===========================
   Q79. Find Row-wise Sum
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Row-wise Sum:\n");

    for(i = 0; i < r; i++)
    {
        sum = 0;

        for(j = 0; j < c; j++)
            sum += a[i][j];

        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}


/* ===========================
   Q80. Find Column-wise Sum
   =========================== */

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Column-wise Sum:\n");

    for(j = 0; j < c; j++)
    {
        sum = 0;

        for(i = 0; i < r; i++)
            sum += a[i][j];

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}