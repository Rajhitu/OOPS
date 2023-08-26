/*Q5 WAP to Overload the operator ‘==’ to compare two objects of complex class
and display whether they are equal or not. Overload the assignment operator.*/

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
    bool operator==(Complex s2)
    {
        if (s2.real_025 == real_025 && img_025 == s2.img_025)
            return true;
        else
            return false;
    }
    Complex operator =(Complex s2)
    {
        real_025=s2.real_025;
        img_025=s2.img_025;
        return *this;
    }


    void display()
    {

        cout << "\nThe complex no. is " << real_025 << "+i" << img_025<<"\n";
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
    cout
        << "\npress 1 if you want to compare both the complex no.";
      cout  << "\npress 2 if you want to asign  2nd complex no.to the first\n";
    cin >> n_025;

    switch (n_025)
    {
    case 1:

        
        if (s[0] == s[1])
            cout << "both the complex no. are same\n";
        else
            cout << "both are different \n";

        break;
        case 2:

        
        s[0]=s[1];
        cout<<"value of the 2 comple no. is\n";
        s[0].display();
        s[1].display();
        break;

    default:
        break;
    }
    return 0;
}
