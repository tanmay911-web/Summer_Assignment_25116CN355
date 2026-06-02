#include <stdio.h>

int main(){
    int x=1,i,n,r=1;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the power:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
     r*= x;
    }
    printf("the result is %d",r);
    return 0;
}
