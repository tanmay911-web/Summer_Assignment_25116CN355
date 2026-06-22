#include <stdio.h>
int main(){
    int i=0,count=0;
    char str[50];
    printf("enter the sentance:");
    gets(str);
    if (str[0]!='\0'&& str[0]!=' ')
    {
       count=1;
    }
    
    
    while (str[i]!='\0')
    {
      if (str[i]==' '&& str[i+1]!=' '&& str[i+1]!='\0')
      {
        count++;
      }
      i++;
      
    }
    printf("the number of words in sentence  =%d",count);
    
    
    return 0;
}