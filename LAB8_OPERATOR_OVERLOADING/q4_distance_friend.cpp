//Q3.distance(>)operator
#include <bits/stdc++.h>
using namespace std;

class db_025
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
        cout << feet_025 << "''" << inches_025 << "'\n";
    }
    friend bool operator >(db_025, db_025);
};

bool operator >(db_025 a, db_025 b)
{
    float ta, tb;
    ta = a.feet_025 + a.inches_025 / 12.0;
    tb = b.feet_025 + b.inches_025 / 12.0;

    return (ta > tb)
        ? true : false;
}
int main()
{
    db_025 a[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 << " distance in feet and inches ";

        a[i].input();
    }
    if (a[0]> a[1])
    {
        cout << "greatet distance is: \t";
        a[0].display();
    }
    else
        a[1].display();

    

    return 0;
}
