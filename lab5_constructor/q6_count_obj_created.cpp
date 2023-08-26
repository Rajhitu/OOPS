/*Q6 WAP to count number of objects created from a class using concept of static
data members and static member function./
Class test{
Int I;
Static int count;
Public:
Test(){count++;}
Test(int k) { I=k; count ++;}
Static void print(){ cout&lt;&lt;” “&lt;&lt;count; }
};
int test:: count;
*/
#include<iostream>
using namespace std;
class count
{   int i;
    static int Count_025;
    public:
    count()
    {
        Count_025++;
    }
    count(int k)
    {

        i=k;
        Count_025++;
    }
    static void display()
    {

        cout<<"no. of times object created is "<<Count_025<<" times";
    }



};
int count::Count_025;
int main()
{
    count a,b,c;
    count f(23);
    count::display();


    return 0;
}