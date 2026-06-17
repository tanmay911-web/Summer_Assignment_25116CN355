#include <stdio.h>

int main()
{
    int n1, n2, i, j;
    printf("enter the size:-\n");
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2];
    printf("enter the elements of array1:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements of array2:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("the intersection of the array is:");

    {
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                if (a[i] == b[j])
                {
                    printf("%d ", a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}