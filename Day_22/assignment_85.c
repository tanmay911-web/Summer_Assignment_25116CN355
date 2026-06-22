#include <stdio.h>
#include<string.h>
int main()
{
    int left=0,right;
    char str[50];
    printf("enter the string:");
    gets(str);
    right=strlen(str)-1;
    while (left<right)
    {
        if (str[left]!=str[right])
        {
           printf("the string is not palindrome");
           return 0;
        }
        left++;
        right--;
        
    }
    printf("the string is palindrome");
    
    

    return 0;
}