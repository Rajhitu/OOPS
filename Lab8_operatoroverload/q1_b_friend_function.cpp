
/*Q1B>Add an object to an integer, where the integer should be added
to the inches value ( D2=4+D1)*/


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
 friend distance_025 operator +(int,distance_025);
};

distance_025 operator +(int a, distance_025 b)
{
    distance_025 t;

    t.feet_025 = a + b.feet_025;
    t.inches_025 =  b.inches_025;
    if (t.inches_025 > 11)
    {
        t.feet_025 = t.feet_025 + t.inches_025 / 12;
        t.inches_025 = t.inches_025 % 12;
    }
    return t;
}
int main()
{
    distance_025 a, sum;
    int x;


    
        cout << "enter distance in feet and inches ";

        a.input();
        cout<<"\nEnter a number which u want to add: ";
        cin>>x;
    
    sum = x + a;
    sum.display();

    return 0;
}
