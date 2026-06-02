#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    printf("enter the number to cheked:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("the number is not perfect number");
    }

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("the number is perfect number");
    }
    else
    {
        printf("the number is not perfect number");
    }

    return 0;
}
