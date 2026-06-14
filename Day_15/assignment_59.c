#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int last = a[n-1];
    for (i = n-1; i > 0; i--)
    {
        a[i] = a[i - 1];
       
    }
     a[0] = last;
    printf("rotated right:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
