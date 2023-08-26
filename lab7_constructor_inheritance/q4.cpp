/*Q4.Create a_025 class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle. Include the relevant data members and functions in all the classes. Find the area of each
shape and display it.*/

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class area
{
public:
    void acircle(int r_025)
    {
        cout << "area of circle is " << 3.14 * r_025 * r_025 << "squnit";
    }
    void arectangle(int l_025, int b_025)
    {
        cout << "area of rectangle is " << l_025 * b_025 << "squnit";
    }
    void atriangle(int a_025, int b_025, int c_025)
    {
        float s = (a_025 + b_025 + c_025) / 2.0;
        float area = pow((s * (s - a_025) * (s - b_025) * (s - c_025)), 1.0 / 2);
        cout << "area of triangle is " << area << " squnit";
    }
};
class circle : public area
{

public:
    int r_025;
    circle(int r_025)
    {
        r_025 = r_025;
    }
};
class rectangle : public area
{
    int l_025, b_025;

public:
    int r_025;
    rectangle(int l1_025, int b1_025)
    {
        l_025 = l1_025;
        b_025 = b1_025;
    }
};
class triangle : public area
{

public:
    int a_025,b_025,c_025;
    triangle(int a1,int b1,int c1)
    {
       a_025=a1;
       b_025=b1;
       c_025=c1;
    }
};
int main()
{
    int n;
    cout << "Press 1 to calculate the area of circle\n";
    cout << "Press 2 to calculate the area of rectangle\n";
    cout << "Press 3 to calculate the area of traingle\n";
    cin >> n;

    switch (n)
    {
    case 1:
    {

        int r_025;
        cout << "enter the radius";
        cin >> r_025;

        circle t(r_025);
        t.acircle(r_025);
        break;
    }
    case 2:
    {
        int l_025, b_025;

        cout << "enter the length and breadth";
        cin >>l_025>>b_025;
        rectangle t(l_025,b_025);
        t.arectangle(l_025,b_025);
        break;
    }
    case 3:
    {
        
        int a_025, b_025, c_025;
        cout << "enter the  3 sides";
        cin >> a_025 >> b_025 >> c_025;
        triangle t(a_025, b_025, c_025);
        t.atriangle(a_025, b_025, c_025);
        break;
    }

    default:
    cout<<"\nWrong Imtput";
        break;
    }

    return 0;
}