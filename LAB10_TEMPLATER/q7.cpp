/*Q7) (Class Template) Write a program to explain class template 
by creating a template T for a class named pair having two data
 members of type T which are inputted by a constructor and a member
  function get-max() return the greatest of two numbers to main. 
  Note: the value of T depends upon the data type specified during
   object creation.*/

#include <bits/stdc++.h>
using namespace std;
template <class T_025>
class pair_025
{
private:
    T_025 a_025, b_025;

public:
    pair_025(T_025 x_025, T_025 y_025)
    {
        a_025 = x_025;
        b_025 = y_025;
    }
    T_025 greater_025()
    {
        if (a_025 > b_025)
            return a_025;
        else
            return b_025;
    }
};
int main()
{      int m,n;
    cout<<"enter 2 no.s\n";
    cin>>m>>n;

    pair_025<int> p_025(m,n);
    cout << p_025.greater_025() << endl;
    return 0;
}