/*Q1 Create a class complex which stores real_025 and imaginary part of a complex
number. Include all types of constructors and destructor. The destructor should
display a message about the destructor being invoked. Create objects using
different constructors and display them.*/
#include <iostream>
using namespace std;
class complex
{
    int real_025;
    int img_025;

public:
    complex() //DEFAULT CONSTRUCTOR
    {

        real_025 = 10;
        img_025 = 20;
    }
    complex(int a, int b) //parameterized constr
    {

        real_025 = a;
        img_025 = b;
    }
    complex( const complex &c) //copy constructor
    {

        real_025 = c.real_025;
        img_025 = c.img_025;
    }
    void display()
    {
        cout << real_025 << "+i" << img_025;
    }
    
    ~complex()
    {

      cout<<"\n memory released";
    }
};
int main()
{
    int n;
    cout << "\npress 1 if you want to use default constructor"
            "\npress 2 if you want to use parameterzed constructor"

            "\npress 3 if you want to use copy constructor";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        complex c1;
        c1.display();

        break;
    }
    case 2:
    {
        complex c1(2, 3);
        c1.display();

        break;
    }
    case 3:
    {

        complex c2;
        complex c1(c2);
        c1.display();

        break;
    }
    default:
        break;
    }
    return 0;
}