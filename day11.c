/* ===========================
   Q41. Function to Find Sum of Two Numbers
   =========================== */

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum = %d", sum(a, b));

    return 0;
}


/* ===========================
   Q42. Function to Find Maximum
   =========================== */

#include <stdio.h>

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Maximum = %d", maximum(a, b));

    return 0;
}


/* ===========================
   Q43. Function to Check Prime
   =========================== */

#include <stdio.h>

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}


/* ===========================
   Q44. Function to Find Factorial
   =========================== */

#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", factorial(n));

    return 0;
}