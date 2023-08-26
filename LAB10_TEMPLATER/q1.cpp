/* Q1) (Function Template) Define a function template for finding
 the minimum value contained in an array.
  Write main() function to find the minimum value of integer array
   and minimum value of floating point numbers in an array.*/

#include <bits/stdc++.h>
using namespace std;
template <class T_025>
void min_025(T_025 arr_025[], int n_025)
{
    T_025 min_element_025 = arr_025[0];
    for (int i_025 = 1; i_025 < n_025; i_025++)
    {
        if (arr_025[i_025] < min_element_025)
        {
            min_element_025 = arr_025[i_025];
        }
    }
    cout << "Minimum Element is: " << min_element_025 << endl;
}
int main()
{
    int n_025;
    cout << "Enter the size of the Integer array: ";
    cin >> n_025;
    int arr_025[n_025];
    cout << "Enter the elements of the Integer array: ";
    for (int i_025 = 0; i_025 < n_025; i_025++)
    {
        cin >> arr_025[i_025];
    }
    min_025(arr_025, n_025);
    cout << "Enter the size of the Floating array:";
    cin >> n_025;
    float arr1_025[n_025];
    cout << "Enter the elements of the Floating array: ";
    for (int i_025 = 0; i_025 < n_025; i_025++)
    {
        cin >> arr1_025[i_025];
    }
    min_025(arr1_025, n_025);
    return 0;
}
