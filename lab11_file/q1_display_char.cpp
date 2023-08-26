//i. WAP to display content of a file using character output function.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100],a;
    ofstream of("hitu.txt");

    of << "Hello how are you \nthis file is opened in ofstream using VS code";
 of.close();
    ifstream ifs("hitu.txt");
    while (ifs.eof() != 1)//char wise
    {
        ifs.get(a);

        cout << a ;
    }
cout<<"\n............................................................\n";


    return 0;
}
