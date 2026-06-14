#include <stdio.h>

int main()
{
    int n, m1, m2, i;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m1 = m2 = a[0];
    for (i = 1; i < n; i++)
    {
        if (m1 < a[i])
        {
            m2 = m1;
            m1 = a[i];
        }
        else if (m2 < a[i] && a[i] != m1)
        {
            m2 = a[i];
        }
    }
    printf("the second largest is %d", m2);
    return 0;
}