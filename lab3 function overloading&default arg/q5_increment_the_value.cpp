/*Q5. WAP to increment the value of an argument given to function USING
INLINE function.
Inline int incr(int I) {
return ++i; }*/
#include<iostream>
using namespace std;

inline void increm(int *n025)
{  
    cout<<"incremented value is "<< ++*n025;

}


int main()
{int n025;
    cout<<"enter the no. you want to be incremented ";
 cin>>n025;
 increm(&n025);

    return 0;
}