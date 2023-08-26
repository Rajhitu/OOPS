/*Q4 Write a C++ program using class to dynamically allocate two integer arrays,
add them it to a third array and display all the arrays.
For(int I=0; I&lt;a.len;I++)
P[I]=a.p_025[I];*/
#include <iostream>
using namespace std;
class aray
{
    int *p_025;
    int length_025;

public:
    void create(int a)
    {
        length_025 = a;
        p_025 = new int[a];
        cout << "enter data in array\n";
        for (int i = 0; i < a; i++)
        {
            cin >> p_025[i];
        }
    }
    void display()
    {

        for (int i = 0; i < length_025; i++)
        {
            cout << p_025[i]<<" ";
        }
    }
    void add(aray a, aray b)
    {  length_025=a.length_025 + b.length_025;
        p_025 = new int[length_025];
        int c = 0;
        for (int i = 0; i < a.length_025; i++)
        {
            p_025[i] = a.p_025[i];
            c++;
        }
        for (int i = 0; i < b.length_025; i++)
        {
            p_025[c] = b.p_025[i];
            c++;
        }
        
    
    }
};
int main()
{
    aray a, b, c;
    int n, m;
    cout << "how many elements you have in the 1st array\n";
    cin >> n;
    a.create(n);
    
    cout << "how many elements you have in the 2st array\n";
    cin >> m;
    b.create(m);
    cout<<"\n1st array is \n";
     a.display();
     cout<<"\n2nd array is \n";
     b.display();
     
    cout << "\nadded array is\n";
     c.add(a,b);
    c.display();
   

    return 0;
}