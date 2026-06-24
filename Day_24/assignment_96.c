#include <stdio.h>
#include<string.h>
int main()
{
    int seen[256] = {0};
    char str[100];
    printf("enter the string:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (!seen[(unsigned char)str[i]])
        {
            printf("%c", str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}
