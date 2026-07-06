/* ===========================
   Q109. Library Management System
   =========================== */

#include <stdio.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
};

int main()
{
    struct Library b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Name: ");
    scanf("%s", b.bookName);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.bookId);
    printf("Book Name : %s\n", b.bookName);
    printf("Author    : %s\n", b.author);

    return 0;
}


/* ===========================
   Q110. Bank Account System
   =========================== */

#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance -= amount;
                printf("Remaining Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}


/* ===========================
   Q111. Ticket Booking System
   =========================== */

#include <stdio.h>

int main()
{
    int seats;

    printf("Enter number of tickets: ");
    scanf("%d", &seats);

    if(seats <= 5)
    {
        printf("Booking Successful\n");
        printf("Total Amount = %d", seats * 200);
    }
    else
    {
        printf("Only 5 tickets allowed per booking.");
    }

    return 0;
}


/* ===========================
   Q112. Contact Management System
   =========================== */

#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c;

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("\n--- Contact Details ---\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);

    return 0;
}