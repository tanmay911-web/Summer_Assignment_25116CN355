#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int flcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int x, y, lcm;
    printf("enter the numbers:");
    scanf("%d %d", &x, &y);
    lcm = flcm(x, y);
    printf("the lcm of 2 numbers are:%d", lcm);
    return 0;
}
