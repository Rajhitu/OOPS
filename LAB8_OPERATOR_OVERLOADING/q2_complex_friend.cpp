//operator+

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
    friend Complex operator +(Complex s1,Complex s2)
    {
        Complex temp;
        temp.real_025 = s2.real_025 + s1.real_025;
        temp.img_025 = s1.img_025+s2.img_025;
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
    cout 
         << "\npress 1 if you want to add both the complex no.";
    cin >> n_025;

    switch (n_025)
    {
    case 1:

      //  cout << "enter a_025 real  number";
        //cin >> a_025;
       c_025=s[0]+s[1];
        c_025.display();

        break;
   

    default:
        break;
    }
    return 0;
}
