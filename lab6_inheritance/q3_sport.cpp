/*Q3.Extend the program ii. to include a class sports, which stores the marks_025 in sports activity. Derive the result class from the classes ‘test’ and ‘Activities’. Calculate the total marks_025
and percentage of a student.*/

#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char name_025[50];
    int roll_025, age_025;

public:
    void inputd(char *n, int rol, int ag)
    {
        strcpy(name_025, n);
        roll_025 = rol;
        age_025 = ag;
    }
    void displayd()
    {

        cout << "name_025 , roll_025 , age_025 is" << name_025 << " " << roll_025 << " " << age_025 << "\n";
        cout << "\n.............................................................\n";
    }
};
class test : virtual public student
{

public:
    int marks_025[3];
    void inputm(int *mark)
    {
        for (int i = 0; i < 3; i++)
        {
            marks_025[i] = *mark++;
        }
    }
    void displaym()
    {

        cout << "marks_025 in 3 subject is"
             << "\n";
        for (int i = 0; i < 3; i++)
        {
            cout << marks_025[i] << " ";
        }
        cout << "\n";
        cout << "\n.............................................................\n";
    }
};
class sport : virtual public student
{

public:
    int activity[2];
    void inputa(int *activ)
    {
        for (int i = 0; i < 3; i++)
        {
            activity[i] = *activ++;
        }
    }
    void displaya()
    {

        cout << "marks_025 in Activity  is"
             << "\n";
        for (int i = 0; i < 2; i++)
        {
            cout << activity[i] << " ";
        }
        cout << "\n";
        cout << "\n.............................................................\n";
    }
};
class result : public test,public sport
{
    float perc;
    int total_marks = 0;
    char grade;

public:
    void gradecal()
    {

        for (int i = 0; i < 3; i++)
        {
            total_marks = total_marks + marks_025[i];
        }
        for (int i = 0; i < 2; i++)
        {
            total_marks = total_marks + activity[i];
        }
        perc = total_marks / 5.0;
        if (perc >= 90)
        {
            cout << "grade O";
            grade = 'O';
        }
        else if (perc >= 80)
        {
            cout << "grade A";
            grade = 'A';
        }
        else if (perc >= 60)
        {
            cout << "grade B";
            grade = 'B';
        }
        else if (perc >= 40)
        {
            cout << "grade C";
            grade = 'C';
        }
        else
        {
            cout << "you are fail";
            grade = 'F';
        }
    }
};
int main()
{
    int roll_025, age_025, marks_025[3],activ_marks[2];
    char name_025[100];

    cout << "enter name_025 roll_025 age_025 : ";
    gets(name_025);
    cin >> roll_025 >> age_025;

    cout << "enter the marks_025 in 3 subject";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks_025[i];
    }
     cout << "enter the marks_025 in 2 Activity ";
    for (int i = 0; i < 2; i++)
    {
        cin >> activ_marks[i];
    }

    //CREATING OBJECT OF ONLY THE DERIVED CLASS
    result t;
    t.inputd(name_025, roll_025, age_025);
    t.inputm(marks_025);
    t.inputa(activ_marks);

    cout << "the entered details of student are\n";
    t.displayd();

    t.displaym();
    t.displaya();
    t.gradecal();

    return 0;
}