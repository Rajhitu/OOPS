//Q5 Create a class distance which stores a distance in feet_025 and inches_025. Input 2
//distance values in objects, add them, store the resultant distance in an object
//and display it.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class dist
{

    int feet_025, inches_025;

public:
    void input()
    {
        cout << "enter the value of feet and inches \n";
        cin >> feet_025 >> inches_025;
    }
    void display()
    {

        cout << "the required distance is " << feet_025 << " feet " << inches_025 << " inches";
    }
    void add(dist a, dist b) // 1ST METHOD
    {

        inches_025 = a.inches_025 + b.inches_025;
        feet_025 = a.feet_025 + b.feet_025 + inches_025 / 12;
        inches_025 = inches_025 % 12;
        cout << "the added distance is";
    }
    dist add(dist a) // 2ST METHOD
    {
        dist c;
        c.inches_025 = a.inches_025 + inches_025;
        c.feet_025 = a.feet_025 + feet_025 + inches_025 / 12;
        c.inches_025 = c.inches_025 % 12;

        return c;
    }

} d[2];
int main()
{
    for (int i = 0; i < 2; i++)
    {
        d[i].input();
    }
    dist c;
    c.add(d[0], d[1]);
    // c=d[0].add(d[1]);
    // cout<<"the added value of the disstance is \n";
    c.display();

    return 0;
}
