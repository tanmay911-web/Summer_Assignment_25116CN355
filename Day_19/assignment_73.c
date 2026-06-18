#include <stdio.h>

int main()
{
    int n1, n2, i, j;
    printf("enter the dimension of matrix:");
    scanf("%d %d", &n1, &n2);
    int a[n1][n2], b[n1][n2], c[n1][n2], sum;
    printf("enter the elements of matrix_1:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements of matrix_2:");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the addition of matrix is :\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
