#include <stdio.h>
int main()
{
    int seen[256] = {0};
    char str[100];
    printf("enter the string:");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (seen[(unsigned char)str[i]] == 1)
        {
            printf("first repeating char:%c", str[i]);
            return 0;
        }
        seen[(unsigned char)str[i]]=1;
        
    }

      printf("NO repeating char found.\n");
    
    return 0;
}
    