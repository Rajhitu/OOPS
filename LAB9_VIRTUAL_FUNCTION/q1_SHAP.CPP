//Create a class shape. Derive three classes from it; Circle, Square and
//Triangle. Find area of each shape and display it, using virtual function.
#include <iostream>
#include <math.h>
using namespace std;

class shape
{
public:
    virtual void inp()
    {
    }
    virtual void area()
    {
    }
};

class circle : public shape
{
    int r;

public:
    void inp()
    {
        cout << "\nEnter the value of radius";
        cin >> r;
    }
    void area()
    {
        cout << "area of circle is " << 3.14 * r * r << endl;
    }
};
class square : public shape
{
    int a;

public:
    void inp()
    {
        cout << "\nEnter the value of side";
        cin >> a;
    }
    void area()
    {
        cout << "area of sqr is " << a * a << endl;
    }
};
class triangle : public shape
{
    int a, b, c;

public:
    void inp()
    {
        cout << "\nEnter the value of 3 sides";
        cin >> a >> b >> c;
    }
    void area()
    {
        float s = (a + b + c) / 2.0;
        float area = pow((s * (s - a) * (s - b) * (s - c)), 1.0 / 2);
        cout << "area of triangle is " << area << " squnit";
    }
};
int main()
{
     circle *c=new circle;

     square  *sq=new square;
     triangle *tri=new triangle;
     shape *s[] = {c, sq, tri};
     for (int i = 0; i < 3; i++)
     {   s[i]->inp();
         s[i]->area();
     }
     
  /*  circle c;
    square sq;
    triangle tri;
    shape *s[] = {&c, &sq, &tri};
    for (int i = 0; i < 3; i++)
    {
        s[i]->inp();
        s[i]->area();
    }*/
   


    return 0;
}