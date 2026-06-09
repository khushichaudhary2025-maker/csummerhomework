<<<QUESTION 1>>>
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
    getch();
    return 0;
}
<<<QUESTION 2>>>
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("multiplication table of %d is:\n",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}
<<<QUESTION 3>>>
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    long long factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d is %lld",n,factorial);
    getch();
    return 0;
}
<<<QUESTION 4>>>
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("Number of digits is %d",count);
    return 0;
}