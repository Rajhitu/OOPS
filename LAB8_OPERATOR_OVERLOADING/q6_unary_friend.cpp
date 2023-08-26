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
   friend unaray operator -(unaray x)
    {  unaray temp;  //NO NEED TO CREATE AN EXTRA OBJECT  use this-->*this
     temp.a=-x.a;
     temp.b=-x.b;
     temp.c=-x.c;
return temp;
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