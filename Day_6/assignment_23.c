#include <stdio.h>

int main()
{
    int n;
    int c = 0;
    printf("enter an integer:");
    if (scanf("%d", &n) != 1)
    {
        printf("invalid input.");
        return 1;
    }
    int temp = n;
    while (n > 0)
    {
        n = n & (n - 1);
        c++;
    }
    printf("the number of set bits in %d is:%d\n", temp, c);

    return 0;
}
