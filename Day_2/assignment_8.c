#include <stdio.h>

int main()
{
    int n, temp, r = 0, d;
    printf("enter the number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (temp == r)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }

    return 0;
}
