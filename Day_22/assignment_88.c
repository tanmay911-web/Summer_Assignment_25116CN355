#include <stdio.h>
int main()
{
    int i,j=0;
    char str[50];
    printf("enter the string:");
    gets(str);
    for ( i = 0; str[i] !='\0'; i++)
    {
       if (str[i]!=' ')
       {
       str[j]=str[i];
       j++;
       }
    }
       str[j]='\0';
       printf("the string after removing space:%s",str);
       
    
    
   
    
    

    return 0;
}