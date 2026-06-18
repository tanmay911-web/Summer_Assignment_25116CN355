#include <stdio.h>

int main()
{
    int n1, n2, i, j, s1 = 0, s2 = 0;
    printf("enter the dimension of matrix(row and column):");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2)
    {
        int a[n1][n2];
        printf("enter the elements of matrix_1:\n");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (i = 0; i < n1; i++)
        {
            s1 = s1 + a[i][i];
            s2 = s2 + a[i][n1 - 1 - i];
        }
    
    printf("the sum of the main diagonal is :%d\n", s1);
    printf("the sum of OFF diagonal is:%d\n", s2);

    }

    else
    {
        printf("invalid matrix:must be square(row=column)");
    }

    return 0;
}
