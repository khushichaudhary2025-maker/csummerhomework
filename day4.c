<<<QUESTION.13>>>
#include <stdio.h>
void generate_fibonacci(int terms)
 {
    int a = 0, b = 1, next;
    for (int i = 0; i < terms; i++) 
{
        if (i <= 1) next = i;
        else
 {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

<<<QUESTION.14>>>
#include <stdio.h>

int nth_fibonacci(int n)
 {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++)
 {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

<<<QUESTION.15>>>
#include <stdio.h>
#include <math.h>

int is_armstrong(int n) 
{
    int original = n, temp = n, digits = 0, sum = 0;
    while (temp > 0) 
{
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) 
{
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == original;
}

<<<QUESTION.16>>>
#include <stdio.h>

void armstrong_in_range(int start, int end)
 {
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i))
 {
            printf("%d ", i);
        }
    }
    printf("\n");
}