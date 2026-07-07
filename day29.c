/* ===========================
   Q113. Menu-Driven Calculator
   =========================== */

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("Result = %.2f", a + b); break;
        case 2: printf("Result = %.2f", a - b); break;
        case 3: printf("Result = %.2f", a * b); break;
        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not possible");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}


/* ===========================
   Q114. Menu-Driven Array Operations
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], n, i, choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1.Display\n2.Sum\n3.Maximum\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = a[0];
            for(i = 1; i < n; i++)
                if(a[i] > max)
                    max = a[i];
            printf("Maximum = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}


/* ===========================
   Q115. Menu-Driven String Operations
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1.Length\n2.Reverse\n3.Uppercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
        {
            strrev(str);
            printf("Reversed String = %s", str);
            break;
        }

        case 3:
        {
            int i;
            for(i = 0; str[i] != '\0'; i++)
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;

            printf("Uppercase = %s", str);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}


/* ===========================
   Q116. Inventory Management System
   =========================== */

#include <stdio.h>

struct Item
{
    int id, quantity;
    char name[50];
    float price;
};

int main()
{
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n--- Inventory Details ---\n");
    printf("Item ID  : %d\n", item.id);
    printf("Name     : %s\n", item.name);
    printf("Quantity : %d\n", item.quantity);
    printf("Price    : %.2f\n", item.price);

    return 0;
}