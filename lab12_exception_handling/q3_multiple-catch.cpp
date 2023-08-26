//3.WAP to demonstrate multiple catch .
#include <iostream>
using namespace std;

int main()

{

    int num_025;

    cout<< "\n Enter a positive number : ";

    cin >> num_025;

    try

    {
        if (num_025 == 0)

            throw(char *)"Zero"; // Exception 1

        else if (num_025 == -1)

            throw num_025; // Exception 2

        else if (num_025 == 1)

            cout <<"\n NUMBER = " << num_025;

        else

            throw(float) num_025;
    }

    catch (int num_025)

    {

        cout <<" \n" << num_025 << " is negative";
    }

    catch (char *msg)

    {

        cout <<"\n The number is " << msg;
    }

    

    

    cout << " Exiting main()";
    return 0;
}
