// Q6) (Class Template) Write a class template to represent a generic
// vector.

#include <bits/stdc++.h>
using namespace std;
template <class T_025>
class vector_025
{
private:
    T_025 *arr_025;
    int n_025;

public:
    vector_025(int size_025)
    {
        n_025 = size_025;
        arr_025 = new T_025[n_025];
    }
    void get_data_025()
    {
        cout << "Enter the elements of the vector: ";
        for (int i_025 = 0; i_025 < n_025; i_025++)
        {
            cin >> arr_025[i_025];
        }
    }
    void modify_data_025(T_025 new_val_025, int index_025)
    {
        arr_025[index_025] = new_val_025;
    }
    void multiply_data_025(T_025 new_val_025)
    {
        for (int i_025 = 0; i_025 < n_025; i_025++)
        {
            arr_025[i_025] *= new_val_025;
        }
    }
    void display_025()
    {
        cout << "The elements of the vector are: ";
        for (int i_025 = 0; i_025 < n_025; i_025++)
        {
            cout << arr_025[i_025] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int n_025;
    cout << "Enter the size of the vector: ";
    cin >> n_025;
    vector_025<int> v_025(n_025);
    v_025.get_data_025();
    v_025.display_025();
    int index_025;
    cout << "Enter the index of the element to be modified: ";
    cin >> index_025;
    int new_val_025;
    cout << "Enter the new value: ";
    cin >> new_val_025;
    v_025.modify_data_025(new_val_025, index_025);
    v_025.display_025();
    int multiply_val_025;
    cout << "Enter the value to be multiplied: ";
    cin >> multiply_val_025;
    v_025.multiply_data_025(multiply_val_025);
    v_025.display_025();
    return 0;
}