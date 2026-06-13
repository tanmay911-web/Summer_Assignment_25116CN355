#include <stdio.h>

int main()
{
    int n, i;
    int min, max;
                 printf("enter the no. of elements of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements-");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the minimum and maximum value are %d %d", min, max);

    return 0;
}