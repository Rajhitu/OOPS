/* Q4
Create a class which stores name_025, roll_025 number and oop marks_025 for a
student. Input data for n students. Find the average marks_025 scored by
n students, store it as a data member of the class and display it using
a function which may be called without object.*/
#include <bits/stdc++.h>
using namespace std;
class stud
{

    char name_025[10];
    int roll_025, marks_025;
    static float avg;

public:
    void input()
    {

        cin >> name_025 >> roll_025 >> marks_025;
    }
    static void avrg(stud a[], int n)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i].marks_025;
        }
        avg = sum / n;
        cout << "average of the data is" << avg;
    }
};
float stud::avg;
int main()
{
    stud a[5];
    int n;
    cout << "how many students u have";
    cin >> n;
    cout<<"enter the name roll and oop marks\n";
    for (int i = 0; i < n; i++)
    {
        a[i].input();
    }
    stud::avrg(a, n);

    return 0;
}