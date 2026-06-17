#include <stdio.h>

int main()
{
    int n, i, x, mid, low, high, flag = 0;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in sorted way:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search: ");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 1)
    {
        printf("the element is found at %d position", mid + 1);
    }
    else
    {
        printf("unsucessful search");
    }

    return 0;
}
