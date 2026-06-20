#include <stdio.h>
int main(){
    int i;
    char str[50];
    printf("enter the string:");
    gets(str);
    i=0;
    while (str[i]!='\0')
    {
      i++;
    }
    printf("the length of the string is =%d",i);
    
    
    return 0;
}