//Q4) (Non-type as function parameters) Write a program to demonstrate 
//the concept behind function templates with non-type 
//as function parameters by taking sorting an array of numbers 
//as an example.

#include <bits/stdc++.h> 
using namespace std;
template <class T_025>
void sort(T_025 *ar_025, int n_025)
{
    int i_025, j_025;
    T_025 temp_025;
    for (i_025 = 0; i_025 < n_025; i_025++)
    {
        for (j_025 = i_025 + 1; j_025 < n_025; j_025++)
        {
            if (ar_025[i_025] > ar_025[j_025])
            {
                temp_025 = ar_025[i_025];
                ar_025[i_025] = ar_025[j_025];
                ar_025[j_025] = temp_025;
            }
        }
    }
}
int main()
{
    int n_025;
    cout << "Enter the size of the Array:";
    cin >> n_025;
    int ar_025[n_025];
    cout << "Enter the elements of the Array: ";
    for (int i_025 = 0; i_025 < n_025; i_025++)
    {
        cin >> ar_025[i_025];
    }
    sort(ar_025, n_025);
    cout << "Sorted Array: ";
    for (int i_025 = 0; i_025 < n_025; i_025++)
    {
        cout << ar_025[i_025] << " ";
    }
    return 0;
}