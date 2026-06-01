#include <stdio.h>
int gcd(int a,int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int x, y, hcf;
    printf("enter the 2 numbers:");
    scanf("%d %d", &x, &y);
    hcf = gcd(x, y);
    printf("the hcf of the numbers is: %d", hcf);

    return 0;
}
