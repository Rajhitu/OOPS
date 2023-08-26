/*Q9 Write a program to demonstrate the use of scope resolution operator(::) by
declaring same variable name globally and locally and display the value of global and
local variables.*/
#include<iostream>
using namespace std;
int n_025=20;//global variable
int main()
{
 
int n_025=10;//local variable

 cout<<"the value of local variable is "<<n_025;
 cout<<"\nthe value of global  variable is "<<::n_025;
    return 0;
}