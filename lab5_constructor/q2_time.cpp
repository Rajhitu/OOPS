/*Q2 Create a class which stores time1 in hh:mm format. Include all the constructors.
The parameterized constructor should initialize the minute value to zero, if it
is not provided.*/
#include <iostream>
using namespace std;
class time1
{
    int hr_025;
    int min_025;

public:
    time1() //default cons
    {
        hr_025 = 10;
        min_025 = 20;
    }
    time1(int t, int j = 0) //parameterized
    {

        hr_025 = t;
        min_025 = j;
    }
    time1(const time1 &a) //copy cons
    {

        hr_025 = a.hr_025;
        min_025 = a.min_025;
    }
    void display()
    {
        cout << hr_025 << ":" << min_025;
    }
};
int main()
{
    int a, call = 0;
    ;

    cout << "\npress 1 to create obj using default constructor"
         << "\npress 2 to create obj using paramerized constructor"
         << "\npress 3 to create obj using copy constructor";
    cin >> a;
    switch (a)
    {
    case 1:
    {
        time1 b;

        b.display();
        break;
    }
    case 2:
    {
    x:
        int x, y;
        cout << "enter the value of hr_025 and min_025\n";
        cin >> x >> y;

        if (call == 0)
        {
            time1 c(x, y);
            c.display();
            time1 d(c);
        }

        else
        {
            cout << "the value copied\n";
            time1 c(x, y);
            time1 d(c);
            d.display();
        }

        break;
    }
    case 3:
    {
        call = 1;
        goto x;
    }

    default:
        break;
    }

    return 0;
}