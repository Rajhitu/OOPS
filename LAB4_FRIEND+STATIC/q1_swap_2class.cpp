//Q1.WAP to swap private data_025 member of two different classes.
//[The classes have no relation with each other].
#include <iostream>
using namespace std;
class xyz;
class abc
{
    int data_025;
    friend void swap(abc &, xyz &);

public:
    void input()
    {
        cin >> data_025;
    }
    void display()
    {
        cout << data_025 << " ";
    }
};

class xyz
{
    int data_025;
    friend void swap(abc &, xyz &);

public:
    void input()
    {
        cin >> data_025;
    }
    void display()
    {
        cout << data_025 << " ";
    }
};

void swap(abc &a_025, xyz &x)
{
    int temp = a_025.data_025;
    a_025.data_025 = x.data_025;
    x.data_025 = temp;
}
int main()
{
    abc a_025;
    xyz b_025;
    cout << "enter value in 2 class \n";
    a_025.input();
    b_025.input();

    cout << "before swap th e values of class1 and class  is 2 \n";
    a_025.display();
    b_025.display();

    swap(a_025, b_025);

    cout << "\nAfter swap the values of class1 and class 2 is \n";
    a_025.display();
    b_025.display();

    return 0;
}