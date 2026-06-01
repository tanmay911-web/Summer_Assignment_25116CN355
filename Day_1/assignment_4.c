#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter the number to count digits:");
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        if (n < 0)
            n = -n;

        while (n > 0)

        {
            n = n / 10;
            count++;
        }
    }
    printf("the number of digits=%d", count);

    return 0;
}
