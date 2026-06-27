#include <stdio.h>
struct salaryrecord
{
    int ID;
    char name[30];
    float basic;
    float hra;
    float da;
    float pf;
    float gross;
    float netsalary;
};

int main()
{
    int i, n = 3;
    struct salaryrecord emp[3];
    printf("==salary management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for employee %d:\n", i + 1);

        printf("enter the employee ID: ");
        scanf("%d", &emp[i].ID);
        printf("enter the employee name: ");
        scanf("%s", emp[i].name);
        printf("basic salary: ");
        scanf("%f", &emp[i].basic);
        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.40;
        emp[i].pf = emp[i].basic * 0.12;

        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
         emp[i].netsalary= emp[i].gross- emp[i].pf;

        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    printf("EMP ID\t\tname\tbasic\t\thra\t\tPf-\t\tnetsalary\n");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%d\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", emp[i].ID, emp[i].name, emp[i].basic, emp[i].hra,emp[i].pf,emp[i].netsalary);
    }
    printf("=========================================================================\n");

    return 0;
}