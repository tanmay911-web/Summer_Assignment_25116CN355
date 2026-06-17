#include <stdio.h>

int main()
{
    int n1, n2, i, j, flag;
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
    printf("the union of arrays is :");
    for (i = 0; i < n1; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
    
        if (flag == 0)
        {
            printf("%d ", a[i]);
        }
    }
    
    for (i = 0; i < n2; i++)
    {
        flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        for (j = 0; j < i; j++)
        {
            if (b[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");

    return 0;
}
