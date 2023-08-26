//q4 Create a class complex which stores real_025 and imaginary part of a complex
//number. Input 10 complex numbers and display them.
#include <iostream>
using namespace std;
class complex
{
    float real_025;
    float img_025;

public:
    void input(int i)
    {
        cout << " \n Enter" << i + 1 << "complex no.\n",
            cout << "enter the real part ";
        cin >> real_025;
        cout << "enter img part ";
        cin >> img_025;
    }
    void output()
    {

        cout << "\n The complex no. is " << real_025 << "+" << img_025 << "i";
    }
};
int main()
{
    int n;
    complex c[10];
    cout << "how many complex no. you have ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        c[i].input(i);
    }

    for (int i = 0; i < n; i++)
    {
        c[i].output();
    }

    

        return 0;
}
