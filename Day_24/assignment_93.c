#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], temp[100];
    printf("enter the string 1:");

    fgets(s1, sizeof(s1), stdin);

    s1[strcspn(s1, "\n")] = '\0';

    printf("enter the string 2:");

    fgets(s2, sizeof(s2), stdin);

    s2[strcspn(s2, "\n")] = '\0';
    if (strlen(s1) != strlen(s2))
    {
        printf("not a rotation");
    }
    else
    {
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2))
        {
            printf("strings are rotated");
        }
        else
        {
            printf("not a rotation");
        }
    }

    return 0;
}
