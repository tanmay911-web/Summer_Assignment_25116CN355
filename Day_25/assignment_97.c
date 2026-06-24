#include <stdio.h>

int main()
{
    int n1, n2, i = 0, j = 0, k = 0;
    printf("enter the size of the array1 and array_2:");
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2], c[n1 + n2];
    printf("enter the element of array_1(sorted):\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element of array_2(sorted):\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        c[k++] = a[i++];
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }

    printf("The merged sorted array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}