#include<iostream>
using namespace std;

void incre(int &x,int y=1)
{
    x=x+y;
}
int main()
{
int x,y,n;
cout<<"enter the value of x any y ";
cin>>x>>y;

cout<<"if u dont want to pass y press 0 else press 1";
cin>>n;
if(n==0)
{

    incre(x);
}
else
{
    incre(x,y);

}
cout<<"incremented value of x is "<<x;


    return 0;
}