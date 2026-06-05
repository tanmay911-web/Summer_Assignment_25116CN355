#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the no of rows:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
