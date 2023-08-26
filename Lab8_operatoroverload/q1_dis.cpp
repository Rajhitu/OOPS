/*Q1A>.WAP to overload following operators for class distance, which stores the
distance in feet and inches.
Binary + to

-add two objects (D3=D1+D2)
-

Unary -*/

#include <bits/stdc++.h>
using namespace std;

class distance_025
{

    int feet_025;
    int inches_025;

public:
    void input()
    {

        cin >> feet_025 >> inches_025;
    }
    void display()
    {
        cout << "sum is---->" << feet_025 << "'' " << inches_025 << "'\n";
    }
    distance_025 operator+(distance_025);
};

distance_025 distance_025 ::operator+(distance_025 b)
{
    distance_025 t;

    t.feet_025 = feet_025 + b.feet_025;
    t.inches_025 = inches_025 + b.inches_025;
    if (t.inches_025 > 11)
    {
        t.feet_025 = t.feet_025 + t.inches_025 / 12;
        t.inches_025 = t.inches_025 % 12;
    }
    return t;
}
int main()
{
    distance_025 a[2], sum;

    for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 << " distance in feet and inches ";

        a[i].input();
    }
    sum = a[0] + a[1];
    sum.display();

    return 0;
}
