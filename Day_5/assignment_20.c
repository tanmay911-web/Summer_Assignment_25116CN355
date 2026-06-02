#include <stdio.h>

int main()
{
    int n, largprime = 0, i;
    printf("enter the number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("enter the number greater than 1");
        return 0;
    }

    for (i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            largprime = i;
            n = n / i;
        }
    }
    if (n > 1)
    {
        largprime = n;
    }

    printf("the largest prime factor is %d", largprime);

    return 0;
}
