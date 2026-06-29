#include <stdio.h>
struct Library
{
    int ID;
    char title[50];
    char author[30];
    float price;
};

int main()
{
    int i;
    struct Library l[3];
    printf("== MINI Library management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for book %d:\n", i + 1);
    
    printf("enter the Book ID:");
    scanf("%d", &l[i].ID);
    printf("enter the BOOK TITLE: ");
    scanf("%s", l[i].title);
    printf("enter author name: ");
     scanf("%s", l[i].author);
     printf("Price: ");
      scanf("%f", &l[i].price);
   
    printf("\n");
    }
    printf("------------------------------------------------\n");
    printf("BOOKID\t\tTITLE\tAUTHOR\t\tPRICE\n");
    printf("------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%d\t\t%s\t\t%s\t\t%.2f\n",l[i].ID,l[i].title,l[i].author,l[i].price);
    }
    printf("==================================================\n");

    return 0;
}