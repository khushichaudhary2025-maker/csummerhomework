/* ===========================
   Q53. Linear Search
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}


/* ===========================
   Q54. Frequency of an Element
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}


/* ===========================
   Q55. Second Largest Element
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -99999;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}


/* ===========================
   Q56. Find Duplicates in Array
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}