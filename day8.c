/* ===========================
   Q29. Print Half Pyramid Pattern
   *
   **
   ***
   ****
   *****
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q30. Print Number Triangle
   1
   12
   123
   1234
   12345
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q31. Print Character Triangle
   A
   AB
   ABC
   ABCD
   ABCDE
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q32. Print Repeated Number Pattern
   1
   22
   333
   4444
   55555
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}