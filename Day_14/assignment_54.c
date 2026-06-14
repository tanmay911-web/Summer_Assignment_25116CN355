#include <stdio.h>

int main()
{
    int n, i, j, co;
    printf("enter the number of elements-\n");
    scanf("%d", &n);
    int a[n];
    int vis[n];
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        vis[i] = 0;
    }
    printf("\n element frequencies\n");
    for (i = 0; i < n; i++)
    {
        if (vis[i] == 1)
        {
            continue;
        }
            co = 1;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    co++;
                    vis[j] =1;
                }
            
        }
        printf("%d occurs %d Times\n", a[i], co);
    }

    return 0;
}