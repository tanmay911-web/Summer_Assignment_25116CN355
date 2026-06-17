#include <stdio.h>

int main()
{
    int n,j, i,temp;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements to be sorted:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
       for ( j = i+1; j < n; j++)
       {
        if (a[i]>a[j])  //selection sort
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
        
       }
       
    }
    printf("the sorted array is:");
    for ( i = 0; i <n; i++)
    {
     printf("%d ",a[i]);
     }
     return 0;
    }
    
    