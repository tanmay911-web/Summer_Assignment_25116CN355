#include <stdio.h>
int main()
{
    int i, j, count, alreadyprinted;
    char str[50];
    printf("enter the sentance:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        int skip = 0;
        for (int k = 0; k < i; k++)
        {
            if (str[i] == str[k])
            {
                skip = 1;
                break;
            }
        }
        if (skip)
        {
            continue;
        }

        count = 0;
    
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        printf("%c appears %d times\n", str[i], count);
    }
    return 0;
}