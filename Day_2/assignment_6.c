#include <stdio.h>

int main()
{
    int r = 0, d, n;
    printf("enter the number to be reversed:");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    printf("the reverse of the number is:%d", r);
    return 0;
}
