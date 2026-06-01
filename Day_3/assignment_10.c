#include <stdio.h>

int main()
{
    int n1, n2, i, j, prime;
    printf("enter the first number:");
    scanf("%d", &n1);
    printf("enter the 2nd number:");
    scanf("%d", &n2);
    printf("the prime number between %d and %d are:\n", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        prime = 1;
        if (i <= 1)
        {
            prime = 0;
        }
        else
        {
            for (j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime == 1)
        {
            printf("%d\n", i);
        }
    }

        return 0;
    }
