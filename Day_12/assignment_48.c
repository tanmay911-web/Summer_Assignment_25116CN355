#include <stdio.h>
void perfect(int n)
{
    if (n <= 1)
    {
        printf("the number is not perfect number");
        return;
    }
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        printf("the number is perfect number");
    }
    else
    {
        printf("the number is not perfect number");
    }
}

int main()
{
    int z;
    printf("enter the number to be checked:");
  
    scanf("%d", &z);
    perfect(z);

    return 0;
}