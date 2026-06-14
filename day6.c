/* ===========================
   Q21. Convert Decimal to Binary
   =========================== */

#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary = ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}


/* ===========================
   Q22. Convert Binary to Decimal
   =========================== */

#include <stdio.h>

int main()
{
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter binary number: ");
    scanf("%lld", &binary);

    while(binary > 0)
    {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}


/* ===========================
   Q23. Count Set Bits in a Number
   =========================== */

#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        if(n % 2 == 1)
            count++;

        n /= 2;
    }

    printf("Set Bits = %d", count);

    return 0;
}


/* ===========================
   Q24. Find x^n Without Using pow()
   =========================== */

#include <stdio.h>

int main()
{
    int x, n;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        result *= x;

    printf("%d^%d = %lld", x, n, result);

    return 0;
}