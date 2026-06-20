/* ===========================
   Q45. Function for Palindrome Number
   =========================== */

#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, temp = n;

    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (rev == n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}


/* ===========================
   Q46. Function for Armstrong Number
   =========================== */

#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}


/* ===========================
   Q47. Function for Fibonacci Series
   =========================== */

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}


/* ===========================
   Q48. Function for Perfect Number
   =========================== */

#include <stdio.h>

int perfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}