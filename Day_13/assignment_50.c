#include <stdio.h>

int main()
{
    int n, i;
    float s = 0;
    printf("enter the number of elements of array");
    if (scanf("%d", &n)!=1 || n<=0)
    {
      printf("invalid array input");
      return 1;
    }
    
    int a[n];
    printf("enter the elements of array");
    for (i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }
   float avg = s / n;
    printf("the sum and average of the array is %.1f %.2f", s, avg);

    return 0;
}