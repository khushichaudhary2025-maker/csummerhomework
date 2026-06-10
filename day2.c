<<<QUESTION.5>>>
#include <stdio.h>
int main() 
{
    int n, sum = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
{
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is %d", sum);
    return 0;
}

 <<<QUESTION.6>>>
#include <stdio.h>
int main()
 {
    int n, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) 
{
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number: %d", reverse);
    return 0;
}

 <<<QUESTION.7>>>
#include <stdio.h>
int main()
 {
    int n, prod = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
        prod = 0; 
    while (n > 0) 
{
        rem = n % 10;
        prod *= rem;
        n /= 10;
    }
    printf("Product is %d", prod);
    return 0;
}

 <<<QUESTION.8>>>
#include <stdio.h>
int main() 
{
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) 
{
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
       {
 printf("%d is a palindrome.", original);
}
    else
      {
  printf("%d is not a palindrome.", original);
}
    return 0;
}