#include <stdio.h>
int main()
{
    int i, vowl = 0, cons = 0;
    char str[50], temp;
    printf("enter the string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {

        if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z')
        {

            if (str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e' || str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E')

            {
                vowl++;
            }

            else
            {
                cons++;
            }
        }
    }
    printf("the no of vowel and consonants in string is:%d %d", vowl, cons);

    return 0;
}