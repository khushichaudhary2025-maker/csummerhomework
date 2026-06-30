/* ===========================
   Q85. Check Palindrome String
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0')
        len++;

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}


/* ===========================
   Q86. Count Words in a Sentence
   =========================== */

#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 1;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    printf("Number of Words = %d", words);

    return 0;
}


/* ===========================
   Q87. Character Frequency
   =========================== */

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}


/* ===========================
   Q88. Remove Spaces from String
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String without spaces = %s", str);

    return 0;
}