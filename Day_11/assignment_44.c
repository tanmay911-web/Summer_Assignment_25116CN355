#include <stdio.h>
int factorial(int n)
{

    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", & a);
    int fact = factorial(a);
    printf("the factorial of the number is %d", fact);
    return 0;
}
