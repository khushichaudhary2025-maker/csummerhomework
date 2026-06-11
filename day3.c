<<<QUESTION.9>>>
#include <stdio.h>
int main()
 {
    int num, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) 
{
        isPrime = 0;
    } 
else
 {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) 
{
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
        
    return 0;
}

<<<QUESTION.10>>>
#include <stdio.h>
int main() 
{
    int low, high, i, j, isPrime;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &low, &high);
  
     printf("Prime numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++) 
{
        if (i <= 1) continue;
        isPrime = 1;
        for (j = 2; j * j <= i; j++) 
{
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) 
{
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

<<<QUESTION.11>>>
#include <stdio.h>
int main() 
{
    int n1, n2, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    
    int a = n1, b = n2;
    while (b != 0) 
{
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}

<<<QUESTION.12>>>
#include <stdio.h>
int main()
 {
    int n1, n2, gcd, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    
    int a = n1, b = n2;
    while (b != 0) 
{
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (n1 * n2) / gcd;
    
    printf("LCM of %d and %d is %d\n", n1, n2, lcm);
    return 0;
}