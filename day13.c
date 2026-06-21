/* ===========================
   Q49. Input and Display Array
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

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


/* ===========================
   Q50. Find Sum and Average of Array
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}


/* ===========================
   Q51. Find Largest and Smallest Element
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}


/* ===========================
   Q52. Count Even and Odd Elements
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d", odd);

    return 0;
}