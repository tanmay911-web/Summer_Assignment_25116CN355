#include <stdio.h>

int main()
{
    int n1, c1, i, j;
    printf("enter the dimension of matrix:");
    scanf("%d %d", &n1, &c1);
    if (n1 != c1)
    {
        printf("matrix is not symmetric");
        return 1;
    }

    int a[n1][c1];
    printf("enter the elements of matrix:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int symmetric = 1;
    for (i = 0; i < n1; i++)
    {
        for (j = i+1; j < c1; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
        {
          break;
        }
        
    }
    if (symmetric)
    {
        printf("the matrix is symmetric matrix");
    }
    else
    {
        printf("the matrix is not symmetric matrix");
    }

    return 0;
}
