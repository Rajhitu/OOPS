// q2.Write a program to define the function template for
// swapping the two items of various data types such as integers, float and
// characters etc.
#include <iostream>
using namespace std;
template <class T>

void swapping(T &x, T &y)

{

    T temp = x;
    x = y;
    y = temp;
}

int main()

{

    float p, q;

    int m, n;
    char a, b;

    cout << "\n Enter two integers : ";

    cin >> m >> n;

    cout << "\nThe values of integer  before swapping are : " << m << " " << n;

    swapping(m, n);

    cout << "\nThe values of integer  after swapping are : " << m << " " << n;
    cout << ".............................................................\n";
     cout << "\n Enter two floats : ";

    cin >> p >> q;

    cout << "\nThe values before swapping are : " << p << " " << q;

    swapping(p, q);

    cout << "\nThe values after swapping are : " << p << " " << q;

    cout << ".............................................................\n";
     cout << "\n Enter two char : ";

    cin >> a >> b;

    cout << "\nThe values before swapping are : " << a << " " << b;

    swapping(a, b);

    cout << "\nThe values after swapping are : " << a << " " << b;

    return 0;
}
