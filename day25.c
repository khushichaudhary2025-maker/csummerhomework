/* ===========================
   Q97. Merge Two Sorted Arrays
   =========================== */

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first sorted array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second sorted array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("Merged Array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}


/* ===========================
   Q98. Find Common Characters in Strings
   =========================== */

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Common Characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}


/* ===========================
   Q99. Sort Names Alphabetically
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
        gets(name[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", name[i]);

    return 0;
}


/* ===========================
   Q100. Sort Words by Length
   =========================== */

#include <stdio.h>
#include <string.h>

int main()
{
    char word[10][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    printf("Enter words:\n");
    for(i = 0; i < n; i++)
        gets(word[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", word[i]);

    return 0;
}