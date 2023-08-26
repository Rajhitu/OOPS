/*Q8.Write overloaded functions to find the area of scalene,isosceles and equilateral triangle
Area of scalene triangle = √(s(s-a)(s-b)(s-c))
Area of isosceles triangle = ½[√(a 2  − b 2  ⁄4) × b]
Area of equilateral triangle= (√3/4)a.*/
#include <iostream>
#include <math.h>
using namespace std;
void area(int a, int b, int c)
{float s = (a + b + c) / 2.0;
    float area = pow((s * (s - a) * (s - b) * (s - c)), 1 / 2.0);

    
    cout << "area of scalene triangle is :" << area;
}
void area(int a, int b)
{
    float area = 1 / 2.0 * (pow((a * a - b * b), 1 / 2) / 2.0 * b);
    cout << "area of isosceles triangle is :" << area;
}
void area(int a)
{
    float area = (pow(3.0, 1.0 / 2) / 4.0) * a * a;
    cout << "area of equilateral triangle is :" << area;
}

int main()
{
    int n;
    cout << "press1 to calculate area of scalene triangle\n"
         << "press 2 to calculate area of isocesles triangle\n"
         << "press 3 to calculate area of eqilateral triangle\n";
    cin >> n;
    switch (n)
    {
    case 1:
        int a, b, c;
        cout << "enter the value of 3 sides\n ";
        cin >> a >> b >> c;
        area(a, b, c);
        break;
    case 2:
        int d, e;
        cout << "enter the value of 2 sides\n ";
        cin >> d >> e;
        area(d, e);
        break;
    case 3:
    {
        int a;
        cout << "enter the value of  1 side\n ";
        cin >> a;
        area(a);
        break;
    }
    default:
        break;
    }

    return 0;
}