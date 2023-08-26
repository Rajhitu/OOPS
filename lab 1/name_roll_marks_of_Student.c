

//WAP to input name, roll number and marks in 5 subjects for a student, and
//display it.
#include <stdio.h>
struct student
{
    char name[100];
    int rollno;
    float marks[5];
};

int main()
{
    struct student s;

    printf("enter the name of student ");
    scanf("%[^\n]s", s.name);

    printf("enter the roll no. ");
    scanf("%d", &s.rollno);

    printf("enter the marks of 5 subj ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&s.marks[i]);
    }

    printf("The nameof the student is: %s \n Roll is :%d \n", s.name, s.rollno);
    printf("the marks of 5 subject are");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", s.marks[i]);
    }

    return 0;
}
