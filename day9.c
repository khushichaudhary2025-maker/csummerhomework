/* ===========================
   Q33. Print Reverse Star Pattern
   *****
   ****
   ***
   **
   *
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
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
   Q34. Print Reverse Number Triangle
   12345
   1234
   123
   12
   1
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
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
   Q35. Print Repeated Character Pattern
   A
   BB
   CCC
   DDDD
   EEEEE
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}


/* ===========================
   Q36. Print Hollow Square Pattern
   *****
   *   *
   *   *
   *   *
   *****
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}