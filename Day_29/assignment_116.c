#include <stdio.h>
struct item
{
    int ID;
    char name[50];
    int qty;
    float price;
};

int main()
{
    int i;
    struct item l[3];
    printf("==Inventory management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for item %d:\n", i + 1);
    
    printf("enter the  ID:");
    scanf("%d", &l[i].ID);
    printf("enter the Item name: ");
    scanf("%s", l[i].name);
    printf("enter quantity: ");
     scanf("%d", &l[i].qty);
     printf("Price: ");
      scanf("%f", &l[i].price);
   
    printf("\n");
    }
    printf("-----------------------------------------------\n");
    printf("ID\t\tNAME\tquantity\t   PRICE\n");
    printf("------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n",l[i].ID,l[i].name,l[i].qty,l[i].price);
    }
    printf("==================================================\n");

    return 0;
}