#include <stdio.h>
#include<ctype.h>
int main(){
    int i;
    char str[50];
    printf("enter the string:");
    gets(str);
     for (i = 0; str[i] != '\0'; i++)
    {
        str[i]= toupper(str[i]);
    }
    printf("the upper case string is:: %s",str);
    
    
    return 0;
}