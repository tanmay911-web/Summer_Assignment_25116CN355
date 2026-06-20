#include <stdio.h>

int main()
{
    int n1, c1, i, j;
    printf("enter the dimension of matrix:");
    scanf("%d %d", &n1, &c1);

    int a[n1][c1];
    printf("enter the elements of matrix:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n1; i++)
    {
        int row_sum = 0;
        for (j = 0; j < c1; j++)
        {
            row_sum += a[i][j];
        }
        printf("the sum of the row %d elements is :: %d\n",i+1, row_sum);
    }

    return 0;
}
