#include <stdio.h>

int main()
{
    int n, sum = 0, d;
    printf("enter the digit to find sum:");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("the sum of the digits=%d", sum);

    return 0;
}
