//Q2.Create a class which stores name_025, roll_025 number and total marks for a student.
//Input the data for a student and display it.
#include <iostream>
using namespace std;
class stud
{
    char 
    name_025[20];
    int roll_025, total_marks_025;

public:
    void input()
    {
        cout << "enter the name ";
        gets(name_025);
        cout << "enter roll_025 ";
        cin >> roll_025 ;
        cout << "enter marks in 5 subj";
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            cin>>total_marks_025;
            sum=sum+total_marks_025;
        }
        total_marks_025=sum;
        
    }
    void output()
    {
        cout << "The name roll and total marks are " << name_025 <<" " << roll_025<<" " << total_marks_025;
    }
};
 int main()
{
    stud s;
    s.input();
    s.output();

    return 0;
}
