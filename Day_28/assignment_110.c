#include <stdio.h>
struct bankaccount
{
    long long ID;
    char name[30];
    float balance;
    
};

int main()
{
    int i, n = 3;
    struct bankaccount emp[3];
    printf("==Bank management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for account %d:\n", i + 1);

        printf("enter the account NO: ");
        scanf("%lld", &emp[i].ID);
        printf("enter the holder name: ");
        scanf("%s", emp[i].name);
        printf("enter opening balance: ");
        scanf("%f", &emp[i].balance);
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    printf("ACC NO\t\tname\t\tbalance\n");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%lld\t\t%s\t\t%.2f\n",emp[i].ID,emp[i].name,emp[i].balance);
    }
    printf("=========================================================================\n");

    return 0;
}