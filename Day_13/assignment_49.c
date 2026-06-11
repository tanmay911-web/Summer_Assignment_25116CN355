#include <stdio.h>

int main()
{
    int n, a[100], i;
    printf("enter the number of array elements:\n");
    scanf("%d", &n);
    printf("enter the elements of array");
    for (i = 0; i <= n-1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array elemnts are :\n");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}