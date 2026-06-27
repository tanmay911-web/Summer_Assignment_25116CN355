#include <stdio.h>
struct employee
{
    int ID;
    char name[30];
    char dep[20];
    float salary;
};

int main()
{
    int i;
    struct employee emp[3];
    printf("==Employee management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for employee %d:\n", i + 1);
    
    printf("enter the employee ID: ");
    scanf("%d", &emp[i].ID);
    printf("enter the employee name: ");
    scanf("%s", emp[i].name);
    printf("ENTER THE DEPARTMENT ");
    scanf("%s",emp[i].dep);
    printf("salary: ");
    scanf("%f",&emp[i].salary);
   
    printf("\n");
    }
    printf("--------------------------------------------------\n");
    printf("EMP ID\t\tname\tDepartment\tsalary\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%d\t\t%s\t\t%s\t\t%.2f\n",emp[i].ID,emp[i].name,emp[i].dep,emp[i].salary);
    }
    printf("===================================================\n");

    return 0;
}