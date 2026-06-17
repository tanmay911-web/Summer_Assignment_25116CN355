#include <stdio.h>

int main()
{
    int n1, n2, i, k = 0;
    printf("size of array 1 and array 2:");
    scanf("%d %d", &n1,& n2);
    int a[n1], b[n2], res[n1 + n2];
    printf("enter the elements of array 1:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        res[k++] = a[i];
    }
    printf("enter the elements of array 2:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
            res[k++] = b[i];
    }
    printf("the merged array:");
    for (i = 0; i < k; i++)
    {
        printf("%d ", res[i]);
    }
    return 0;
}
