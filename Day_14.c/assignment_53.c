#include <stdio.h>

int main()
{
    int n, x, i, f = 0;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search:");
        scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("the element is found at %d  position", i + 1);
    }
    else
    {
        printf("unsucessful search");
    }

    return 0;
}