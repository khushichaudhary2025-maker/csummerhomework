/* ===========================
   Q61. Find Missing Number in Array
   (Array contains numbers 1 to n with one missing)
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, total;

    printf("Enter size of array (n-1): ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = (n + 1) * (n + 2) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}


/* ===========================
   Q62. Find Maximum Frequency Element
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);

    return 0;
}


/* ===========================
   Q63. Find Pair with Given Sum
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
                printf("(%d, %d)\n", a[i], a[j]);
        }
    }

    return 0;
}


/* ===========================
   Q64. Remove Duplicates from Array
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; )
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}