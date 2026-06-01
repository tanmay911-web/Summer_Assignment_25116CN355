#include <stdio.h>

int main()
{
    int n, i, prime = 1;
    printf("enter the number:");
    scanf("%d",&n);
    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("the number is not prime number");
    }

    return 0;
}
