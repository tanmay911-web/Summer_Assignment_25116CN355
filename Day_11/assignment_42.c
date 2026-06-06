#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    printf("enter the value to comapare:");
    scanf("%d %d", &x, &y);
    int m = max(x, y);
    printf("the maximum number is %d", m);

    return 0;
}
