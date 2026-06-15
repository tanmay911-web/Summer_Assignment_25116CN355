#include <stdio.h>

int main()
{
    int n, i,j, maxcount = 0, res = -1;
    printf("size: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n", n - 1);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            res = a[i];
        }
    }
    printf("the most frequent element is %d,appears %d times",res,maxcount);

    return 0;
}