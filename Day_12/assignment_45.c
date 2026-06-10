#include <stdio.h>
void pail(int n)
{
    int x = n;
    int r = 0;
    while (x > 0)
    {
        int d = x % 10;
        r = r * 10 + d;
        x = x / 10;
    }
    if (n == r)
    {
        printf("the number is palindrome number");
    }
    else
    {
        printf("the number is not palindrome number");
    }
}

int main()
{
    int z;
    printf("enter the number:");
    scanf("%d", &z);
    pail(z);
    return 0;
}
