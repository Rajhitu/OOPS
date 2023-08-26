
//6)WAP that calculates the square root of a number. Throw an exception if a negative
//number is taken
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num_025;
    cout << "enter the number to fing sqr root";

    cin >> num_025;

    try
    {
        if (num_025 >= 0)
        {

            cout << "sqroot of the number is ";
            float sqroot;
            sqroot = pow((float)num_025, 1.0 / 2.0);
            cout<<sqroot;
        }
        else
            
            {
                throw num_025;
            }
    }
    catch (int)
    {
        cout << "number cannot be negetive\n";
    }
    cout << "\nprog ends";

    return 0;
}