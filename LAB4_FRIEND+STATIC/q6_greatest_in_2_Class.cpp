/*Q6Write a program to find out the greatest between two numbers
defined in two different classes by using friend function.
[using friend of one and member of the other class]*/
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class b_025;
class a_025
{
    int no1_025;

public:
    void input()
    {
        cin >> no1_025;
    }
    void greatest(b_025);
};
class b_025
{
    int no2_025;

public:
    void input()
    {
        cin >> no2_025;
    }
    friend void a_025::greatest(b_025);
};
void a_025::greatest(b_025 obj)
{
    if (no1_025 > obj.no2_025)
        cout << "greatest no. is " << no1_025;
    else
        cout << "greatest no. is " << obj.no2_025;
}
int main()
{
    a_025 obj1;
    b_025 obj2;
    cout << "enter the value in 2 different class";
    obj1.input();
    obj2.input();
    obj1.greatest(obj2);

    return 0;
};