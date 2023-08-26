/*WAP in C++ to create a class Length having two private data
members as feet_025 &amp; inches_025 and initialize the data members using
constructor . Now input two lengths and find out the greater one
using non-member function. Also count_025 the no. of objects you have
created for this class.*/
#include <iostream>
using namespace std;
class length
{
    int feet_025, inches_025;
    int static count_025;

public:
    length()
    {
        feet_025 = 12;
        inches_025 = 21;
        count_025++;
    }
    void input()
    {
        //cout << "enter the value of feet and inches\n";
        cin >> feet_025;
        cin >> inches_025;
    }
    static void counter()
    {

        cout << "no. of times object are made is " << count_025;
    }
    friend void greatest(length, length);
};
int length::count_025;
void greatest(length a, length b)
{

    if (a.feet_025 > b.feet_025)
    {
        cout << "greatest no. is  " << a.feet_025 << "feet " << a.inches_025 << "inches \n";
    }
    else if (a.feet_025 == b.feet_025)
    {
        if (a.inches_025 > b.inches_025)
        {
            cout << "greatest no. is  " << a.feet_025 << "feet " << a.inches_025 << "inches \n";
        }
        else
        {
            cout << "greatest no. is  " << b.feet_025 << "feet " << b.inches_025 << "inches \n";
        }
    }
    else
    {
        cout << "greatest no. is  " << b.feet_025 << "feet_025" << b.inches_025 << "inches_025\n";
    }
}

int main()
{
    length a, b, c;
    cout << "enter the 1st length in feet and inches\n";
    a.input();
    cout << "enter the 2nd length in feet and inches\n";
    b.input();
    greatest(a, b);
    length::counter();

    return 0;
}