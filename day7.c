/* ===========================
   Q25. Recursive Factorial
   =========================== */

#include <stdio.h>

long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", factorial(n));

    return 0;
}


/* ===========================
   Q26. Recursive Fibonacci
   =========================== */

#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}


/* ===========================
   Q27. Recursive Sum of Digits
   =========================== */

#include <stdio.h>

int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));

    return 0;
}


/* ===========================
   Q28. Recursive Reverse Number
   =========================== */

#include <stdio.h>

int rev = 0;

int reverse(int n)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + n % 10;
    reverse(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}