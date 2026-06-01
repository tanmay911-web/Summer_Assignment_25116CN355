#include <stdio.h>

int main()
{
    int f1, f2, f3, n, i;
    printf("enter the term number:");
    scanf("%d", &n);
    f1 = 0;
    f2 = 1;
    if (n == 1)
    {
        printf("the %dth term is %d", n, f1);
    }
    else if (n == 2)
    {
        printf("the %dth term is %d", n, f2);
    }

    else
    {
        for (i = 1; i <= n - 2; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("the %dth term is %d", n, f2);
    }
    return 0;
}
