//Q8) Matrix Implementation using Template Class. Overload Addition 
//Operator.

#include <bits/stdc++.h>
 using namespace std;
template <class T_025>
class matrix_025
{
private:
    int r_025, c_025;
    T_025 **arr_025;

public:
    matrix_025(int row_025, int col_025)
    {
        r_025 = row_025;
        c_025 = col_025;
        arr_025 = new T_025 *[r_025];
        for (int i_025 = 0; i_025 < r_025; i_025++)
        {
            arr_025[i_025] = new T_025[c_025];
        }
    }
    void get_data_025()
    {
        cout << "Enter the elements of the matrix: \n";
        for (int i_025 = 0; i_025 < r_025; i_025++)
        {
            for (int j_025 = 0; j_025 < c_025; j_025++)
            {
                cin >> arr_025[i_025][j_025];
            }
        }
    }
    matrix_025<T_025> operator+(matrix_025<T_025> m_025)
    {
        matrix_025<T_025> temp_025(r_025, c_025);
        for (int i_025 = 0; i_025 < r_025; i_025++)
        {
            for (int j_025 = 0; j_025 < c_025; j_025++)
            {
                temp_025.arr_025[i_025][j_025] = arr_025[i_025][j_025] + m_025.arr_025[i_025][j_025];
            }
        }
        return temp_025;
    }
    void display_025()
    {
        cout << "The matrix is: " << endl;
        for (int i_025 = 0; i_025 < r_025; i_025++)
        {
            for (int j_025 = 0; j_025 < c_025; j_025++)
            {
                cout << arr_025[i_025][j_025] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int row_025, col_025;
    cout << "Enter the number of rows and columns: ";
    cin >> row_025 >> col_025;
    matrix_025<int> m1_025(row_025, col_025);
    m1_025.get_data_025();
    m1_025.display_025();
    matrix_025<int> m2_025(row_025, col_025);
    m2_025.get_data_025();
    m2_025.display_025();
    matrix_025<int> m3_025 = m1_025 + m2_025;
    m3_025.display_025();
    return 0;
}