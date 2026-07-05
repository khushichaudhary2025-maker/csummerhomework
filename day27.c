/* ===========================
   Q105. Student Record Management System
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
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}


/* ===========================
   Q106. Employee Management System
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
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}


/* ===========================
   Q107. Salary Management System
   =========================== */

#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    printf("\nBasic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", gross);

    return 0;
}


/* ===========================
   Q108. Marksheet Generation System
   =========================== */

#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\nTotal = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade: A+");
    else if(percentage >= 75)
        printf("Grade: A");
    else if(percentage >= 60)
        printf("Grade: B");
    else if(percentage >= 40)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}