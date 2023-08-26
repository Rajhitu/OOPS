/* Q3.WAP which displays a given character, n_025 number of times, using a
function. When the n_025 value is not provided, it should print the given
character 80 times. When both the character and n_025 value is not provided, it
should print ‘*’ character 80 times.
[Write the above program in two ways:-
-using function overloading.
-using default arguments.]

*/
#include <iostream>
using namespace std;

/*void charac(char c_025 = '*', int n_025 = 80)
{

    for (int i = 0; i < n_025; i++)
    {
        cout << i + 1 << "--->" << c_025 << "\n";
    }
}*/

void print(int t_025)
{
    for (int i = 0; i < t_025; i++)
    {
        cout << i + 1 << "--->" << '*' << "\n";
    }
}
void print(char c_025, int n_025)
{
    for (int i = 0; i < n_025; i++)
    {
        cout << i + 1 << "--->" << c_025 << "\n";
    }
}
void print(char c_025)
{
    for (int i = 0; i < 80; i++)
    {
        cout << i + 1 << "--->" << c_025 << "\n";
    }
}

int main()
{
    int n_025;
    cout << "what do you have ??\n"
         << "-----------------------------";
    cout << "\nif you have character then press 1"
         << "\n or if you have no. then press 2"
         << "\nand if you have nothing then press 3";
    cin >> n_025;
    switch (n_025)
    {
    case 1:
        char c_025;
        cout << "enter the character";
        cin >> c_025;
        print(c_025);
        break;
    case 2:
        int t_025;
        cout << "enter the number";
        cin >> t_025;
        print(t_025);
        break;
       
    case 3:
        print('*', 80);
        break;

    default:
        break;
    }
    //charac();

    return 0;
}