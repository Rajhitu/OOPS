/*Q8.Write a_025 program to demonstrate the concept of call-by-value, call-by-reference &amp;
call-by address by taking swapping of two numbers as an example.*/
#include <iostream>
using namespace std;

void cbyvalue(int a_025, int b_025)
{

    int temp_025 = a_025;
    a_025 = b_025;
    b_025 = temp_025;
}

void cbyaddress(int &a_025, int &b_025)
{

    int temp_025 = a_025;
    a_025 = b_025;
    b_025 = temp_025;
}
void cbyrefrence(int *a_025, int *b_025)
{
    int *temp_025;
    *temp_025 = *a_025;
    *a_025 = *b_025;
    *b_025 = *temp_025;
}
int main()
{
    int a_025, b_025, n_025;
    cout << "press 1 for call by value"
         << "\npress 2 for call by address"
         << "\npress 3 for call by refrence\n";
    cin >> n_025;
    switch (n_025)
    {
    case 1:
        cout << "enter 2 no.s\n";
        cin >> a_025 >> b_025;
        cbyvalue(a_025, b_025); //swaping doest haapen
        cout << "swap values are " << a_025 << '&' << b_025;
        break;
    case 2:
        cout << "enter 2 no.s\n";
        cin >> a_025 >> b_025;
        cbyaddress(a_025, b_025); //swap happens
        cout << "swap values are " << a_025 << '&' << b_025;

        break;
    case 3:
        cout << "enter 2 no.s\n";
        cin >> a_025 >> b_025;
        cbyrefrence(&a_025, &b_025); //swap happens
        cout << "swap values are " << a_025 << '&' << b_025;

        break;
    default:
        cout << "wrong input";
        break;
    }

    return 0;
}