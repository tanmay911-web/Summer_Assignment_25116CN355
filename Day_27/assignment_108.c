#include <stdio.h>
struct student_marks
{
    int roll;
    char name[30];
    float math, science, english;
    float total, per;
    char grade;
};

int main()
{
    int i;
    struct student_marks s[3];
    printf("==student marksheet genration system==\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("entering data for student %d:\n", i + 1);

        printf("enter the roll number:");
        scanf("%d", &s[i].roll);
        printf("enter the first name");
        scanf("%s", s[i].name);
        printf("enter marks of math science and english");
        scanf("%f %f %f", &s[i].math, &s[i].science, &s[i].english);
        s[i].total = s[i].math + s[i].science + s[i].english;
        s[i].per = (s[i].total / 300) * 100;
        if (s[i].per >= 80)
        {
            s[i].grade = 'A';
        }
        else if (s[i].per >= 60)
        {
            s[i].grade = 'B';
        }
        else if (s[i].per >= 40)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'F';
        }

        printf("\n");
    }
    printf("               GENERTATED MARKSHEET           ");
    for (i = 0; i < 3; i++)
    {
        printf("\n---marksheet for roll num : %d---\n", s[i].roll);
        printf("NAME:     %s\n", s[i].name);
        printf("MATH:      %.1f / 100\n", s[i].math);
        printf("SCI:      %.1f / 100\n", s[i].science);
        printf("ENG:      %.1f / 100\n", s[i].english);
        printf("-----------------------------------------\n");
        printf("TOTAL:      %.1f / 300\n", s[i].total);
        printf("PERCENTAGE:      %2.f%%\n", s[i].per);
        printf("GRADE:      %c\n", s[i].grade);
        printf("------------------------------------------\n");
    }
    return 0;
}
