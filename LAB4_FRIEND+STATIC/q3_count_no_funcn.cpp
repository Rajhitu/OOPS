/* Q3.Create a class with an integer data member. Include functions for
input and output in_025 class. Count the number of times each function is
called and display it.*/
#include <iostream>
using namespace std;
class inout
{
    int data_025;

public:
    static int in_025;
    static int out_025;
    void input()
    {

        in_025++;
    }
    void output()
    {

        out_025++;
    }
    static void count()
    {
        cout << "the no.of time input and output fun called is ";
        cout << in_025 <<" "<< out_025;
    }
};
int inout::in_025;
int inout::out_025;

int main()
{
    class inout a,b;
    a.input();
    a.output();
    b.input();
    a.output();
    b.input();
    a.output();
    inout::count();

    return 0;
}