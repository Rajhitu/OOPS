/*Q3.Create a class time 1 which has three data members: hours, minute and
second. Overload the ++ (post and pre) and -- (post and pre )operator for the
class. Using friend and member function.
 Create a class which stores time1 in hh:mm format. Include all the constructors.
The parameterized constructor should initialize the minute value to zero, if it
is not provided.*/
//using friend function
#include <iostream>
using namespace std;
class time1
{
    int hr_025;
    int min_025;
    int sec;

public:
    time1()
    {
        hr_025 = 0;
        min_025 = 0;
        sec = 0;
    }
    void input(int t, int j, int k) // parameterized
    {

        hr_025 = t;
        min_025 = j;
        sec = k;
    }
    friend void operator++(time1 &a, int)
    {
        a.hr_025++;
        a.min_025++;
        a.sec++;
    }
    friend void operator++(time1 &a)
    {
        ++a.hr_025;
        ++a.min_025;
        ++a.sec;
    }
    friend void operator--(time1 &a, int)
    {
        a.hr_025--;
        a.min_025--;
        a.sec--;
    }
    friend void operator--(time1 &a)
    {
        --a.hr_025;
        --a.min_025;
        --a.sec;
    }

    void display()
    {
        cout << hr_025 << ":" << min_025 << ":" << sec << endl;
    }

} a[2], t;
int main()
{
    int hr, min, sec,c;

    cout << "enter  time\n";
    for (int i = 0; i < 1; i++)
    {
        cout << "enter" << i + 1 << " time in  hr min sec";
        cin >> hr >> min >> sec;

        a[i].input(hr, min, sec);
    }
    cout<<"press1 to post ++\n";
    cout<<"press2 to pre ++\n";
    cout<<"press3 to post --\n";
    cout<<"press4 to pre --\n";
    cin>>c;
    switch (c)
    {
    case 1:
        a[0].display();
        a[0]++;
        a[0].display();
        break;
    case 2:
        a[0].display();
        ++a[0];
        a[0].display();
        break;

    case 3:
        a[0].display();
        a[0]--;
        a[0].display();
        break;
    case 4:
        a[0].display();
        --a[0];
        a[0].display();
        break;

    default:
        break;
    }
    
    return 0;
}