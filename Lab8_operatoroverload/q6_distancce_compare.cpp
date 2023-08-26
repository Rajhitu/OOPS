/*Q6.WAP to add two objects of distance class. Overload the operator ‘>’ to
compare two objects and return the object with larger distance value and
display it. Overload the ‘==’ operator to compare and display whether two
given objects contain same distance value.*/

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
        cout << feet_025 << "'' " << inches_025 << "'\n";
    }
    bool operator>(distance_025);
    bool operator==(distance_025);
};

bool distance_025 ::operator>(distance_025 b)
{
    float ta, tb;
    ta = feet_025 + inches_025 / 12.0;
    tb = b.feet_025 + b.inches_025 / 12.0;

    return (ta > tb)
               ? true
               : false;
}
bool distance_025 ::operator==(distance_025 b)
{
    float ta, tb;
    ta = feet_025 + inches_025 / 12.0;
    tb = b.feet_025 + b.inches_025 / 12.0;

    return (ta == tb)
               ? true
               : false;
}
int main()
{
    distance_025 a[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 << " distance in feet and inches ";

        a[i].input();
    }
cout << "greatet distance is: \t";
    if (a[0] > a[1])
    {
        
        a[0].display();
    }
    else
        a[1].display();

    if (a[0] == a[1])

        cout << "both the distannce are equal \n ";
    else
        cout << "both are different\n";

    return 0;
}
