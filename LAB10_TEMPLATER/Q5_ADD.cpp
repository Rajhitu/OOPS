/*Q5) (Class Template) Write a program to define a class template
 for reading two 
data items from the keyboard and find out their sum.*/

#include <iostream>
using namespace std;

template <class T>
class add
{
    int a, b;

public:
    T sum(T x, T y)
    {
        return x+y;
    }
};


int main()
{ 

     add<int>a;
      add<float>b;
   cout<<"sum of int is "<< a.sum(2,3)<<endl;
   cout<<"sum of float no. are "<< b.sum(2.1,3.1);
 
    return 0;
}



