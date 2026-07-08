/* ===========================
   Q117. Student Record System
   (Using Arrays and Strings)
   =========================== */

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}


/* ===========================
   Q118. Mini Library System
   =========================== */

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[5];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &b[i].id);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n--- Library Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %s\n", b[i].id, b[i].title, b[i].author);
    }

    return 0;
}


/* ===========================
   Q119. Mini Employee
   Management System
   =========================== */

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[5];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}


/* ===========================
   Q120. Mini Project
   (Arrays + Strings + Functions)
   =========================== */

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;
    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++)
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
}

int main()
{
    struct Student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);

    return 0;
}