/* ===========================
   Q101. Number Guessing Game
   =========================== */

#include <stdio.h>

int main()
{
    int secret = 25, guess;

    do
    {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High!\n");
        else if(guess < secret)
            printf("Too Low!\n");
        else
            printf("Congratulations! Correct Guess.\n");

    } while(guess != secret);

    return 0;
}


/* ===========================
   Q102. Voting Eligibility System
   =========================== */

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");

    return 0;
}


/* ===========================
   Q103. ATM Simulation
   =========================== */

#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
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
   Q104. Quiz Application
   =========================== */

#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ3. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}