#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("enter the size- ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the pairs are:");
    for ( i = 0; i < n; i++)
    {
     for ( j = i+1; j<n; j++)
     {
       if (a[i]==a[j])
       {
        for ( k = j; k < n-1; k++)
        {
           a[k]=a[k+1];
        }
        n--;
        j--;
       }
       
     }
    }
    printf("the unique elements are :");
    for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    
    return 0;
}
    