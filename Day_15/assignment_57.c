#include <stdio.h>

int main()
{
    int n,i,b;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n/2; i++)
    {
       b=a[i];
       a[i]=a[n-1-i];
       a[n-1-i]=b;
    }
    printf("the reversed array is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}