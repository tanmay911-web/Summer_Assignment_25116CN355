#include <stdio.h>
int main()
{
    int count[256] = {0};
    char str[100];
    printf("enter the string:");
    fgets(str, sizeof(str), stdin);
    int max=-1;
    char result;
    for (int i = 0; str[i] != '\0'; i++){

    count[(unsigned char)str[i]]++;

    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]]>max)
        {
           max=count[(unsigned char)str[i]];
           result=str[i];
        }
        
        
    }

      printf("maximum occurring char::%c(occur %d times)", result,max);
    
    return 0;
}
    