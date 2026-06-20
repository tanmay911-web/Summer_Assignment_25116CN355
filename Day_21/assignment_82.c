#include <stdio.h>
int main()
{
    int i, j, l = 0;
    char str[50], temp;
    printf("enter the string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    for (i = 0, j = l - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the reverse string is:%s", str);

    return 0;
}