#include <stdio.h>

int main(){
    int n,i,even=0,odd=0;
    printf("enter the number of element-");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for ( i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
       if (a[i]%2==0)
       {
        even++;
       }
       else{
        odd++;
       }
       
    }
    printf("the number of even and odd elements are : %d %d\n",even,odd);
    
    return 0;
}