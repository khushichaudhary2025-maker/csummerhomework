/* ===========================
   Q57. Reverse Array
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reversed Array:\n");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}


/* ===========================
   Q58. Rotate Array Left
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, first;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    first = a[0];

    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = first;

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


/* ===========================
   Q59. Rotate Array Right
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    last = a[n - 1];

    for(i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


/* ===========================
   Q60. Move Zeroes to End
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, j = 0, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
            temp[j++] = a[i];
    }

    while(j < n)
        temp[j++] = 0;

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}