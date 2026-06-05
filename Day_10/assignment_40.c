#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the no of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (int k = 1; k < n - i; k++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i ; j++)
        {
            printf("%c ",j+64);
        }
        for (int a = i-1; a >=1; a--)
        {
           printf("%c ",a+64);
        }
        
        printf("\n");
    }
    return 0;
}
