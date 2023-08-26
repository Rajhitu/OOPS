//1.WAP to throw and handle ‘division by zero’ exception.
#include<iostream>
using namespace std;

int main()
{ int num_025 ,deno_025;
cout<<"enter num_025 and deno_025";

cin>>num_025>>deno_025;

try
{
    if(deno_025==0)
    {
        throw 0;
    }
}
catch(int)
{
    cout<<"denomerator cant be zero\n";
}
cout<<"prog ends";




    return 0;
}