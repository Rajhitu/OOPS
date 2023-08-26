/*Q5.Create a class which stores name_025, author_025 and price_025 of a book. Store
information for n number of books. Display information of all the
books in a given price_025 range using friend function in a tabular
format.*/
#include <bits/stdc++.h>
using namespace std;
class book
{
    char name_025[10], author_025[10];
    int price_025;

public:
    void input()
    {
        cin >> name_025 >> author_025 >> price_025;
    }
    friend void range(book a[], int n, int upl_025, int lowl_025);
};

void range(book a[], int n, int upl_025, int lowl_025)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].price_025 >= lowl_025 && a[i].price_025 <= upl_025)
        {
            cout << a[i].name_025 << "\t" << a[i].author_025 << "\t" << a[i].price_025;
        }
        cout << "\n";
    }
}
int main()
{
    int n, upl_025, lowl_025;
    book a[4];
    cout << "how many books u have";
    cin >> n;
    cout << "\nenter the name_025 author_025 and price_025 of each book ";
    for (int i = 0; i < n; i++)
    {
        a[i].input();
    }
    cout << "enter lower limit and enter the upper one";
    cin >> lowl_025 >> upl_025;
    range(a, n, upl_025, lowl_025);
    return 0;
}