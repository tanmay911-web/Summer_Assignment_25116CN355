#include <stdio.h>
#include <math.h>

int main()
{
    int r, d, res = 0, n, c = 0, temp1;
    printf("enter the number to check:");
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }
    temp1 = n;
    while (temp1 > 0)
    {
        temp1 = temp1 / 10;
        c++;
    }

    temp1 = n;

    while (temp1 > 0)
    {
        d = temp1 % 10;
        res = res + (int)round(pow(d, c));
        temp1 = temp1 / 10;
    }
    temp1 = n;
    if (res == n)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not armstrong");
    }

    return 0;
}
