/* ===========================
   Q89. Find First Non-Repeating Character
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1)
        {
            printf("First Non-Repeating Character = %c", str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character Found");

    return 0;
}


/* ===========================
   Q90. Find First Repeating Character
   =========================== */

#include <stdio.h>

int main()
{
<<<<<<< HEAD
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("First Repeating Character = %c", str[i]);
                return 0;
            }
        }
    }

    printf("No Repeating Character Found");

    return 0;
}


/* ===========================
   Q91. Check Anagram Strings
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, freq[256] = {0};

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
        freq[(int)str1[i]]++;

    for(i = 0; str2[i] != '\0'; i++)
        freq[(int)str2[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram Strings");

    return 0;
}


/* ===========================
   Q92. Find Maximum Occurring Character
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count, max = 0;
    char ch;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count > max)
        {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximum Occurring Character = %c", ch);

    return 0;
}
=======
    char str[
>>>>>>> 7c3a413904136fa68951b3d217897f5e6d9713a7
