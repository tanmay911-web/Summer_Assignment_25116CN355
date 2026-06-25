#include <stdio.h>

int main()
{
    int age, citizen;
    printf("enter your age");
    scanf("%d", &age);
    printf("are you a citizen?( 1 for yes and NO for 2)");
    scanf("%d", &citizen);
    if (age >= 18 && citizen == 1)
    {
        printf("you are eligible");
    }
    else
    {
        printf("you are not eligible");
    }

    return 0;
}