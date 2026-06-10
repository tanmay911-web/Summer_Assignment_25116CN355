#include <stdio.h>
#include <math.h>
int count(int m)
{
    int count = 0;
    while (m > 0)
    {
        count++;
        m = m / 10;
    }
    return count;
}
int powe (int b , int e){
    int re=1;
    for ( int i = 0;i < e;i++)
    {
       re *= b;
    }
    return re;
}
void armstr(int n)
{
    int d, r = 0, x;

    int c = count(n);
    x = n;
    while (x > 0)
    {
        d = x % 10;
        r = r + powe(d, c);
        x = x / 10;
    }
    if (n == r)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not armstrong number");
    }
}

int main()
{
    int z;
    printf("enter the number:");
    scanf("%d", &z);
    if (z < 0)
    {
        printf("please enter the positive integer");
    }
    else
    {
        armstr(z);
    }
    return 0;
}
