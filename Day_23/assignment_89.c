#include <stdio.h>
int main()
{
    int count[256] = {0};
    char str[100];
    printf("enter the string:");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("first non repeating char:%c", str[i]);
            found = 1;

            break;
        }
    }
    if (!found)
    {
      printf("NO non repeating char found.\n");
    }
    return 0;
}
    