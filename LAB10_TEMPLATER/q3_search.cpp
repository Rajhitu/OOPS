/*q3.Write a template function to search for a given key
element from an array. Illustrate how you perform search in integer,
character as well as double arrays using the same template function.*/
#include <iostream>
using namespace std;
template <class T>

void search(T a[], int x, T y)

{
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i] == y)
        {

            count++;
        }
    }
    if (count > 0)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }
}

int main()

{

    float p[100], q;

    int m[100], n;
    char a[100], b;

    

    cout << "\n Enter the 5 value in int array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    cout << "enter element u want to search";
    cin >> n;
    search(m, 5, n);
    cout << "........................................\n";

    cout << "\n Enter the 5 value in char array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "enter element u want to search";
    cin >> b;
    search(a, 5, b);

    cout << "........................................\n";

    cout << "\n Enter the 5 value in flaot array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    cout << "enter element u want to search";
    cin >> q;
    search(p, 5, q);

    return 0;
}
