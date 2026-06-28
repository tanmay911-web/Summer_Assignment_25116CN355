#include <stdio.h>
#include <string.h>

int main()
{
    int ch;
    char s1[50], s2[50];
    printf("==STRING OPERATION SYSTEM==\n");
    printf("1.LENGTH 2.CONCAT 3.COMPARE 4.EXIT\n");
    while (1)
    {
        printf("\nenter your choice: ");
        scanf("%d", &ch);
        if (ch == 4)
        {
            printf("exiting program.............!!!!!!");
            break;
        }
        while (getchar() != '\n')
            ;

        switch (ch)
        {
        case 1:
            printf("enter the STRING: ");
            gets(s1);
            printf("THE LENGTH IS ::%d ", (int)strlen(s1));

            break;
        case 2:
            printf("enter the string (enter after each other): \n");
            gets(s1);
            gets(s2);
            strcat(s1, s2);
            printf("concatenated: %s\n", s1);
            break;

        case 3:
            printf("enter the string (enter after each other): \n");
            gets(s1);
            gets(s2);
            if (strcmp(s1, s2) == 0)
            {
                printf("string are equal");
            }
            else
            {
                printf("string are not equal");
            }

            break;

        default:
            printf("INVALID!!!!");
            break;
        }
    }

    return 0;
}