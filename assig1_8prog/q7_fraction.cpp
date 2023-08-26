/* Q7.Define a class named as FRACTION that contains two data members that represent
the numerator and denominator of a fraction. By defining necessary member
functions, write a program to add, subtract and multiply two fractions. The add
accepts the objects using callby- value technique, subtract using call-by-reference and
multiply using call-by-address technique.*/
#include <iostream>
using namespace std;
class frac
{
    int NUM_025, DENO_025;

public:
    void input(int i)
    {
        cout << "enter NUM_025 and denominator of " << i + 1 << " fraction\n";

        cin >> NUM_025 >> DENO_025;
    }
    void add(class frac a, class frac b)
    {
        int nsum;
        int temp = a.DENO_025 * b.DENO_025;
        nsum = temp / a.DENO_025 * a.NUM_025 + (temp / b.DENO_025) * b.NUM_025;
        cout << a.NUM_025 << "/" << a.DENO_025 << "+" << b.NUM_025 << "/" << b.DENO_025 << "="
             << "\n";
        cout << "addn of 2 fraction is " << nsum << "/" << temp << "= " << (float)nsum / temp;
    }
    void sub(class frac &a, class frac &b)
    {
        int nsum;
        int temp = a.DENO_025 * b.DENO_025;
        nsum = temp / a.DENO_025 * a.NUM_025 - (temp / b.DENO_025) * b.NUM_025;
        cout << a.NUM_025 << "/" << a.DENO_025 << "-" << b.NUM_025 << "/" << b.DENO_025 << "="
             << "\n";
        cout << "subt of 2 fraction is " << nsum << "/" << temp << "= " << (float)nsum / temp;
    }
    void mul(class frac *a, class frac *b)
    {

        int denom = a->DENO_025 * (*b).DENO_025;
        int nemo = a->NUM_025 * b->NUM_025;

        for (int i = 1; i <= nemo && i <= denom; i++)
        {
            if (nemo % i==0 && denom % i==0)
            {
                nemo = nemo / i;
                denom = denom / i;
                i = 1;
            }
        }
        cout << a->NUM_025 << "/" << a->DENO_025 << "*" << b->NUM_025 << "/" << b->DENO_025 << "="
             << "\n";
        cout << "multiplication of 2 fraction is " << nemo << "/" << denom << "= " << (float)nemo / denom;
    }
};

int main()
{
    frac a[2], temp;
    int n;

    for (int i = 0; i < 2; i++)
    {
        a[i].input(i);
    }
    cout<<"Press 1 to do addition"
    <<"\nPress 2 to do subtra"
    <<"\nPress 3 to do multi\n";
    cin>>n;
    switch (n)
    {
    case 1:
        temp.add(a[0],a[1]);
        break;
    case 2:
        temp.sub(a[0],a[1]);
        break;
    case 3:
      temp.mul(&a[0],&a[1]);
        break;

    default:
        break;
    }
    

    return 0;
}