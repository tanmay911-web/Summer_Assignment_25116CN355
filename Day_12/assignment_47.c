#include <stdio.h>
int fib(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return (fib(i - 1) + fib(i - 2));
    }
}

int main()
{
    int z;
    printf("enter the number of terms:");
        scanf("%d", &z);
    for (int i = 0; i < z; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}