/* ===========================
   Q93. Check String Rotation
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("String Rotation");
    else
        printf("Not a String Rotation");

    return 0;
}


/* ===========================
   Q94. Compress a String
   Example: aaabbc -> a3b2c1
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}


/* ===========================
   Q95. Find Longest Word
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[100], word[100];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            if(strlen(word) > maxLen)
            {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}


/* ===========================
   Q96. Remove Duplicate Characters
   =========================== */

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0';)
        {
            if(str[i] == str[j])
            {
                for(k = j; str[k] != '\0'; k++)
                    str[k] = str[k + 1];
            }
            else
            {
                j++;
            }
        }
    }

    printf("String after removing duplicates = %s", str);

    return 0;
}