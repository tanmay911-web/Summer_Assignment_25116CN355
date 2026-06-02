#include <stdio.h>

int main()
{
    int sum = 0, fact, n, temp, r, i;
    printf("Enter the number to be checked:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;

        fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (n == sum)
    {
        printf("the number is strong number");
    }
    else
    {
        printf("the number is not strong number");
    }

    return 0;
}
