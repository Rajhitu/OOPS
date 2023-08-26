

/*  WAP to input name, roll number and marks in 5 subjects for n number of
    students. Write functions to:-
        a. Find total marks and percentage of all n students.
        b. Display details of a student with a given roll number.
        c. Display the details for all the students having percentage in a given
           range.
        d. Sort the array in ascending order of marks*/
#include <stdio.h>
struct student
{
    char name[100];
    int rollno;
    int marks[5];
    float tot, per;
};
void totalmarks_per(struct student s[], int n025)
{
    for (int i = 0; i < n025; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)

        {
            sum = sum + s[i].marks[j];
        }
        s[i].tot = sum;
        s[i].per = (sum / 500) * 100;
    }
}

void display_details(struct student s[], int n025, int rollno)
{
    for (int i = 0; i < n025; i++)
    {
        if (rollno == s[i].rollno)
        {
            printf("The nameof the student is: %s \nRoll is : %d \nMarks of each subject is :", s[i].name, s[i].rollno);
            for (int j = 0; j < 5; j++)
            {
                printf(" %.2f ", s[i].marks[j]);
            }
            printf("\n toal marks : %f \n Percentage : %f \n \n", s[i].tot, s[i].per);
        }
    }
}

void disp_given_range(struct student s[], int n025, int lower_ran, int upper_ran)
{
    for (int i = 0; i < n025; i++)
    {
        if (s[i].rollno >= lower_ran && s[i].rollno <= upper_ran)
        {
            printf("The nameof the student is: %s \nRoll is : %d \nMarks of each subject is :", s[i].name, s[i].rollno);
            for (int j = 0; j < 5; j++)
            {
                printf(" %.2f ", s[i].marks[j]);
            }
            printf("\n toal marks : %f \n Percentage : %f \n \n", s[i].tot, s[i].per);
        }
    }
}

void sort_mark(struct student s[], int n025)
{
    for (int i = 0; i < n025 ; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            for (int j = 0; j < 4 - i; j++)
            {
                if (s[i].marks[j] > s[i].marks[j + 1])
                {
                    int temp = s[i].marks[j + 1];
                    s[i].marks[j + 1] = s[i].marks[j];
                    s[i].marks[j] = temp;
                }
            }
        }
    }
}
int main()
{
    int n025;
    struct student s[10];
    printf("how many students you have ");
    scanf("%d", &n025);
    for (int j = 0; j < n025; j++)
    {
        printf("enter the name of student ");
        scanf("%s",s[j].name);

        printf("Enter the roll no. ");
        scanf("%d",&s[j].rollno);

        printf("enter the marks of 5 subj ");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &s[j].marks[i]);
        }
    }
    totalmarks_per(s, n025);
    sort_mark(s, n025);
    disp_given_range(s,n025,30,40);
    display_details(s,n025,9);

for(int j = 0; j < n025; j++)
{
    printf("The name of the student is: %s \nRoll is : %d \nMarks of each subject is :", s[j].name, s[j].rollno);
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", s[j].marks[i]);
    }
    printf("\n toal marks : %.2f \n Percentage : %.2f  \n \n", s[j].tot, s[j].per);
}

return 0;
}
