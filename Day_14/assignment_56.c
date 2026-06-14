#include <stdio.h>

int main()
{
    int n,  i,j;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the duplicates are:");
    int fl=0;
    for ( i = 0; i < n; i++)
    {
        for ( j=i+1;j<n;j++)
        {
           if (a[i]==a[j]&&a[i]!=-999)
           {
            printf("%d ", a[i]);
            a[j]=-999;
            fl=1;
           }
           
        }
        
    }
    if (fl==0)
    {
        printf("no duplicates found");
    }
    return 0;
}
    
    