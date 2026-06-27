#include <stdio.h>
struct contact
{
    long long phone;
    char name[30];
    char email[30];
    char city[20];
    
};

int main()
{
    int i, n = 3;
    struct contact c[3];
    printf("==contact management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for contact %d:\n", i + 1);

        printf("enter the contact name: ");
        scanf("%s", c[i].name);
        printf("enter the phone NO: ");
        scanf("%lld", &c[i].phone);
        printf("enter the email: ");
        scanf("%s", c[i].email);
        printf("CITY: ");
        scanf("%s",c[i].city);
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    printf("Name\tPhone NO\t Email\tcity\n");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%s\t\t%lld\t\t%s\t\t%s\n",c[i].name,c[i].phone,c[i].email,c[i].city);
    }
    printf("=========================================================================\n");

    return 0;
}
