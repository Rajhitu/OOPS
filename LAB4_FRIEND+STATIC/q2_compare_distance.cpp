//Q2.Create two classes which stores distance in feet_025, inches_025 and meter,
//centimeter format respectively. Write a function which compares distance
//in object of these classes and displays the larger one.
#include <bits/stdc++.h>
using namespace std;
class db_025;
class dm_025
{

    int m_025;
    int cm_025;

public:
    void input()
    {

        cin >> m_025 >> cm_025;
    }
    friend void compare(db_025, dm_025);
};
class db_025
{

    int feet_025;
    int inches_025;

public:
    void input()
    {

        cin >> feet_025 >> inches_025;
    }
    friend void compare(db_025, dm_025);
};

void compare(db_025 a, dm_025 b)
{
    int tm, tfim;
    tm = b.m_025 + b.cm_025 / 100;
    tfim = (a.feet_025 * 0.3) + ((a.inches_025 / 12) * 0.3);
    if (tfim > tm)

        cout << "\nthe larget one is feet one and the value is " << a.feet_025 << " feet " << a.inches_025 << "inches"
             << "which is equal to " << tfim<<" metre";
    else
        cout << "\nthe larget one is meter one and the value is " << b.m_025 << "meter" << b.cm_025 << "cm_025";
}
int main()
{
    db_025 a;
    dm_025 b;
    cout << "\nenter the value of m and cm ";
    b.input();
    cout << "\nenter the value of feet and inches ";
    a.input();
    compare(a, b);

    return 0;
}
