//2.WAP to throw and handle’ array out of bound’ exception.
#include<iostream>
using namespace std;

int main()
{ int arr_025[5],n;
cout<<"enter  5 elements in array " ;
for (int i = 0; i < 5; i++)
{
    cin>>arr_025[i];
}

cout<<"enter the inex no. u want to access";
cin>>n;

try
{
    if(n>4||n<0)
    {
        throw 0;
    }
}
catch(int)
{
    cout<<"\nwrong index\n";
}
cout<<"prog ends";




    return 0;
}