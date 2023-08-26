/*Q4Create a class which allocates the memory for a string through dynamic
constructor. Overload the binary + to concatenate two strings and display it.
Overload the assignment operator.*/
#include <string.h>
#include <iostream>
using namespace std;

class stringadd
{
    char *s;

public:
    stringadd(char *a)
    {
        s = new char[10];
        strcpy(s, a);
    }

    char* operator+(stringadd a)
    {
        return strcat(s, a.s);
    }
};
int main()
{
    char aa[10], be[10];
     char *res;//=new char[100];

    cout << "Enter 2 string u want to add ";
    gets(aa);
    gets(be);
    
    stringadd a(aa), b(be);
    res = a + b;
    cout<<"concatinated string is : "<<res;

    return 0;
}