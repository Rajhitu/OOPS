/*Q1.Create a class student which stores name_025, roll_025 number and age_025 of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.using Constructor inheritance*/
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

        cout << "name , roll , age is" << name_025 <<" " << roll_025<<" " << age_025<<"\n";
    }

};
class test : public student
{
    int marks[5];

public:
    test(int *mark,char *n, int rol, int age):student(n,rol,age)
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = *mark++;
        }
    }
    void displaym()
    {

        cout << "marks in 5 subject is" <<"\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<marks[i]<<" ";
        }
        
    }
};
int main()
{
    int roll_025, age_025, marks[5];
    char name_025[100];

    cout << "enter name_025 roll_025 age_025 : ";
    gets(name_025);
    cin >> roll_025>>age_025;

    cout << "enter the marks in 5 subject";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    //CREATING OBJECT OF ONLY THE DERIVED CLASS
    test t(marks,name_025, roll_025, age_025);
  
    cout << "the entered details of student are\n";
    t.displayd();

    t.displaym();

    return 0;
}