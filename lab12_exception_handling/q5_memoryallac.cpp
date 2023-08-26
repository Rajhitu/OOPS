//5.WAP that dynamically allocates memory for n no.objects for
//student class ,throw exception if memory is not allocated.
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{ int *a_025,n;

a_025=new int[5];



try
{
    if(a_025==NULL)
    {
        throw 0;
    }
    else
    cout<<"memory allocated\n";
}
catch(int)
{
    cout<<"\nmemory not allocated\n";
}
cout<<"prog ends";




    return 0;
}