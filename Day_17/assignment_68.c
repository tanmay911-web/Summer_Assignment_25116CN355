#include <stdio.h>

int main()
{
    int n1, n2, i, j;
    printf("enter the size:-\n");
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2];
    printf("enter the elements of array1:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements of array2:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("the common elements of the array is:");

    {
        for (i = 0; i < n1; i++)
        {
            int is_duplicate=0;
            for (int k = 0; k < i; k++)
            {
                if (a[i]==a[k])
                {
                   is_duplicate=1;
                   break;
                }
                
            }
            if (is_duplicate==1)
            {
              continue;
            }
            
            
            for (j = 0; j < n2; j++)
            {
                if (a[i] == b[j])
                {
                    printf("%d ", a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}