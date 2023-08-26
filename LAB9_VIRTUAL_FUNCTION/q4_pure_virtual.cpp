/*q4WAP to demonstrate use of pure virtual function and abstract base class.[
May use the number class as base and hexadecimal , octal and decimal as
derived classes]*/
#include<iostream>
using namespace std;
class number

{

protected:
    int value;

public:
    void input(int i)

    {

        value = i;
    }

    virtual void show() = 0;
};

class deci_ : public number

{

public:
    void show()

    {

        cout << "\ndecimal number: " << value;
    }
};

class hexa : public number

{

public:
    void show()

    {

        cout << "\nhexadecimal number: " << hex << value;
    }
};

class octa : public number

{

public:
    void show()

    {

        cout << "\nocta number: " << oct << value;
    }
};

int main()

{

    number *ptr[3];

    deci_ d;

    hexa h;

    octa o;

    ptr[0] = &d;

    ptr[0]->input(12);

    ptr[0]->show();

    ptr[1] = &h;

    ptr[1]->input(12);

    ptr[1]->show();

    ptr[2] = &o;

    ptr[2]->input(12);

    ptr[2]->show();

    return 0;
}
