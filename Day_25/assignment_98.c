#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int count1[26]={0};
    int count2[26]={0};
    char s1[50];
    char s2[50];
    int found = 0;

    for (int i = 0; i < 26; i++)
    {
        count1[i] = 0;
        count2[i] = 0;
    }

    printf("Enter first string: ");
    fgets(s1, 50, stdin);
    
    printf("Enter second string: ");
    fgets(s2, 50, stdin);

    for (int i = 0; i < strlen(s1); i++)
    {
        if (isalpha(s1[i]))
        {
            count1[tolower(s1[i]) - 'a']++;
        }
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        if (isalpha(s2[i]))
        {
            count2[tolower(s2[i]) - 'a']++;
        }
    }
    if (found == 0)
    {
        printf("None\n");
    }
    else
    {
        printf("\n");
    }
    return 0;
}