//Q3. Modify the program ii) to store marks in 5 subjects. Calculate the total
//marks and percentage of a student and display it.
#include <iostream>
using namespace std;
class stud
{
    char name_025[20];
    int roll_025, total_marks_025;
    float perc;

public:
    void input()
    {
        cout << "enter the name ";
        gets(name_025);
        cout << "enter roll ";
        cin >> roll_025;
        cout << "enter marks in 5 subj";
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> total_marks_025;
            sum = sum + total_marks_025;
        }
        total_marks_025 = sum;
        perc = total_marks_025/ 5;
    }
    void output()
    {
        cout << "The name, roll , total marks and percentage  are \n" << name_025 << " \n" << roll_025<< " \n" << total_marks_025 << " \n" << perc << "%";
    }
};
int main()
{
    stud s;
    s.input();
    s.output();

    return 0;
}
