/*Q2.Extend the program i. to derive a class from result from class ‘test’ which includes
member function to calculate total marks and percentage of a student. Input the data for a
student and display his/her grade..*/
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char name_025[50];
    int roll_025, age_025;

public:
    student(char *n, int rol, int ag)
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
class test : public student
{

public:
    int marks[5];
    test(int *mark,char *n, int rol, int ag):student(n,rol,ag)
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = *mark++;
        }
    }
    void displaym()
    {

        cout << "marks in 5 subject is"
             << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\n";
        cout << "\n.............................................................\n";
    }
};
class result : public test
{
    float perc;
    int total_marks = 0;
    char grade;

public:
  result(int *mark,char *n, int rol, int ag):test(mark,n,rol,ag)
  {
      
  }
    void gradecal()
    {

        for (int i = 0; i < 5; i++)
        {
            total_marks = total_marks + marks[i];
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
    int roll_025, age_025, marks[5];
    char name_025[100];

    cout << "enter name_025 roll_025 age_025 : ";
    gets(name_025);
    cin >> roll_025 >> age_025;

    cout << "enter the marks in 5 subject";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    //CREATING OBJECT OF ONLY THE DERIVED CLASS
    result t(marks,name_025, roll_025, age_025);
   
    cout << "the entered details of student are\n";
    t.displayd();

    t.displaym();
    t.gradecal();

    return 0;
}