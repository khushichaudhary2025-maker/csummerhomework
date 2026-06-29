/* ===========================
   Q81. Find String Length without strlen()
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);

    return 0;
}


/* ===========================
   Q82. Reverse a String
   =========================== */

#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, len = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0')
        len++;

    for(i = 0; i < len; i++)
        rev[i] = str[len - i - 1];

    rev[len] = '\0';

    printf("Reversed String = %s", rev);

    return 0;
}


/* ===========================
   Q83. Count Vowels and Consonants
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}


/* ===========================
   Q84. Convert Lowercase to Uppercase
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase String = %s", str);

    return 0;
}