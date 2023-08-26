//ii. WAP to copy content of one file to another.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100], a;
    ofstream of("hitu.txt");
    ofstream cof("copy.txt");

    of << "Hello how are you   \nthis file is opened in ofstream using VS code\n 12312 my name is hitu raj";
    of.close();
    ifstream ifs;

    ifs.open("hitu.txt");

    while (ifs.eof() != 1)
    {
        ifs.get(a);
        cof << a;
    }
    ifs.close();
    cof.close();

    ifs.open("copy.txt");


    while (ifs.eof() != 1)

    {
        ifs.getline(ch, 100);
        cout << ch;
    }
     ifs.close();

    return 0;
}
