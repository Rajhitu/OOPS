/*vi. WAP to convert all uppercase letters in a given file, to lower case and
vice-versa.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch[100], a;
    ofstream of;
    ifstream ifs;
    of.open("uptodown.txt", ios::ate);

    of << "Hello how are you \nthis file is opened in ofstream using VS code\n 12312 my name is hitu raj";

    cout << "before converting--------------->\n";

    ifs.open("uptolow.txt");
    ifs.clear();
    while (ifs.eof() != 1)

    {
        ifs.getline(ch, 100);
        cout << ch;
    }
    ifs.clear();
    ifs.seekg(0, ios::beg);
    ofstream off("newfiile.txt");

    while (ifs.eof() != 1)
    {
        ifs.get(a);

        if (a > 64 && a < 91)
        {
            a = a + 32;

            off<<a;
        }

        else if (a >= 97 && a <= 122)
        {
            a = a - 32;

         off<<a;
        }
        else 
        off<<a;
    }
    off.close();

ifstream iffs("newfiile.txt");
    cout << "\n after converting--------->\n";
    ifs.clear();

    ifs.seekg(0, ios::beg);

    while (iffs.eof() != 1)

    {
        iffs.getline(ch, 100);
        cout << ch;
    }
    ifs.close();
    of.close();

    return 0;
}
