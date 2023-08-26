//AP to create a class Length having three data members as KM, meter and CM. Now create two objects of Length class then overload o
//perator '=='  to compare two objects and display whether they are equal or not.
#include<iostream>
using namespace std;
class length
{


    int km,m,cm;

    public:
    void input()
    {
        cin>>km>>m>>cm;  
          }

        bool operator ==(length b)
        {

            float x,y;
            x=km*1000+m+(cm/100);
            y=b.km*1000+b.m+(b.cm/100);
            return(x==y)?true:false;
            

        }
        void display()
        {

            cout<<km<<"km "<<m<<"m "<<cm<<"cm\n";
        }
};

int main()
{
 length a[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 <<" length";

        a[i].input();
    }
    if(a[0].operator == (a[1]))
    {
        cout<<"both are equal\n";

    }
    else
    cout<<"both are not equal\n";

}

//for prefix
friend complex operator++(&complex c2)
{     
  complex temp;
  temp.real=++c2.real;
  temp.img=++c2.img;
  return temp;
}

//for postfix
friend complex operator++(int,&complex c2)
{     
  complex temp;
  temp.real=c2.real++;
  temp.img=c2.img++;
  return temp;
}