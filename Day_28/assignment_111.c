#include <stdio.h>
struct tick
{
    long long tick;
    char name[30];
    char destination[30];
    float price;
    
};

int main()
{
    int i, n = 3;
    struct tick tk[3];
    printf("==ticket booking system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for ticket %d:\n", i + 1);

        printf("enter the ticket num: ");
        scanf("%lld", &tk[i].tick);
        printf("enter the passenger name: ");
        scanf("%s", tk[i].name);
        printf("enter the destination: ");
        scanf("%s", tk[i].destination);
        printf("ticket price: ");
        scanf("%f",&tk[i].price);
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    printf("TICKET NO\tpassenger\tdestination\tprice\n");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%lld\t\t%s\t\t%s\t\t%.2f\n",tk[i].tick,tk[i].name,tk[i].destination,tk[i].price);
    }
    printf("=========================================================================\n");

    return 0;
}
