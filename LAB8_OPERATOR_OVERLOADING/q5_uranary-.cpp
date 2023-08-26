#include<iostream>
using namespace std;

class  unaray
{

    int a,b,c;
    public:
    void getdata()
    {

        cin>>a>>b>>c;
    }
    void output()
    {

        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    unaray operator -()
    { // unaray temp;
     //temp.a=-a;
     //temp.b=-b;
     //temp.c=-c;
     //return temp;//NO NEED TO CREATE AN EXTRA OBJECT use--> *this
     a=-a;
     b=-b;
     c=-c;

return *this;
    }
};
int main()

{
  unaray x,oper;
  cout<<"enter 3 values ";
  x.getdata();
  oper= -x;
  oper.output();
}