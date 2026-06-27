#include <stdio.h>
struct student
{
    int rollNo;
    char name[30];
    float math, science, english;
    float total;
    float percent;
};

int main()
{
    int i;
    struct student s[3];
    printf("==student record management system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for student %d:\n", i + 1);
    
    printf("enter the roll number:");
    scanf("%d", &s[i].rollNo);
    printf("enter the first name");
    scanf("%s", s[i].name);
    printf("enter marks of math science and english");
    scanf("%f %f %f", &s[i].math, &s[i].science, &s[i].english);
    s[i].total = s[i].math + s[i].science + s[i].english;
    s[i].percent = (s[i].total / 300) * 100;
    printf("\n");
    }
    printf("--------------------------------------------\n");
    printf("ROLLNO.\t\tname\ttotalmarks\tpercentage\n");
    printf("---------------------------------------------\n");
    for (i = 0; i < 3; i++)

    {
        printf("%d\t\t%s\t\t%.2f\t\t%.2f%%\n",s[i].rollNo,s[i].name,s[i].total,s[i].percent);
    }
    printf("================================================\n");

    return 0;
}