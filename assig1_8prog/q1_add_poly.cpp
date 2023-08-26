/* Q1.WAP to add, multiply two polynomial using classes and objects.*/
#include <iostream>
using namespace std;
class poly
{
    int coef_025;
    int power_025, tterm_025;

public:
    void input(int i)
    {

        cout << "enter " << i + 1 << " term coeff and power_025 of x\n";
        cin >> coef_025;
        cin >> power_025;
    }
    void display(poly a[], int n)
    {

        cout << "your polynomial is : ";

        for (int i = 0; i < n; i++)
        {
            cout << a[i].coef_025 << "x^" << a[i].power_025;
            if (i == n - 1)

                cout << " ";

            else
                cout << "+";
        }
        cout << "\n";
    }
    void add(poly a[], poly b[], int n, int m)
    {
        poly c[10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {  int ck=0;
                if (a[i].power_025 == b[j].power_025)
                {
                     c[i].coef_025 = a[i].coef_025 + b[j].coef_025;
                     c[i].power_025 = a[i].power_025 ;
                }
            }
        }
        c[1].display(c, m);
    }
    void mult(poly a[], poly b[], int n, int m)
    {  int k=0;
        poly c[10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                  //for(int k=i ;k<n;k++)
                //{
                     c[k].coef_025 = a[i].coef_025 * b[j].coef_025;
                     c[k].power_025 = a[i].power_025 + b[j].power_025;
                k++;
            }
        }
      /*  for (int i = 0; i < n*m; i++)
        {
            for (int j = i+1; j < m*n; j++)
            {
                 if(c[i].coef_025==c[j].coef_025)
                {
                     c[i].coef_025 = a[i].coef_025 * c[j].coef_025;
                     c[i].power_025 = a[i].power_025;
                      
                k++;
                }
            }
        }*/

        c[1].display(c, m*n);
    }
};

int main()
{

    poly a[10], b[10], temp;
    int n, m;
    cout << "how many terms u have ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].input(i);
    }

    cout << "how many terms u have in 2nd poly ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        b[i].input(i);
    }
    temp.display(a, n);
    temp.display(b, m);
    cout << "after add the polynomial is\n";
    temp.add(a, b, m, n);
    temp.mult(a, b, m, n);
    

    return 0;
}