#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("enter the string :");

    fgets(s1, sizeof(s1), stdin);

    s1[strcspn(s1, "\n")] = '\0';

    for (int i = 0; s1[i] !='\0' ; i++)
    {
       int count =1;
       while (s1[i]==s1[i+1])
       {
       count++;
       i++;
       }
       printf("%c %d",s1[i],count);
       
    }
printf("\n");
return 0;
}