#include <stdio.h>

int main()
{
    int n1,n2,i, j;
    printf("enter the dimension of matrix(row and column):");
    scanf("%d %d", &n1, &n2);
    int a[n1][n2];
    printf("enter the elements of matrix_1:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the transpose of matrix is :\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
