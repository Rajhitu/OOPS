#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[100];
} s[5];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("enter the roll and first name of student%d\n", i + 1);
        scanf("%d %s", &s[i].roll, &s[i].name);
    }

    for (int i = 0; i < 2; i++)
    {    for (int j = 0; j < 2 - i; j++)
        {
            
                if (s[j].roll > s[j + 1].roll)
                {
                    int t = s[j].roll;
                    s[j].roll = s[j +1].roll;
                    s[j + 1].roll = t;
                    char b[100];
                    strcpy(b, s[j].name);
                    strcpy(s[j].name, s[j + 1].name);
                    strcpy(s[j + 1].name, b);
                }
            
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("asscending order of the roll and first name of student%d \n", i + 1);
        printf("%d \n%s\n", s[i].roll, s[i].name);
    }
    return 0;
}