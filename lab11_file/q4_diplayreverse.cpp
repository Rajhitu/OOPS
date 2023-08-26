// iv. WAP to display content of a file in reverse order.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100], a;
    ofstream of("hitu.txt");

    of << "Hello how are you this file is opened in ofstream using VS code";
    of.close();
    ifstream ifs("hitu.txt");
    ifs.seekg(-1, ios::end);
    int x=ifs.tellg();
    while (x>=0) // char wise
    {
        ifs.seekg(-2, ios::cur);
        ifs.get(a);

        cout << a;
        x--;
    }
    cout << "\n............................................................\n";

    return 0;
}
