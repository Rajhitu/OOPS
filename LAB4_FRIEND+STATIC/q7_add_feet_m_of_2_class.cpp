/*Q7.Create two classes DM and DB which store the value of distances.
DM stores distances in meters and centimeters and DB in feet_025 and
inches_025. Write a program that can read values for the class objects and
add one object of Dm with another object of DB. Use friend function
to carry out the operation. The object that stores the results may be a
DM object or DB object, depending on the units in which the results
are required. The display should in the format of feet_025 and inches_025 or
meters and centimeters depending on the object on display.*/
#include <bits/stdc++.h>
using namespace std;
class db;
class dm
{

    int m_025;
    int cm_025;

public:
    void input()
    {

        cin >> m_025 >> cm_025;
    }
    friend void add(db, dm);
};
class db
{

    int feet_025;
    int inches_025;

public:
    void input()
    {

        cin >> feet_025 >> inches_025;
    }
    friend void add(db, dm);
};

void add(db a, dm b)
{
    b.m_025 = b.m_025 + 0.3 * a.feet_025;
    b.cm_025 = b.cm_025 + (0.3 / 12 * a.inches_025);
    cout << "\nadded value of feet and meter is " << b.m_025 << "m " << b.cm_025 << "cm ";
}
int main()
{
    db a;
    dm b;
    cout << "\nenter the value of m and cm ";
    b.input();
    cout << "\nenter the value of feet and inches";
    a.input();
    add(a, b);

    return 0;
}
