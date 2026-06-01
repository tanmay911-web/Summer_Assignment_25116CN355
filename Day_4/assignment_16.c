#include <stdio.h>
#include <math.h>

int main()
{
    int d, res, n, c, temp1, limit;

    printf("Enter the upper limit to print Armstrong numbers: ");
    if (scanf("%d", &limit) != 1)
    {
        return 1;
    }

    printf("Armstrong numbers up to %d are:\n", limit);

    for (n = 1; n <= limit; n++)
    {
        c = 0;
        temp1 = n;

        while (temp1 > 0)
        {
            temp1 = temp1 / 10;
            c++;
        }

        res = 0;
        temp1 = n;
        while (temp1 > 0)
        {
            d = temp1 % 10;
            res = res + (int)round(pow(d, c));
            temp1 = temp1 / 10;
        }

        if (res == n)
        {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}
