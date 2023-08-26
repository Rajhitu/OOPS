/*q5WAP that reads records of n students and find the
 average mark of each student
 # of students above average mark in the class.
 # of students below average mark in the class.
 Sort students in ascending order of their mark.
 Display the name_025 of the student secured highest mark.
 Display the roll_025 number of the student secured highest mark from bottom.*/
#include <iostream>
using namespace std;
class student
{
    char name_025[10];
    int roll_025;
    int marks_025;
    static float avg;

public:
    void input(int i)
    {
        int sum = 0;
        cout << "enter name_025 roll_025 marks_025 of" << i + 1 << "students\n";

        cin >> name_025 >> roll_025 >> marks_025;
    }

    void avrg(class student a[], int n)
    {
        cout << "the avg marks_025 of each student are\n";
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i].marks_025;
        }
        avg = sum / n;
        cout << "avg marks_025 is " << avg;
    }

    void aboveavg(class student a[], int n)
    {
        cout << "the students having marks_025 above avg are \n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].marks_025 > avg)
                cout << a[i].name_025 << "-------->" << a[i].avg << "\n";
        }
    }
    void belowavg(class student a[], int n)
    {
        cout << "the students having marks_025 below avg are \n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].marks_025 < avg)
                cout << a[i].name_025 << "-------->" << a[i].avg << "\n";
        }
    }
    void sortm(class student a[], int n)
    {
        for (int i = 0; i < n - 1; i++)

        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (a[j].marks_025 > a[j + 1].marks_025)
                {

                    student temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        cout << "arranged students in ascending order of marks_025 :\n";
        for (int i = 0; i < n; i++)
        {

            cout << a[i].name_025 << "\t" << a[i].roll_025 << "\t" << a[i].marks_025 << "\n";
        }
    }
    void higmarks(student a[], int n)
    {

        int temp, high = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].marks_025 > high)
            {

                high = a[i].marks_025;
                temp = i;
            }
        }
        cout << "roll_025 no. of student having highest marks_025 are" << a[temp].roll_025;
    }
    void lowmarks(student a[], int n)
    {
        int temp;
        int low = a[0].marks_025;
        for (int i = 0; i < n; i++)
        {
            if (a[i].marks_025 < low)
            {

                low = a[i].marks_025;
                temp = i;
            }
        }
        cout << "roll_025 no. of student having lowest marks_025 is" << a[temp].roll_025;
    }
};
float student::avg;

int main()
{
    student a[10], temp;
    int n,op;
    cout << "how may students you have";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].input(i);
    }
    cout << "press 1 to calcuate avg\n"
         << "press 2 to calcuate above avg\n"
         << "press 3 to calcuate below avg\n"
         << "press 4 to calcuate sort\n"
         << "press 5 to calcuate highest marks_025\n"
         << "press 6 to calcuate lowest marks_025\n";
    cin >> op;
    switch (op)
    {
    case 1:
        temp.avrg(a, n);

        break;
    case 2:
        temp.aboveavg(a, n);

        break;
    case 3:
        temp.belowavg(a, n);

        break;
    case 4:
        temp.sortm(a, n);

        break;
    case 5:
        temp.higmarks(a, n);

        break;
    case 6:
        temp.lowmarks(a, n);

        break;

    default:
        break;
    }

    return 0;
}