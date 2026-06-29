//THIS MINI PROJECT IS C BASED CRICKET PERFORMANCE SYSTEM-
//DESIGNED TO EFFICIENTLY STORE, MANAGE,AND DISPLAY PLAYER- 
//STATISTICS LIKE JERSY NUMBER NAMES AND TOTAL RUNS-
//THIS MINI PROJECT IS MADE OF ARRAY OF STRUCTURE,STRING AND FUNCTIONS-
//THIS PROJECT DEMONSTRATES HOW COMBINING STRUCTURE WITH MODULAR FUNCTION
//THANK YOU FOR YOUR ATTENTION!!!!!!

#include <stdio.h>
struct player
{
    int jersey;
    char name[30];
    int runs;
};
struct player p[3];
void input_data()
{
    for (int i = 0; i < 3; i++){
        printf("---player %d Details---\n",i+1);
        printf("Enter the jersey number: ");
        scanf("%d",&p[i].jersey);
        printf("Enter the Player Name: ");
         scanf(" %[^\n]",p[i].name);
         printf("Enter the Total Runs: ");
          scanf("%d",&p[i].runs);
            printf("\n");
}
}
void show_table()
{
int i;
printf("----------------------------------------------------------\n");
printf("JERSY\t\tNAME\t\tRUNS\n");
printf("-----------------------------------------------------------\n");
for ( i = 0; i < 3; i++)
{
   printf("%d\t\t%s\t\t%d\n",p[i].jersey,p[i].name,p[i].runs);

}
printf("=============================================================\n");

}
int main (){
    printf("== CRICKET PERFORMANCE SYSTEM ==\n\n");
    input_data();
    show_table();
}