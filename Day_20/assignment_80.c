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

    for (j = 0; j < c1; j++) //ive made few chnages in row_sum code  mainly in the for loop for easier
    {
        int column_sum = 0;
        for (i = 0; i < n1; i++)
        {
            column_sum += a[i][j];
        }
        printf("the sum of the column %d elements is :: %d\n",j+1, column_sum);
    }

    return 0;
}
