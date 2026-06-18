/* ===========================
   Q37. Print Star Pyramid
       *
      ***
     *****
    *******
   *********
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}


/* ===========================
   Q38. Print Reverse Pyramid
   *********
    *******
     *****
      ***
       *
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}


/* ===========================
   Q39. Print Number Pyramid
       1
      121
     12321
    1234321
   123454321
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}


/* ===========================
   Q40. Print Character Pyramid
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA
   =========================== */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);

        for(j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}