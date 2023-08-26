/*2Create a class to store an integer array. Overload insertion and extraction
operator to input and display the array elements.n*/
#include <iostream>
using namespace std;
class array
{

    int arr[5];

    friend void operator>>(istream &in, array &c)
    {
        cout << "\n Enter the 5 elements in array ";
        for (int i = 0; i < 5; i++)
        {
            in >> c.arr[i];
        }
    }
    friend void operator<<(ostream &out, const array &c)
    {
        cout << "\narray is ";
        for (int i = 0; i < 5; i++)
        {
            out << c.arr[i] << "\t";
        }
    }
};

int main()
{

    array a;
    cin >> a;
    cout << a;

    return 0;
}
