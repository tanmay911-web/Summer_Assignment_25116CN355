#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i * i <=n ; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main()
{
    int a, p;
    printf("enter the number to check:");
    scanf("%d", &a);
    printf(prime(a) ? "prime number " : "not a prime");

        return 0;
}
