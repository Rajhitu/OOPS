/* Q7. Write a_025 program to find the summation of three numbers by using one function
only with function name SUM having three arguments. If at run time one argument is
given to the function SUM, then second and third argument will be assumed by
default as 10 and 20 respectively. If two arguments are given at run time, then third
argument will be assumed as 20. Use function with default argument concepts.*/
#include <iostream> 
using namespace std;
void SUM(int a_025, int b_025 = 10, int c_025 = 20)
{

    cout << "sum of 3 no. is " << a_025 + b_025 + c_025;
}
int main()
{
    int n;
    int a_025, b_025, c_025;

    cout << "press 1 if you have 1 no.s\n"
         << "press 2 if u have 2 no.s\n"
         << "press 3 if u have 3 no.s\n";
    cin >> n;
    switch (n)
    {
    case 1:
       int a_025;
       cout << "enter 1 no.";
       cin >> a_025;
       SUM(a_025);
       break;
    case 2:
       cout << "enter 2 no.";
       cin >> a_025 >> b_025;
       SUM(a_025, b_025);
       break;
    case 3:
        cout << "enter 3 no.";
        cin >> a_025 >> b_025>>c_025;
        SUM(a_025, b_025,c_025);
        break;

    default:
        break;
    }

    return 0;
}