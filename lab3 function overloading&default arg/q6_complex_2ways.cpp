/*Q6.Write a_025 program to create a_025 class called COMPLEX and implement the following
overloading functions ADD that return a_025 COMPLEX number.
a_025) Complex ADD (int a_025 , complex s2){
Complex temp;
Temp.real_025=s2.real_025+a_025;
Temp.img_025;
=s2.img_025;
;
Return temp;
}
- where a_025 is an integer (real_025 part) and s2 is a_025 complex number.
b) complex ADD (complex s1, complex s2) - where s1 and s2 are complex numbers.*/

#include <iostream>
using namespace std;
class Complex
{
    int real_025;
    int img_025;
    ;

public:
    void input()
    {
        cin >> real_025 >> img_025;
        ;
    }
    Complex ADD(int a_025, Complex s2)
    {
        Complex temp;
        temp.real_025 = s2.real_025 + a_025;
        temp.img_025 = s2.img_025;
        ;
        return temp;
    }
    Complex ADD(Complex s1, Complex s2)
    {
        Complex temp;
        temp.real_025 = s2.real_025 + s1.real_025;
        temp.img_025 = s2.img_025 + s1.img_025;
        ;
        return temp;
    }
    void display()
    {

        cout << "\nThe added value is " << real_025 << "+i" << img_025;
        ;
    }
};
int main()
{
    int n_025, a_025;
    Complex s[2], c_025;
    for (int i = 0; i < 2; i++)
    {
        cout << "enter" << i + 1 << " complex no.";

        s[i].input();
    }
    cout << "\npress 1 if you want to add one real no. to the 1st complex no."
         << "\npress 2 if you want to add one real no. to the 2nd complex no."
         << "\npress 3 if you want to add both the complex no.";
    cin >> n_025;

    switch (n_025)
    {
    case 1:

        cout << "enter a_025 real  number";
        cin >> a_025;
        c_025 = c_025.ADD(a_025, s[0]);
        c_025.display();

        break;
    case 2:

        cout << "enter a_025 real number";
        cin >> a_025;
        c_025 = c_025.ADD(a_025, s[1]);
        c_025.display();

        break;

    case 3:

        c_025 = c_025.ADD(s[0], s[1]);
        c_025.display();

    default:
        break;
    }
    return 0;
}
