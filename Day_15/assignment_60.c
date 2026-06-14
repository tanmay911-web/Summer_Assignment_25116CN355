#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n ; i++)
    {
        if (a[i] != 0)
        {
            a[count++] = a[i];
        }
    }
    while (count < n)
    {
        a[count++] = 0;
    }

    printf("result: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
