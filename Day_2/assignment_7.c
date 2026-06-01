#include <stdio.h>

int main()
{
    int n, product = 1, d;
    printf("Enter the digit to find the product:");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        product = product * d;
        n = n / 10;
    }
    printf("The product of the digit is %d", product); 
    return 0;
}
