#include <stdio.h>

int main()
{
    int n,targ,i,j;
    printf("enter the size and target sum- ");
    scanf("%d %d", &n,&targ);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the pairs are:");
    for ( i = 0; i < n; i++)
    {
       for ( j = i+1; j< n; j++)
       {
       if (a[i]+a[j]==targ)
       {
       printf("(%d %d) ", a[i], a[j]);
       }
       
       }
       
    }
    return 0;
}
    